type debounceOptions = {
  .
  "leading": bool,
  "maxWait": int,
  "trailing": bool
};

module Debounce = {
  [@bs.module]
  external _make :
    ('fArgs => 'fOutput, int, debounceOptions) => [@bs] ('fArgs => 'fOutput) =
    "lodash.debounce";
  let make = (~wait=0, ~options=Js.Obj.empty(), f) => _make(f, wait, options);
  let call = (input, f) => [@bs] f(input);
};