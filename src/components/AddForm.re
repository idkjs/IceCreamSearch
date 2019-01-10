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
    <View style=styles##app>
    <Text> {ReasonReact.string("SPACER")} </Text>
    <Text> {ReasonReact.string("SPACER")} </Text>
      <Text> {ReasonReact.string("IceCream to add")} </Text>
      <TextInput
        autoFocus=true
        style=styles##inputStyle
        multiline=false
        value=name
        onChangeText={name => send(UpdateName(name))}
      />
      <Text> {ReasonReact.string("Description")} </Text>
      <TextInput
        autoFocus=false
        style=styles##inputStyle
        multiline=true
        value=description
        onChangeText={description => send(UpdateDescription(description))}
      />
      /* <Button
        color="tomato"
        title="Add IceCream"
        onPress={() => Js.log("name: " ++ name ++ " | desc:" ++ description)}
      /> */
      <AddButton title="Add IceCream" name description />
      /* <Button
        color="red"
        title="Press me"
        onPress={() => navigation.navigate("Home")}
      /> */
    </View>,
};