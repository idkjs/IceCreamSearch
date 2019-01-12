open BsReactNative;
/* open FormStyle; */

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
    <View style=FormStyle.container>
      <View style=Styles.inputContainer>
        <TextInput style=Styles.input
        placeholder="IceCream to add"
          autoFocus=true
          multiline=false
          value=name
          clearTextOnFocus=true
          onChangeText={name => send(UpdateName(name))}
        />
      </View>
      <Text> {ReasonReact.string(" ")} </Text>
      <View style=Styles.inputContainer>
        <TextInput style=Styles.input
        placeholder="Description"
          autoFocus=false
          multiline=true
          value=description
          clearTextOnFocus=true
          onChangeText={description => send(UpdateDescription(description))}
        />
      </View>
      <AddButton title="Add IceCream" name description />
    </View>,
};