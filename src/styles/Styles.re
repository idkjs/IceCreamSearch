open BsReactNative;
let styles =
  StyleSheet.create(
    Style.{
    "container": style([
      padding(Pt(10.)),
      borderStyle(Solid),
      borderColor(String("#ddd")),
      borderBottomWidth(1.),
    ]),
    "app":style([textAlign(Center)]),
    "title":style([
        fontSize(Float(18.))
        ]),
    "description":style([
    fontSize(Float(15.)),
    color(String("rgba(0, 0, 0, .5)"))
    ]),
    "inputStyle":style([
    height(Pt(40.)),
    width(Pt(300.)),
    padding(Pt(7.)),
    fontSize(Float(15.)),
]),
});