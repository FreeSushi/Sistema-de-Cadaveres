function createPlayerTextdraws( playerid ) {

	registerPTD[playerid][0] = CreatePlayerTextDraw(playerid, 140.841873, 183.583374, "");
	PlayerTextDrawLetterSize(playerid, registerPTD[playerid][0], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, registerPTD[playerid][0], 31.000000, 31.000000);
	PlayerTextDrawAlignment(playerid, registerPTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, registerPTD[playerid][0], -1);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, registerPTD[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, registerPTD[playerid][0], 153);
	PlayerTextDrawFont(playerid, registerPTD[playerid][0], 5);
	PlayerTextDrawSetProportional(playerid, registerPTD[playerid][0], 0);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][0], 0);
	PlayerTextDrawSetSelectable(playerid, registerPTD[playerid][0], true);
	PlayerTextDrawSetPreviewModel(playerid, registerPTD[playerid][0], 0);
	PlayerTextDrawSetPreviewRot(playerid, registerPTD[playerid][0], 0.000000, 0.000000, 0.000000, 1.000000);

	registerPTD[playerid][1] = CreatePlayerTextDraw(playerid, 173.169830, 183.583374, "");
	PlayerTextDrawLetterSize(playerid, registerPTD[playerid][1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, registerPTD[playerid][1], 31.000000, 31.000000);
	PlayerTextDrawAlignment(playerid, registerPTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, registerPTD[playerid][1], -1);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, registerPTD[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, registerPTD[playerid][1], 153);
	PlayerTextDrawFont(playerid, registerPTD[playerid][1], 5);
	PlayerTextDrawSetProportional(playerid, registerPTD[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][1], 0);
	PlayerTextDrawSetSelectable(playerid, registerPTD[playerid][1], true);
	PlayerTextDrawSetPreviewModel(playerid, registerPTD[playerid][1], 0);
	PlayerTextDrawSetPreviewRot(playerid, registerPTD[playerid][1], 0.000000, 0.000000, 0.000000, 1.000000);

	registerPTD[playerid][2] = CreatePlayerTextDraw(playerid, 140.841873, 216.066726, "");
	PlayerTextDrawLetterSize(playerid, registerPTD[playerid][2], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, registerPTD[playerid][2], 31.000000, 31.000000);
	PlayerTextDrawAlignment(playerid, registerPTD[playerid][2], 1);
	PlayerTextDrawColor(playerid, registerPTD[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, registerPTD[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, registerPTD[playerid][2], 153);
	PlayerTextDrawFont(playerid, registerPTD[playerid][2], 5);
	PlayerTextDrawSetProportional(playerid, registerPTD[playerid][2], 0);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][2], 0);
	PlayerTextDrawSetSelectable(playerid, registerPTD[playerid][2], true);
	PlayerTextDrawSetPreviewModel(playerid, registerPTD[playerid][2], 0);
	PlayerTextDrawSetPreviewRot(playerid, registerPTD[playerid][2], 0.000000, 0.000000, 0.000000, 1.000000);

	registerPTD[playerid][3] = CreatePlayerTextDraw(playerid, 173.169830, 216.066726, "");
	PlayerTextDrawLetterSize(playerid, registerPTD[playerid][3], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, registerPTD[playerid][3], 31.000000, 31.000000);
	PlayerTextDrawAlignment(playerid, registerPTD[playerid][3], 1);
	PlayerTextDrawColor(playerid, registerPTD[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, registerPTD[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, registerPTD[playerid][3], 153);
	PlayerTextDrawFont(playerid, registerPTD[playerid][3], 5);
	PlayerTextDrawSetProportional(playerid, registerPTD[playerid][3], 0);
	PlayerTextDrawSetShadow(playerid, registerPTD[playerid][3], 0);
	PlayerTextDrawSetSelectable(playerid, registerPTD[playerid][3], true);
	PlayerTextDrawSetPreviewModel(playerid, registerPTD[playerid][3], 0);
	PlayerTextDrawSetPreviewRot(playerid, registerPTD[playerid][3], 0.000000, 0.000000, 0.000000, 1.000000);

	return true; }

function createTextdraws( ) {

	registerTD[0] = TextDrawCreate(132.160430, 169.816787, "YOUR_SKIN");
	TextDrawLetterSize(registerTD[0], 0.193382, 0.993332);
	TextDrawTextSize(registerTD[0], 0.000000, 140.000000);
	TextDrawAlignment(registerTD[0], 2);
	TextDrawColor(registerTD[0], 255);
	TextDrawUseBox(registerTD[0], 1);
	TextDrawBoxColor(registerTD[0], -1);
	TextDrawSetShadow(registerTD[0], 0);
	TextDrawSetOutline(registerTD[0], 0);
	TextDrawBackgroundColor(registerTD[0], 255);
	TextDrawFont(registerTD[0], 1);
	TextDrawSetProportional(registerTD[0], 1);
	TextDrawSetShadow(registerTD[0], 0);

	registerRegion[0] = TextDrawCreate(94.915504, 185.916687, "european");
	TextDrawLetterSize(registerRegion[0], 0.163396, 1.069165);
	TextDrawTextSize(registerRegion[0], 10.000000, 66.000000);
	TextDrawAlignment(registerRegion[0], 2);
	TextDrawColor(registerRegion[0], -1);
	TextDrawUseBox(registerRegion[0], 1);
	TextDrawBoxColor(registerRegion[0], 153);
	TextDrawSetShadow(registerRegion[0], 0);
	TextDrawSetOutline(registerRegion[0], 1);
	TextDrawBackgroundColor(registerRegion[0], 255);
	TextDrawFont(registerRegion[0], 2);
	TextDrawSetProportional(registerRegion[0], 1);
	TextDrawSetShadow(registerRegion[0], 0);
	TextDrawSetSelectable(registerRegion[0], true);

	registerRegion[1] = TextDrawCreate(95.015502, 202.250015, "afroamerican");
	TextDrawLetterSize(registerRegion[1], 0.163396, 1.069165);
	TextDrawTextSize(registerRegion[1], 10.000000, 66.000000);
	TextDrawAlignment(registerRegion[1], 2);
	TextDrawColor(registerRegion[1], -1);
	TextDrawUseBox(registerRegion[1], 1);
	TextDrawBoxColor(registerRegion[1], 153);
	TextDrawSetShadow(registerRegion[1], 0);
	TextDrawSetOutline(registerRegion[1], 1);
	TextDrawBackgroundColor(registerRegion[1], 255);
	TextDrawFont(registerRegion[1], 2);
	TextDrawSetProportional(registerRegion[1], 1);
	TextDrawSetShadow(registerRegion[1], 0);
	TextDrawSetSelectable(registerRegion[1], true);

	registerRegion[2] = TextDrawCreate(95.115501, 218.583251, "latinos");
	TextDrawLetterSize(registerRegion[2], 0.163396, 1.069165);
	TextDrawTextSize(registerRegion[2], 10.000000, 66.000000);
	TextDrawAlignment(registerRegion[2], 2);
	TextDrawColor(registerRegion[2], -1);
	TextDrawUseBox(registerRegion[2], 1);
	TextDrawBoxColor(registerRegion[2], 153);
	TextDrawSetShadow(registerRegion[2], 0);
	TextDrawSetOutline(registerRegion[2], 1);
	TextDrawBackgroundColor(registerRegion[2], 255);
	TextDrawFont(registerRegion[2], 2);
	TextDrawSetProportional(registerRegion[2], 1);
	TextDrawSetShadow(registerRegion[2], 0);
	TextDrawSetSelectable(registerRegion[2], true);

	registerRegion[3] = TextDrawCreate(94.915504, 234.916580, "asian");
	TextDrawLetterSize(registerRegion[3], 0.163396, 1.069165);
	TextDrawTextSize(registerRegion[3], 10.000000, 66.000000);
	TextDrawAlignment(registerRegion[3], 2);
	TextDrawColor(registerRegion[3], -1);
	TextDrawUseBox(registerRegion[3], 1);
	TextDrawBoxColor(registerRegion[3], 153);
	TextDrawSetShadow(registerRegion[3], 0);
	TextDrawSetOutline(registerRegion[3], 1);
	TextDrawBackgroundColor(registerRegion[3], 255);
	TextDrawFont(registerRegion[3], 2);
	TextDrawSetProportional(registerRegion[3], 1);
	TextDrawSetShadow(registerRegion[3], 0);
	TextDrawSetSelectable(registerRegion[3], true);

	registerTD[1] = TextDrawCreate(134.708419, 186.199996, "box");
	TextDrawLetterSize(registerTD[1], 0.000000, 6.517089);
	TextDrawTextSize(registerTD[1], 135.600158, 0.000000);
	TextDrawAlignment(registerTD[1], 1);
	TextDrawColor(registerTD[1], -1);
	TextDrawUseBox(registerTD[1], 1);
	TextDrawBoxColor(registerTD[1], 153);
	TextDrawSetShadow(registerTD[1], 0);
	TextDrawSetOutline(registerTD[1], 0);
	TextDrawBackgroundColor(registerTD[1], 255);
	TextDrawFont(registerTD[1], 1);
	TextDrawSetProportional(registerTD[1], 1);
	TextDrawSetShadow(registerTD[1], 0);

	registerTD[2] = TextDrawCreate(132.160430, 257.316772, "SETTINGS");
	TextDrawLetterSize(registerTD[2], 0.193382, 0.993332);
	TextDrawTextSize(registerTD[2], 0.000000, 140.000000);
	TextDrawAlignment(registerTD[2], 2);
	TextDrawColor(registerTD[2], 255);
	TextDrawUseBox(registerTD[2], 1);
	TextDrawBoxColor(registerTD[2], -1);
	TextDrawSetShadow(registerTD[2], 0);
	TextDrawSetOutline(registerTD[2], 0);
	TextDrawBackgroundColor(registerTD[2], 255);
	TextDrawFont(registerTD[2], 1);
	TextDrawSetProportional(registerTD[2], 1);
	TextDrawSetShadow(registerTD[2], 0);

	registerGender[0] = TextDrawCreate(95.615493, 273.416687, "MALE");
	TextDrawLetterSize(registerGender[0], 0.163396, 1.069165);
	TextDrawTextSize(registerGender[0], 10.000000, 67.000000);
	TextDrawAlignment(registerGender[0], 2);
	TextDrawColor(registerGender[0], -1);
	TextDrawUseBox(registerGender[0], 1);
	TextDrawBoxColor(registerGender[0], 153);
	TextDrawSetShadow(registerGender[0], 0);
	TextDrawSetOutline(registerGender[0], 1);
	TextDrawBackgroundColor(registerGender[0], 255);
	TextDrawFont(registerGender[0], 2);
	TextDrawSetProportional(registerGender[0], 1);
	TextDrawSetShadow(registerGender[0], 0);
	TextDrawSetSelectable(registerGender[0], true);

	registerGender[1] = TextDrawCreate(168.617477, 273.416687, "FEMALE");
	TextDrawLetterSize(registerGender[1], 0.163396, 1.069165);
	TextDrawTextSize(registerGender[1], 10.000000, 67.000000);
	TextDrawAlignment(registerGender[1], 2);
	TextDrawColor(registerGender[1], -1);
	TextDrawUseBox(registerGender[1], 1);
	TextDrawBoxColor(registerGender[1], 153);
	TextDrawSetShadow(registerGender[1], 0);
	TextDrawSetOutline(registerGender[1], 1);
	TextDrawBackgroundColor(registerGender[1], 255);
	TextDrawFont(registerGender[1], 2);
	TextDrawSetProportional(registerGender[1], 1);
	TextDrawSetShadow(registerGender[1], 0);
	TextDrawSetSelectable(registerGender[1], true);

	registerTD[3] = TextDrawCreate(132.160430, 289.983520, "FINISH");
	TextDrawLetterSize(registerTD[3], 0.193382, 0.993332);
	TextDrawTextSize(registerTD[3], 10.000000, 140.000000);
	TextDrawAlignment(registerTD[3], 2);
	TextDrawColor(registerTD[3], 255);
	TextDrawUseBox(registerTD[3], 1);
	TextDrawBoxColor(registerTD[3], 0xD9C934FF);
	TextDrawSetShadow(registerTD[3], 0);
	TextDrawSetOutline(registerTD[3], 0);
	TextDrawBackgroundColor(registerTD[3], 255);
	TextDrawFont(registerTD[3], 1);
	TextDrawSetProportional(registerTD[3], 1);
	TextDrawSetShadow(registerTD[3], 0);
	TextDrawSetSelectable(registerTD[3], true);

	return true; }