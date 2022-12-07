irstrobe = "ACE_IR_Strobe_Effect" createVehicle getpos player;
irstrobe attachTo [player,[0,0,0.2],"neck"];

WaitUntil{not isNull player};
player addEventHandler ["killed", {strobe = false}];

if (true) exitWith {};