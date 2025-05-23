#include <iostream>
#define Log(x) std::cout << x << std::endl;

class Player
{
public:
	static int totalPlayers;
	int x, y;

	Player()
	{
		x = 0;
		y = 0;
		totalPlayers++;
	}
	static void PrintTotalPlayers()
	{
		Log("Total Players: " << totalPlayers);
	}

	void Move(int xa, int ya)
	{
		x += xa;
		y += ya;
	}
};

int Player::totalPlayers = 0;

int main()
{
	Player hero;
	hero.Move(2, 3);
	Log("Player1 position:(" << hero.x << "," << hero.y << ")");
	Player hero2;
	hero2.Move(5,4);
	Log("Player2 position:(" << hero2.x << "," << hero2.y << ")");

	Player::PrintTotalPlayers();

	std::cin.get();
}
