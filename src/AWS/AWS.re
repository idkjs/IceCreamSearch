module AppSyncConfig = {
  type config = {
    .
    "graphqlEndpoint": string,
    "region": string,
    "authenticationType": string,
    "apiKey": string,
  };
  let config = {
    "graphqlEndpoint": "https://l3p3hundbrfp5f52rf2nj3mqsm.appsync-api.eu-west-1.amazonaws.com/graphql",
    "region": "eu-west-1",
    "authenticationType": "API_KEY",
    "apiKey": "da2-gdjsycubkjdzjmi2bzyzjoyjaa",
  };
};

module AppSync = {
  [@bs.module "aws-appsync"] [@bs.new]
  external makeAWSAppSyncClient :
    {
      .
      "url": Js.Nullable.t(string),
      "region": Js.Nullable.t(string),
      "auth":
        Js.Nullable.t(
          {
            .
            "type": string,
            "apiKey": string,
          },
        ),
    } =>
    'a =
    "AWSAppSyncClient";
  let createAWSAppSyncClient = (~url=?, ~region=?, ~auth=?, ()) => {
    let appSyncClientOptions = {
      "url": Js.Nullable.fromOption(url),
      "region": Js.Nullable.fromOption(region),
      "auth": Js.Nullable.fromOption(auth),
    };
    makeAWSAppSyncClient(appSyncClientOptions);
  };
};