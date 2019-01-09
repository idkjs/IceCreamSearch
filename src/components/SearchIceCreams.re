open BsReactNative;
open IceCream;
module Search = [%graphql
  {|
  query($searchQuery: String) {
    listIceCreams(filter: {
      searchField: {
        contains: $searchQuery
      }
    }) {
      items @bsRecord{
        id
        name
        description
        rating
      }
    }
  }
|}
];

module SearchQuery = ReasonApollo.CreateQuery(Search);

let component = ReasonReact.statelessComponent("SearchIceCreams");

let make = (~searchQuery, _children) => {
  ...component,
  render: _ => {
    let searchQuery = Search.make(~searchQuery, ());
    <SearchQuery variables=searchQuery##variables>
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
    </SearchQuery>;
  },
};
