open BsReactNative.Style;
let container = style([
  flex(1.0),
  flexDirection(Row),
  justifyContent(Center),
  alignItems(Center),
]);
let inputContainer = style([
  flex(1.0),
  flexDirection(Row),
  justifyContent(Center),
  alignItems(Center),
]);
let listContainer = style([
  marginTop(Pt(10.)),
]);
let leftbox = style([
  width(Pt(50.0)),
  height(Pt(50.0)),
]);
let rightbox = style([
  flex(1.0),
  width(Pt(50.0)),
  height(Pt(50.0)),
  justifyContent(Center),
]);
let title = style([
  fontSize(Float(18.))
]);
let description = style([
  flex(1.0),
  fontSize(Float(15.)),
  color(String("rgba(0, 0, 0, .5)"))
]);
let header = style([
  marginTop(Pt(40.)),
  width(Pct(100.)),
]);
let headerText = style([
  textAlign(Center),
  fontSize(Float(40.)),
  color(String("rgba(175, 47, 47, 0.25)")),
  fontWeight(`_400),
]);
let text = style([
  flex(1.0),
]);
let inputContainer = style([
    marginLeft(Pt(20.)),
    marginRight(Pt(20.)),
    shadowOpacity(0.2),
    shadowRadius(3.),
    shadowColor(String("#000000")),
    shadowOffset(~height=2., ~width=2.),
]);
let input = style([
      backgroundColor(String("#ffffff")),
      height(Pt(40.)),
      width(Pt(300.)),
      /* padding(Pt(7.)), */
      /* paddingLeft(Pt(10.)),
      paddingRight(Pt(10.)), */
      textAlign(Center),
]);
