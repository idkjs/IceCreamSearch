/** 
 * @flow strict
 * @generated
 * @nolint
 */

// flowlint-next-line nonstrict-import:off
import react_navigation from './react-navigation';

// $FlowExpectedError: Reason checked type sufficiently
import * as React from 'react';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type Props = {};

// In case of type error, check the type of 'make' in 'ReactNavigation.re' and the props of './react-navigation'.
export function react_navigationTypeChecked(props: Props) {
  return <react_navigation {...props}/>;
}

// Export 'make' early to allow circular import from the '.bs.js' file.
export const make: mixed = function _(children) { return ReasonReact.wrapJsForReason(react_navigation, {}, children); };
