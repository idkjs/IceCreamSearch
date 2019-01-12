/** 
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as FlexDirectionBS from './FlexDirection.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type Props = {|+children?: mixed|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  FlexDirectionBS.component,
  (function _(jsProps: Props) {
     return FlexDirectionBS.make(jsProps.children);
  }));

export default component;
