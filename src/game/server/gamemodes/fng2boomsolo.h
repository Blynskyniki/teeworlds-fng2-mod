/* (c) KeksTW. */
#ifndef GAME_SERVER_GAMEMODES_FNG2BOOM_SOLO_H
#define GAME_SERVER_GAMEMODES_FNG2BOOM_SOLO_H

#include <game/server/gamecontroller.h>
#include <base/vmath.h>
#include "fng2solo.h"

class CGameControllerFNG2BoomSolo : public CGameControllerFNG2Solo
{
public:
	CGameControllerFNG2BoomSolo(class CGameContext* pGameServer);
	virtual void OnCharacterSpawn(class CCharacter *pChr);
};
#endif
