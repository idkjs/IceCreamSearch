/** 
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as StyledListBS from './StyledList.bs';

export type Props = {|+children?: mixed|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  StyledListBS.component,
  (function _(jsProps: Props) {
     return StyledListBS.make(jsProps.children);
  }));

export default component;
