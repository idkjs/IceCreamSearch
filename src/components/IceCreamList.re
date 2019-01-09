open BsReactNative;
open IceCream;
open Styles;
let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("VideoGameList");

let make = (~items, _children) => {
  ...component,
  render: _self =>
    <View style=styles##app>
      {items
       /* |> Array.map(iceCreamFromJs) */
       |> Array.map(item =>
            <View key={item.id} style=styles##container>
              <Text style=styles##title> {ReasonReact.string(item.name)} </Text>
              <Text style=styles##description> {ReasonReact.string(item.description)} </Text>
            </View>
          )
       |> ReasonReact.array
       }
    </View>,
};