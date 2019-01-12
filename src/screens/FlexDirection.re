open BsReactNative;
let styles =
  StyleSheet.create(
    Style.{
      "container":style([
        flex(1.0),
        flexDirection(Row),
        padding(Pt(10.)),
        borderStyle(Solid),
        borderColor(String("#ddd")),
        borderBottomWidth(1.),
      ]),
      "leftbox":style([
        width(Pt(50.0)),
        height(Pt(50.0)),
        backgroundColor(String("powderblue")),
      ]),
      "rightbox":style([
        flex(1.0),
        width(Pt(50.0)),
        height(Pt(50.0)),
        backgroundColor(String("red")),
        alignContent(Center)
      ]),
      "title":style([
        fontSize(Float(18.))
    ]),
    "description":style([
      flex(1.0),
      fontSize(Float(15.)),
      color(String("rgba(0, 0, 0, .5)"))
    ]),
    })

module TestImage = {
  let component = ReasonReact.statelessComponent("MyComponent");

let make = _children => {
  ...component,
  render: _self =>
    <Image
      source=(
        `URI(
          Image.(
            imageURISource(
              ~uri="https://bit.ly/2ya4e2o",
              ~width=Pt(50.),
              ~height=Pt(50.),
              (),
            )
          ),
        )
      )
    />,
};
}
let component = ReasonReact.statelessComponent("FlexDirection");
[@genType]
let make = (_children) => {
  ...component,
  render: (_self) =>
  <View style=styles##container>
  <View style=styles##leftbox><TestImage/></View>
  <View style=styles##rightbox>
    <Text style=styles##title>{ReasonReact.string("Title")}</Text>
    <Text style=styles##description>{ReasonReact.string("Description")}</Text>
  </View>
  </View>
};
/* let component = ReasonReact.statelessComponent("FlexDirection");
[@genType]
let make = (_children) => {
  ...component,
  render: (_self) =>
  <View style=styles##container>
  <View style=styles##leftbox />
  <View style=styles##rightbox />
  </View>
}; */