/* /* module Config = {
     type tabs = AddCity | Home;
     type route =
         |AddCity
         |Home;

     type navigation = TabNavigator.navigation(route);
   }; */
module NavigationConfig = {
  /* open TabNavigator; */
  open Config;
  type tabs = Config.tabs;
  type order = list(tabs);

    let tabBarOptions =
      TabNavigator.tabBarOptions(~activeTintColor="#847", ());

let order = [Home, AddCity];
let tabs = order;
  let getTab = (tabs) => {
    switch (tabs) {
      | Home => (
        "Home",
        (
          (navigation => <HomeTab navigation />),
          TabNavigator.screenOptions(~title="Home", ()),
        ),
      )
    | AddCity => (
        "AddCity",
        (
          (navigation => <AddForm navigation />),
          TabNavigator.screenOptions(~title="AddCity", ()),
        ),
      )
    };
  };
};

module Stack = TabNavigator.Create(NavigationConfig);

let app = Stack.navigator; */