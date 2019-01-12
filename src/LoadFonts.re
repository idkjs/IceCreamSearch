open BsReactNative;
[@bs.module "expo"] [@bs.scope "Font"]
external loadAsync : Js.Dict.t(Packager.required) => Js.Promise.t(unit) = "";
let loadAll = fonts =>
  Belt_List.map(fonts, ((name, font: Packager.required)) => (name, font))
  |> Js.Dict.fromList
|> loadAsync;