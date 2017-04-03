type model =
  | Add
  | Clear
  | Divide
  | Equals
  | Pending
  | Input string
  | Multiply
  | Subtract;

/* model -> (int -> int -> int) */
let toInfix action =>
  switch action {
    | Add => (+)
    | Divide => (/)
    | Multiply => (*)
    | Subtract => (-)
    /* noop function */
    | _ => (fun _ _ => 0)
  };

/* model -> string */
let toText action =>
  switch action {
    | Add => "+"
    | Clear => "Clear"
    | Divide => "&divide;"
    | Equals => "="
    | Multiply => "&times;"
    | Subtract => "&minus;"
    | _ => ""
  };