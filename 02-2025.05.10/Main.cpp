#include <iostream>
#include "Log.h"


int main()
{
	int x;

	std::cout << "前方からジャンケンをする人が現れました!" << std::endl;
	std::cout << "どうする？" << std::endl;
	std::cout << "1.石 2.ハサミ 3.布" << std::endl;
	std::cin >> x;

	if (x == 1)
		Log("敵は布を出した。あなたの負け！");
	else if (x == 2)
		Log("敵は布を出した。あなたの勝ち！");
	else if (x == 3)
		Log("敵は布を出した。どちらも勝たなかった！");
	else {
		Log("あなたが敵とジャンケンをしないと、怒って行ってしまいました!");
	}
	std::cin.get();
	std::cin.get();

	return 0;
}
