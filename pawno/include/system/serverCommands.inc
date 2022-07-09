cmd:admins( playerid, params[] ) {

	new String[ 40 ];
	SendClientMessage( playerid, COLOR_CYAN, "------------------------Admins Online------------------------" );
	foreach( new i : Admins ) {

		format( String, sizeof String, "%s - admin level %d", getName( i ), playerVariables[ i ][ pAdmin ] );
		SendClientMessage( playerid, -1, String );

	}
	SendClientMessage( playerid, COLOR_CYAN, "--------------------------------------------------------------------" );

	return true; }

cmd:setadmin( playerid, params[] ) {

	if( playerVariables[ playerid ][ pAdmin ] < 6 ) 
		return SendClientMessage( playerid, COLOR_GREY, "Error: You are not an admin!" );

	new playerID, level, reason[ 24 ];
	if( sscanf( params, "uds[24]", playerID, level, reason ) ) 
		return SendClientMessage( playerid, COLOR_GREY, "Usage: {ffffff}/setadmin [playerid/name] [level] [reason]" );

	if( !isLogged( playerID ) ) return SendClientMessage( playerid, COLOR_GREY, "Error: This player is not connected or logged in!" );

	new String[ 120 ];
	if( playerVariables[ playerID ][ pAdmin ] < level ) {
		format( String, sizeof String, "You have been promoted to admin level %d by %s, reason: %s", level, getName( playerid ), reason ), SendClientMessage( playerID, -1, String );
		format( String, sizeof String, "%s has been promoted to admin level %d by %s, reason: %s", getName( playerID ), level, getName( playerid ), reason );
	} else {
		format( String, sizeof String, "You have been demoted to admin level %d by %s, reason: %s", level, getName( playerid ), reason ), SendClientMessage( playerID, -1, String );
		format( String, sizeof String, "%s has been demoted to admin level %d by %s, reason: %s", getName( playerID ), level, getName( playerid ), reason );
	}
	SendAdminsMessage( COLOR_YELLOW, 1, String );

	gQuery[ 0 ] = EOS;
	mysql_format( handle, gQuery, sizeof gQuery, "INSERT INTO `logs_staff` (`Log`, `Type`) VALUES ('%s', '1')", String );
	mysql_tquery( handle, gQuery, "", "" );

	if( level > 0 && !Iter_Contains( Admins, playerID ) ) Iter_Add( Admins, playerID );
	else if( level == 0 && Iter_Contains( Admins, playerID ) ) Iter_Remove( Admins, playerID );

	playerVariables[ playerid ][ pAdmin ] = level, updateINT( playerid, "Admin", level );

	return true; }

cmd:gotoxyz( playerid, params[] ) {

	if( !playerVariables[ playerid ][ pAdmin ] ) 
		return SendClientMessage( playerid, COLOR_GREY, "Error: You are not an admin!" );

	new Float: Pos_X, Float: Pos_Y, Float: Pos_Z, INT_ID, VW_ID;
	if( sscanf( params, "fffdd", Pos_X, Pos_Y, Pos_Z, VW_ID, INT_ID ) ) 
		return SendClientMessage( playerid, COLOR_GREY, "Usage: {ffffff}/gotoxyz [x] [y] [z] [vw] [int]" );
	
	SetPlayerInterior( playerid, INT_ID );
	SetPlayerVirtualWorld( playerid, VW_ID );
	SetPlayerPos( playerid, Pos_X, Pos_Y, Pos_Z );
	SendClientMessage( playerid, -1, "You have been teleported." );

	return true; }
