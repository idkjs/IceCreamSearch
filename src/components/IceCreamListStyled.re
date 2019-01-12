open BsReactNative;
open IceCream;
/* open Styles; */
  let styles =
  StyleSheet.create(
    Style.{
      "container":style([
        flex(1.0),
        flexDirection(Row),
        justifyContent(Center),
        alignItems(Center),
      ]),
      "listContainer":style([
        marginTop(Pt(10.)),
      ]),
      "leftbox":style([
        width(Pt(50.0)),
        height(Pt(50.0)),
      ]),
      "rightbox":style([
        flex(1.0),
        width(Pt(50.0)),
        height(Pt(50.0)),
        justifyContent(Center),
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

let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("IceCreamList");
let make = (~items, _children) => {
  ...component,
  render: _self =>
      <ScrollView style=styles##listContainer>
        {items
         |> Array.map(item =>
         <View style=styles##container key={item.id}>
            <View style=styles##leftbox>
              <IceCreamImage image=item.image />
            </View>
            <View style=styles##rightbox>
              <Text style=styles##title> {str(item.name)} </Text>
              <Text style=styles##description> {str(item.description)} </Text>
            </View>
          </View>
            )
         |> ReasonReact.array
         }
      </ScrollView>
};
