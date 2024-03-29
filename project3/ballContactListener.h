#pragma once
#include <Box2D/Box2D.h>
#include "Globals.h"
#include "player.h"
#include "moshball.h"
#include "enemy.h"
#include <MMSystem.h>
#include <iostream>
#include <Windows.h>

// Override the contact listener so we can handle the case where a ball collides with the player
class BallContactListener : public b2ContactListener
{
	void BeginContact(b2Contact* contact);
	//void EndContact(b2Contact* contact);
	//void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
};