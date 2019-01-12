/* open BsReactNative;

let users = [
  {
    "name": "Johh Smith",
    "avatar": "https://s3.amazonaws.com/uifaces/faces/twitter/brynn/128.jpg",
    "value": "- 164"
  },
  {
    "name": "Sarah Parker",
    "avatar": "https://s3.amazonaws.com/uifaces/faces/twitter/evagiselle/128.jpg",
    "value": "+ 203",
    "positive": true
  },
  {
    "name": "Paul Allen",
    "avatar": "https://s3.amazonaws.com/uifaces/faces/twitter/jsa/128.jpg",
    "value": "+ 464",
    "positive": true
  },
  {
    "name": "Terry Andrews",
    "avatar":
      "https://s3.amazonaws.com/uifaces/faces/twitter/talhaconcepts/128.jpg",
    "value": "- 80",
    "positive": false
  },
  {
    "name": "Andy Vitale",
    "avatar": "https://s3.amazonaws.com/uifaces/faces/twitter/andyvitale/128.jpg",
    "value": "- 230",
    "positive": false
  },
  {
    "name": "Katy Friedson",
    "avatar": "https://s3.amazonaws.com/uifaces/faces/twitter/kfriedson/128.jpg",
    "value": "+ 160",
    "positive": true
  }
];
let screenWidth = Dimensions.get(`window).width;
let styles =
  StyleSheet.create(
    Style.{
  "statusBar":style([
    height(Pt(10.))
  ]),
  "navBar":style([
    height(Pt(60.)),
    width(Pt(screenWidth)),
    justifyContent(Center),
    alignContent(Center)
  ]),
  "nameHeader":style([
    color(String("black")),
    height(Pt(25.)),
    fontFamily(regular),
    marginLeft(Pt(20.))
  ]),
  "safeAreaView":style([
    flex(1.0),
    backgroundColor(String("rgba(241,240,241,1)"))
  ]),
});

let component = ReasonReact.statelessComponent("ListsScreen1");

let make = (_children) => {
  ...component,
  render: (_self) =>
      <View>
        <SafeAreaView style=styles##safeAreaView>
            <View style=styles##statusBar />
            <View style=styles##navBar>
              <Text style=styles##nameHeader>{ ReasonReact.string("Growing")}</Text>
            </View>
          </SafeAreaView>
      </View>
};
            /* <ScrollView style={{ flex: 1, marginBottom: 20 }}>
              <View
                style={{
                  flex: 1,
                  flexDirection: "column",
                  backgroundColor: "white",
                  borderRadius: 5,
                  alignItems: "center",
                  marginHorizontal: 10,
                  height: 250,
                  marginBottom: 10
                }}
              >
                <View style={{ flex: 3, flexDirection: "row" }}>
                  <View
                    style={{
                      flex: 1,
                      justifyContent: "center",
                      alignItems: "center"
                    }}
                  >
                    <Avatar
                      width={145}
                      height={145}
                      source={{
                        uri:
                          "https://s3.amazonaws.com/uifaces/faces/twitter/jsa/128.jpg"
                      }}
                      activeOpacity={0.7}
                      avatarStyle={{ borderRadius: 145 / 2 }}
                      overlayContainerStyle={{ backgroundColor: "transparent" }}
                    />
                  </View>
                  <View
                    style={{
                      flex: 1,
                      justifyContent: "center",
                      alignItems: "center"
                    }}
                  >
                    <View
                      style={{
                        flex: 1,
                        marginTop: 10,
                        justifyContent: "center"
                      }}
                    >
                      <Text
                        style={{
                          fontFamily: "bold",
                          fontSize: 25,
                          color: "rgba(98,93,144,1)",
                          marginLeft: -15
                        }}
                      >
                        Paul Allen
                      </Text>
                    </View>
                  </View>
                </View>
                <View
                  style={{
                    width: 300,
                    borderWidth: 0.5,
                    borderColor: "rgba(222, 223, 226, 1)",
                    marginHorizontal: 20,
                    height: 1,
                    marginVertical: 10
                  }}
                />
                <View
                  style={{
                    flex: 1,
                    flexDirection: "row",
                    alignItems: "center"
                  }}
                >
                  <View style={{ flex: 1, alignItems: "center" }}>
                    <Button
                      title="View Profile"
                      buttonStyle={{
                        height: 33,
                        width: 120,
                        backgroundColor: "rgba(222, 223, 226, 1)",
                        borderRadius: 5
                      }}
                      titleStyle={{
                        fontFamily: "regular",
                        fontSize: 13,
                        color: "gray"
                      }}
                      onPress={() => console.log("aye")}
                      underlayColor="transparent"
                    />
                  </View>
                  <View style={{ flex: 1, alignItems: "center" }}>
                    <Button
                      title="Add User"
                      buttonStyle={{
                        height: 33,
                        width: 120,
                        backgroundColor: "rgba(113, 154, 112, 1)",
                        borderRadius: 5
                      }}
                      titleStyle={{
                        fontFamily: "regular",
                        fontSize: 13,
                        color: "white"
                      }}
                      onPress={() => console.log("aye")}
                      underlayColor="transparent"
                    />
                  </View>
                </View>
              </View>
              {this.renderListCards()}
            </ScrollView>
          </SafeAreaView>
      </View> */
    /* );
  }
}; */ */