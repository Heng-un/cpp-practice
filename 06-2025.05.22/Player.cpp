#include <iostream>
#include "Player.h"

void Player::Move(int xa, int ya)
{
	x += xa;
	y += ya;
}

void Player::LevelUp()
{
	level++;
	if (level >= 2)
	{
		skillpoints += 3;
	}
}
