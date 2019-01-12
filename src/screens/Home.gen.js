/**
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as HomeBS from "./Home.bs";

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from "reason-react/src/ReasonReact.js";

export type Props = {| +children?: mixed |};

export const component: React$ComponentType<
  Props
> = ReasonReact.wrapReasonForJs(HomeBS.component, function _(jsProps: Props) {
  return HomeBS.make(jsProps.children);
});

export default component;
