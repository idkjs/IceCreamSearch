open BsReactNative;

let component = ReasonReact.statelessComponent("Header");

let make = _children => {
  ...component,
  render: _self =>
    <View style=Styles.header>
      <Text style=Styles.headerText> {ReasonReact.string("IceCreams!")} </Text>
    </View>,
};