/** 
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as AppBS from './App.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type Props = {|+children?: mixed|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  AppBS.component,
  (function _(jsProps: Props) {
     return AppBS.make(jsProps.children);
  }));

export default component;
