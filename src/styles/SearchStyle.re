open BsReactNative.Style;

let wrapper = style([
  backgroundColor(String("rgba(255,255,255,0.9)")),
  position(Absolute),
  top(Pt(0.)),
  left(Pt(0.)),
  width(Pct(100.)),
  height(Pt(80.0)),
  zIndex(99),
]);
let searchContainer = style([
  display(Flex),
  borderWidth(1.),
  borderColor(String(Colors.gray03)),
  backgroundColor(String(Colors.white)),
  shadowColor(String("rgba(0,0,0,0.1)")),
  shadowOffset(~width=(0.0), ~height=(5.0)),
  shadowOpacity(0.7),
  shadowRadius(10.0),
  borderRadius(3.0),
  height(Pt(40.0)),
  marginTop(Pt(28.0)),
  marginLeft(Pt(21.0)),
  marginRight(Pt(21.0)),
]);
let searchIcon = style([
    position(Absolute),
    top(Pt(9.)),
    left(Pt(18.)),
]);
let textInput = style([
  display(Flex),
  marginTop(Pt(11.0)),
  marginLeft(Pt(44.0)),
  borderColor(String(Colors.gray02)),
]);