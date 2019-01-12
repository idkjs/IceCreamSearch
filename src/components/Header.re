open BsReactNative;

let component = ReasonReact.statelessComponent("Header");

module Styles = {
  open Style;

  let header = style([marginTop(Pt(80.))]);

  let headerText =
    style([
      textAlign(Center),
      fontSize(Float(72.)),
      color(String("rgba(175, 47, 47, 0.25)")),
      fontWeight(`_400),
    ]);
};

let make = _children => {
  ...component,
  render: _self =>
    <View style=Styles.header>
      <Text style=Styles.headerText> {ReasonReact.string("IceCreams!")} </Text>
    </View>,
};