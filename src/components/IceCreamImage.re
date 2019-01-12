open BsReactNative;
open Styles;
let component = ReasonReact.statelessComponent("IceCreamImage");

let make = (~image, _children) => {
  ...component,
  render: ( _self) => {
    let imageUri = "https://www.benjerry.com" ++ image;
    /* let defaultImg =(`Required(Packager.require("../../assets/icon.png"))); */

  <Image
      source=(
        `URI(
          Image.(
            imageURISource(
              ~uri=imageUri,
              ~width=Pt(50.),
              ~height=Pt(50.),
              (),
            )
          ),
        )
      )
    />
    }
};