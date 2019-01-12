import React from "react";
import { createBottomTabNavigator, createAppContainer } from "react-navigation";
import Home from "../screens/Home.gen";
import AddForm from "../screens/AddForm.gen";
// import FlexDirection from "../screens/FlexDirection.gen";
// import StyledList from "../screens/StyledList.gen";
// import Settings from "../screens/settings";

/*
  const AddCityStack = createStackNavigator({
  Home: Home,
  AddCity: AddForm,
});
const TabNavigator = createBottomTabNavigator({
  Home: Home,
  AddCity: AddCityStack,
});
*/
const TabNavigator = createBottomTabNavigator({
  Home: Home,
  AddCity: AddForm
});

export default createAppContainer(TabNavigator);
