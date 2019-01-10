/* open BsReactNative;
open Styles;
/* create Config Module which holds the typs for route and navigation. Nav needs to be typed to resolve error when passing navigation to HomeScreen component which is throwing and error. */
module Config = {
  type route =
      |Screen(string)
      |Home;

  type navigation = TabNavigator.navigation(route);
};
let str = ReasonReact.string;

module HomeScreen = {
  open Config;
  let component = ReasonReact.statelessComponent("HomeScreen");

let debuggerString = switch(Platform.os()){
  | Platform.IOS(_) => "Press CMD+R to reload,\n CMD+D or shake for dev menu"
  | Platform.Android => "Double tap R on your keyboard\nor shake for dev menu"
}
  let make = (~navigation:navigation , _children) => {
    ...component,
    /* execute animation function */
    render: _self =>
      <View style=styles##container>
        <Text style=styles##title> {str("Welcome to React Native")} </Text>
        <Text style=styles##title>
          {str(debuggerString)}
          /* {str("Press CMD+R to reload,\n CMD+D or shake for dev menu")} */
        </Text>
        <Button title="Nav to New Route" onPress={() => navigation.push(Screen("Test String"))}/>
      </View>,
  };
};

module Screen = {
  let component = ReasonReact.statelessComponent("Screen");
  let make = (~heading, _children) =>{
    ...component,
    render: _self =>
    <View style=styles##container>
        <Text style=styles##title>
          {str(heading)}
        </Text>
      </View>,
  }
};

module NavigationConfig = {
  open TabNavigator;
  open Config;
  type route = Config.route;
  let initialRoute = Home;

  let getScreen = (route, navigation) =>
  /* return a tuple with screenOptions as second arg in tuple
  screenOption has a bunch of properties, ie title. we pass a title value then call.
  */
  switch(route) {
    | Home => (<HomeScreen navigation/>, screenOptions(~title="Home Screen",()))
    | Screen(heading) => (<Screen heading />, screenOptions(~title=heading, ()))
  };
};

module Stack = TabNavigator.Create(NavigationConfig);
/* let app = () => <HomeScreen />; */
/* set app to Stack's navigator function which will take care of which screen to show the user first based on the initialRoute property we set in Config */
let app = Stack.navigator; */