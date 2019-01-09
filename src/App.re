/* open BsReactNative; */

let component = ReasonReact.statelessComponent("App");
[@genType]
let make = (_children) => {
  ...component,
render: _self =>
  <ReasonApollo.Provider client=Client.instance>
    <Home />
 </ReasonApollo.Provider>
};


