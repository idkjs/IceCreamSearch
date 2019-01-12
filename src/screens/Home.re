open BsReactNative;
open Styles;

type state = {search: string};

type actions =
  | ChangeSearch(string);

let changeSearch = send => {
  open Utils.Debounce;
  let update = make(newValue => send(ChangeSearch(newValue)), ~wait=250);
  newValue => update |> call(newValue);
};

let reducer = (action, _state) =>
  switch action {
  | ChangeSearch(newValue) => ReasonReact.Update({search: (newValue->String.lowercase)})
  };

let initialState = () => {search: ""};
let component = ReasonReact.reducerComponent(__MODULE__);

[@genType]
let make = (_children) => {
  ...component,
  initialState,
  reducer,
  render:({state,send}) =>
 <View style=Styles.container>
     <Header />
      <Search onChange=(changeSearch(send)) />
      {
        switch(state.search){
        | ("") => <ListIceCreams />
        | (search) => <SearchIceCreams searchQuery=search />
        }
      }
    </View>,
};
