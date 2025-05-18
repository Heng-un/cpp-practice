#include <iostream>
#include "Log.h"


int main()
{
	int x;
	Log("前方から敵が現れました!");
	Log("どうする？");
	Log("1.攻撃 2.逃げる");
	std::cin  >> x;
	
	if (x == 1)
	{
		Log("攻撃!"); 
		std::cin.get();
		std::cin.get();
		for (int HP = 5; HP > 0; HP--)
		{
			Log("攻撃されました！");
		}
		std::cin.get();
		Log("あなたが死んだ！");
	}
	else if (x == 2)
	{
		Log("逃げるだよ");
		std::cin.get();
		std::cin.get();
		int Speed = 5;
		while (Speed > 0)
		{
			Log("攻撃はミスしました！");
			Speed--;
		}
		std::cin.get();
		Log("逃げることができました!");
	}
	else 
	{
		Log("怪物がま逃げられました！");
	}
	std::cin.get();
}
