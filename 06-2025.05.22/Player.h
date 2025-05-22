#pragma once

class Player
{
public:
	int x = 0, y = 0;
	int level = 1;
	int skillpoints = 0;

	void Move(int xa, int ya);
	void LevelUp();
};
