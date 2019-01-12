open BsReactNative;
let styles =
  StyleSheet.create(
    Style.{
    "container": style([
            flex(1.0),

      /* padding(Pt(10.)),
      borderStyle(Solid),
      borderColor(String("#ddd")),
      borderBottomWidth(1.), */
    ]),
    "list":style([
      flex(1.0),
      flexDirection(Row)
      ]),
    "title":style([
        fontSize(Float(18.))
    ]),
    "image":style([
        alignContent(FlexStart)
    ]),
    "text":style([
      flex(1.0),
    ]),
    "description":style([
      flex(1.0),
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