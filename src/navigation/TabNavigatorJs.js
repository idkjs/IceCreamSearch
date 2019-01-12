import React from "react";
import { createBottomTabNavigator, createAppContainer } from "react-navigation";
import Home from "../screens/Home.gen";
import AddForm from "../screens/AddForm.gen";

const TabNavigator = createBottomTabNavigator({
  Home: Home,
  AddIceCream: AddForm
});

export default createAppContainer(TabNavigator);
