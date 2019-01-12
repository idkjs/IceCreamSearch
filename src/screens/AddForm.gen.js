/**
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as AddFormBS from "./AddForm.bs";

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from "reason-react/src/ReasonReact.js";

export type Props = {| +children?: mixed |};

export const component: React$ComponentType<
  Props
> = ReasonReact.wrapReasonForJs(AddFormBS.component, function _(
  jsProps: Props
) {
  return AddFormBS.make(jsProps.children);
});

export default component;
