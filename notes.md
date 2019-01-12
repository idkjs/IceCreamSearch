# ReactNative

## Clearing TextInput

see:<https://github.com/jpsierens/reason-tags-input/blob/master/src/TagsInput.re>

## IceCreamData Processing

- searchField to lower case:
```sh
cat searchField.json| jq '.[] | {name: .name, description: .description, searchField: .searchField} |.searchField |= ascii_downcase' | jq -s '.' | less
```

## Upload to IceCreamTable
Convert JSON to DYNAMODB with included table name. Use [json-dynamo-putrequest](https://www.npmjs.com/package/json-dynamo-putrequest)

`json-dynamo-putrequest IceCreamTable searchFieldlwc.json --beautify > upload.json`
`json-dynamo-putrequest business biz10NoNull.json --beautify > ddb.biz10NoNull.json`

Then push to DynamoDB, run `aws dynamodb batch-write-item --request-items file://ddb.biz10NoNull.json`

## aws get-introspection-schema

`aws appsync get-introspection-schema --api-id 2x7qkgrbzzdg5berc3c5cchxdq --format JSON graphql_schema.json`