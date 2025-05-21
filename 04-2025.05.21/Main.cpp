#include <iostream>
#define LOG(x) std::cout << x << std::endl;  

int main()
{
	int level = 1;

	int*   skillPoints = new int[1];
	int** ptr2 = &skillPoints;
	memset(skillPoints, 0, sizeof(int) * 1);

	for (level = 1; level <= 6; level++)
	{	
		if (level >= 2)
		{
			(**ptr2) += 3;
			LOG("レベルアップ！現在のレベル:" << level << "、スキルポイント : " << **ptr2);
		}
	}

	delete[] skillPoints;
	skillPoints = nullptr;
	ptr2 =        nullptr;

	std::cin.get();
}
