open BsReactNative;
open IceCream;
let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("IceCreamList");
let make = (~items, _children) => {
  ...component,
  render: _self =>
    <ScrollView style=Styles.listContainer>
      {items
       |> Array.map(item =>
            <View style=Styles.container key={item.id}>
              <View style=Styles.leftbox>
              <IceCreamImage image=item.image />
            </View>
              <View style=Styles.rightbox>
              <Text style=Styles.title> {str(item.name)} </Text>
              <Text style=Styles.description> {str(item.description)} </Text>
            </View>
            </View>
          )
       |> ReasonReact.array
       }
    </ScrollView>,
};