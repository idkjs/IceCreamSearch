/**
 * @flow strict
 * @generated
 * @nolint
 */

// flowlint-next-line nonstrict-import:off
import TabNavigatorJs from "./TabNavigatorJs";

// $FlowExpectedError: Reason checked type sufficiently
import * as React from "react";

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from "reason-react/src/ReasonReact.js";

export type Props = {};

// In case of type error, check the type of 'make' in 'TabNavigatorRe.re' and the props of './TabNavigatorJs'.
export function TabNavigatorJsTypeChecked(props: Props) {
  return <TabNavigatorJs {...props} />;
}

// Export 'make' early to allow circular import from the '.bs.js' file.
export const make: mixed = function _(children) {
  return ReasonReact.wrapJsForReason(TabNavigatorJs, {}, children);
};
