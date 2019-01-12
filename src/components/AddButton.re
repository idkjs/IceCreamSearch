open BsReactNative;

module AddIceCream = [%graphql
  {|
    mutation AddIceCream($name: String!, $description: String!) {
      createIceCream(input: {
        name: $name
        description: $description
      }) {
        name @bsRecord
      }
    }
  |}
];

module AddIceCreamButton = ReasonApollo.CreateMutation(AddIceCream);

let component = ReasonReact.statelessComponent("AddIceCream");

[@genType]
let make =
    (
      ~name="name default",
      ~description="description default",
      ~title,
      _children,
    ) => {
  ...component,
  render: _self => {
    let addIceCream = AddIceCream.make(~name, ~description, ());
    <AddIceCreamButton>
      ...{(mutation, {result}) =>
        <View>
          <Button
            title=title
            onPress={_ =>
              mutation(
                ~variables=addIceCream##variables,
                ~refetchQueries=[|"listIceCreams"|],
                (),
              )
              |> ignore
            }/>
          {switch (result) {

           | Loading => <Text> {ReasonReact.string("Searching")} </Text>
           /* | NotCalled => <ListIceCreams /> */
           | NotCalled => ReasonReact.null
           | Error(error) =>
             <Text> {ReasonReact.string(error##message)} </Text>
           | Data(response) =>
             Js.log(response);
             <ListIceCreams />;
           }}
        </View>
      }
    </AddIceCreamButton>;
  },
};