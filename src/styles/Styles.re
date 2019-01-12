open BsReactNative;
open Style;
let container = style([
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
let text = style([
  flex(1.0),
])
let inputStyle = style([
  height(Pt(40.)),
  width(Pt(300.)),
  padding(Pt(7.)),
  fontSize(Float(15.)),
]);
