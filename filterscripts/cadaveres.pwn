#include <a_samp>
#include <streamer>
#include <Pawn.CMD>

//------------------------------ DEFINES -------------------------------------

#define version			"BETA v0.1"
#define Timer::%0(%1)			forward %0(%1); public %0(%1)

//------------------------------- NEWS ---------------------------------------

new Text3D:LabelCadaver[MAX_PLAYERS], Cadaver[MAX_PLAYERS];

//------------------------------ PUBLICS -------------------------------------

public OnFilterScriptInit()
{
	print("\n--------------------------------------\n");
	printf(" Sistema de Cadaveres - %s ", version);
	print(" - Hecho por Sen Ukiyo. \n");
	print("--------------------------------------\n");
	return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
	new Float:x, Float:y, Float:z, Float:rot;
	//
	GetPlayerPos(playerid, x, y, z);
	GetPlayerFacingAngle(playerid, rot);
	//
	Cadaver[playerid] = CreateActor(GetPlayerSkin(playerid), x, y, z, rot);
	ApplyActorAnimation(Cadaver[playerid], "wuzi", "cs_dead_guy", 4.1, 1, 1, 1, 0, 0);
	//
	new string[128+1];
	format(string, sizeof(string), "{FF8275}Cadaver de {FFFFFF}%s\n{FF8275}Estado: {FFFF7E}En Descomposición.", PlayerName(playerid));
	//
	LabelCadaver[playerid] = CreateDynamic3DTextLabel(string, -1, x, y, z, 10.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 0, GetPlayerVirtualWorld(playerid), GetPlayerInterior(playerid), -1);
	//
	SetTimerEx("ResetCadaver", 120000, false, "i", playerid);
	return 1;
}

//------------------------------ STOCKS --------------------------------------

stock PlayerName(playerid)
{
    new names[24];
    GetPlayerName(playerid, names, 24);
    new N[24];
    strmid(N, names, 0, strlen(names), 24);
    for(new i = 0; i < MAX_PLAYER_NAME; i++)
    {
        if (N[i] == '_') N[i] = ' ';
    }
    return N;
}

//----------------------------- TIMERS ---------------------------------------

Timer::ResetCadaver(playerid){
	DestroyActor(Cadaver[playerid]);
	DestroyDynamic3DTextLabel(LabelCadaver[playerid]);
	return 1;
}

//---------------------------- COMANDOS --------------------------------------

CMD:resetcadaveres(playerid){
	if(IsPlayerAdmin(playerid)){
		for(new i; i < MAX_PLAYERS; i++){
			DestroyActor(Cadaver[i]);
			DestroyDynamic3DTextLabel(LabelCadaver[i]);
		}
	}
	return 1;
}