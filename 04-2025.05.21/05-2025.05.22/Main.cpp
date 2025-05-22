#include <iostream>
#define LOG(x) std::cout << x << std::endl;  

class Player 
{
public:
	int x=0, y=0;
	int level = 1;
	int skillpoints = 0;

	void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}

	void LevelUp()
	{
		level++;
			if (level >= 2)
			{
				skillpoints += 3;
			}
	}
};

int main()
{
	Player hero;
	while (hero.level <= 5)
	{
		hero.LevelUp();
		LOG("レベルアップ！現在のレベル:"<<hero.level << "、スキルポイント : " << hero.skillpoints);
	}
	hero.Move(1, -2);
	LOG("hero今の位置は:("<<hero.x << "," << hero.y<<")");

	std::cin.get();
}
