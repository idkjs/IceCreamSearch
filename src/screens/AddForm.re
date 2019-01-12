open BsReactNative;
open Styles;

type state = {
  name: string,
  description: string,
};
type action =
  | UpdateName(string)
  | UpdateDescription(string);

let initialState = () => {name: "", description: ""};
let reducer = (action, state) => {
  switch (action) {
  | UpdateName(name) => ReasonReact.Update({...state, name})
  | UpdateDescription(description) =>
    ReasonReact.Update({...state, description})
  };
};

let component = ReasonReact.reducerComponent(__MODULE__);
[@genType]
let make = (_children) => {
  ...component,
  initialState,
  reducer,
  render: ({state: {name, description}, send}) =>
    <View>
    <Text> {ReasonReact.string("SPACER")} </Text>
    <Text> {ReasonReact.string("SPACER")} </Text>
      <Text> {ReasonReact.string("IceCream to add")} </Text>
      <TextInput
        autoFocus=true
        multiline=false
        value=name
        clearTextOnFocus=true
        onChangeText={name => send(UpdateName(name))}
      />
      <Text> {ReasonReact.string("Description")} </Text>
      <TextInput
        autoFocus=false
        multiline=true
        value=description
        clearTextOnFocus=true
        onChangeText={description => send(UpdateDescription(description))}
      />
      <AddButton title="Add IceCream" name description />
    </View>,
};