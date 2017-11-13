let component = ReasonReact.statelessComponent("Buttons");

let make = (~dispatch, _children) => {
  ...component,
  render: _self =>
    <div>
      <ButtonGroup>
        <GreenButton dispatch action=Clear />
        <GreenButton dispatch action=PosNeg />
        <GreenButton dispatch action=Percent />
        <OperationButton dispatch action=Divide />
      </ButtonGroup>
      <ButtonGroup>
        <ValueButton dispatch value="7" />
        <ValueButton dispatch value="8" />
        <ValueButton dispatch value="9" />
        <OperationButton dispatch action=Multiply />
      </ButtonGroup>
      <ButtonGroup>
        <ValueButton dispatch value="4" />
        <ValueButton dispatch value="5" />
        <ValueButton dispatch value="6" />
        <OperationButton dispatch action=Subtract />
      </ButtonGroup>
      <ButtonGroup>
        <ValueButton dispatch value="1" />
        <ValueButton dispatch value="2" />
        <ValueButton dispatch value="3" />
        <OperationButton dispatch action=Add />
      </ButtonGroup>
      <ButtonGroup>
        <ValueButton dispatch expand=true value="0" />
        <ValueButton dispatch value="." />
        <OperationButton dispatch action=Equals />
      </ButtonGroup>
    </div>
};
