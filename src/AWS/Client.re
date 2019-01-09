open AWS.AppSyncConfig;

let instance =
  AWS.AppSync.createAWSAppSyncClient(
    ~url=config##graphqlEndpoint,
    ~region=config##region,
    ~auth={"type": config##authenticationType, "apiKey": config##apiKey},
    (),
  );

