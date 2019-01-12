/**
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as AddButtonBS from "./AddButton.bs";

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from "bs-platform/lib/es6/curry.js";

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from "reason-react/src/ReasonReact.js";

export type Props = {|
  +name?: string,
  +description?: string,
  +title: string,
  +children?: mixed
|};

export const component: React$ComponentType<
  Props
> = ReasonReact.wrapReasonForJs(AddButtonBS.component, function _(
  jsProps: Props
) {
  return Curry._4(
    AddButtonBS.make,
    jsProps.name,
    jsProps.description,
    jsProps.title,
    jsProps.children
  );
});

export default component;
