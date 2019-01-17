open BsReactNative;
open ReasonExpoVectorIcons;
type state = {value: string};

type action =
  | ChangeValue(string);

let component = ReasonReact.reducerComponent("Search");

let reducer = (action, _state) =>
  switch (action) {
  | ChangeValue(newValue) => ReasonReact.Update({value: newValue})
  };

let make = (~initialValue="", ~onChange=_newValue => (), _children) => {
  ...component,
  initialState: () => {value: initialValue},
  reducer,
  render: ({send, state:{value}}) =>
    <View style=SearchStyle.wrapper>
      <View style=SearchStyle.searchContainer>
      <Ionicons style=SearchStyle.searchIcon name=`iosSearch size=20 color=Colors.gray02 />
        <TextInput
          style=SearchStyle.textInput
          placeholder="Try Chocolate"
          clearTextOnFocus=true
          value=value
            onChangeText={ value =>
            {send(ChangeValue(value));
            onChange(value)}
            }
        />
      </View>
    </View>,
};