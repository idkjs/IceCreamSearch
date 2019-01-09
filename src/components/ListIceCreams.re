open BsReactNative;

open IceCream;
module ListIceCreams = [%graphql
  {|
  query listAll {
  listIceCreams {
    items @bsRecord{
      name
      description
      id
      rating
    }
  }
}
|}
];

module ListIceCreamsQuery = ReasonApollo.CreateQuery(ListIceCreams);

let component = ReasonReact.statelessComponent("ListIceCreams");

let make = (_children) => {
  ...component,
  render: _ => {
    <ListIceCreamsQuery>
      ...{
           ({result}) =>
             switch (result) {
             | Loading => <Text> {ReasonReact.string("Searching")} </Text>
             | Error(error) =>
               <Text> {ReasonReact.string(error##message)} </Text>
             | Data(response) => {
              let items = [%get_in response##listIceCreams#??items];
              switch (items) {
               | None => <Text> {ReasonReact.string("Nothing to Show")} </Text>
               | Some(items) =>
                 let items = items->Belt.Array.keepMap(item => item);
                 <IceCreamList items />
               }
             }
         }
      }
    </ListIceCreamsQuery>;
  },
};
