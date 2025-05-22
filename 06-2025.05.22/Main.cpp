#include <iostream>
#include "Player.h"
#define Log(x) std::cout << x << std::endl


int main()
{
	Player hero;
	while (hero.level <= 5)
	{
		hero.LevelUp();
		Log("レベルアップ！現在のレベル:"<<hero.level << "、スキルポイント : " << hero.skillpoints);
	}
	hero.Move(1, -2);
	Log("hero今の位置は:("<<hero.x << "," << hero.y<<")");

	std::cin.get();
	return 0;
}
