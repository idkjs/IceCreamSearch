open BsReactNative;
let component = ReasonReact.statelessComponent("MyComponent");

let make = _children => {
  ...component,
  render: _self =>
    <Button
      color="tomato"
      title="Press me"
      onPress=(() => Js.log("pressed"))
    />,
};