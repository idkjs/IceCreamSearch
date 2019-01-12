open BsReactNative;
open IceCream;
open Styles;
let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("IceCreamList");
let make = (~items, _children) => {
  ...component,
  render: _self =>
    <ScrollView>
      {items
       |> Array.map(item =>
            <View key={item.id}>
              <IceCreamImage image=item.image />
              <Text> {ReasonReact.string(item.name)} </Text>
                <Text> {ReasonReact.string(item.description)} </Text>
            </View>
          )
       |> ReasonReact.array
       }
    </ScrollView>,
};