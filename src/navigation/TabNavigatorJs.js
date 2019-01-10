import React from 'react';
import { Text, View } from 'react-native';
import { createStackNavigator, createBottomTabNavigator, createAppContainer } from 'react-navigation';
import Home from '../Home.gen';
import AddForm from "../components/AddForm.gen";

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
  AddCity: AddForm,
});

export default createAppContainer(TabNavigator);
