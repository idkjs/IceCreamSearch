/* file: Recompose.re */
/* https://medium.com/@_gabrielrubens/binding-a-react-hoc-to-reasonml-children-as-function-d2688e4edaae */
/* The very definition of a HOC, it's a function that gets a react component and returns another react component */
type hoc = ReasonReact.reactClass => ReasonReact.reactClass;

module type CreateWithStateParams = {
  /* This is the secret sauce ingredient, with it the users can pass whatever state they want */
  type state;
  let defaultValue: state;
};

module CreateWithState = (Params: CreateWithStateParams) => {
  /* Here we give the Params.state as the type to our default state to the function signature. */
  [@bs.module "recompose"] external withState : (string, string, Params.state) => hoc =
    "withState";
  /* Gets the Params.state argument and returns nothing. `unit` is OCaml nothing type.
  ** The "dot" notation is a way to tell BS to not curry this function, useful for functions coming directly from JS.
  ** Read more here https://bucklescript.github.io/docs/en/function#extra-solution
  */
  type setState = (. Params.state) => unit;
  /* Our children will be a function that receives two labels: setState and state.
  ** Then it returns a ReasonReact.reactElement;
  */
  type children = (~setState: setState, ~state: Params.state) => ReasonReact.reactElement;
  let component = ReasonReact.statelessComponent("WithState");
  /* This is our real ReasonReact component that will call our children passing the right args. */
  let make' = (~setState: setState, ~state: Params.state, children: children) => {
    ...component,
    render: (_self) => children(~setState, ~state)
  };
  /* Before giving our Reason component to the HOC we need to wrap it for JS
  ** So we can properly pass the props from JS to Reason.
  */
  let jsComponent =
    ReasonReact.wrapReasonForJs(
      ~component,
      /* The props type here is a Js.t (a JS object bound within Reason)
       * You can tell by the dot in front and all the keys being wrapped with quotes.
       * This is a nice syntax sugar from Reason that allows us to write JS object nicely within here.
       */
      (props: {. "setState": setState, "state": Params.state, "children": children}) =>
        /* Now we call our guy passing its params properly */
        /* We access properties from a Js.t using `##`*/
        make'(~setState=props##setState, ~state=props##state, props##children)
    );
  /* Now we do the actualy call, giving the withState it's expected arguments and giving our wrapped Reason component */
  let enhanced = withState("state", "setState", Params.defaultValue, jsComponent);
  /* Remember that withState will return a JS Component to us, not a ReasonReact one. So we need to wrap it back for Reason */
  let make = (children: children) =>
    ReasonReact.wrapJsForReason(~reactClass=enhanced, ~props=Js.Obj.empty(), children);
};
