#include <iostream>

class Car
{
public:
	std::string brand;
	int year;

	Car(std::string b,int y)
	{
		brand = b;
		year  = y;
		std::cout << "Constructing Car:[" << brand << "],Year:[" << year << "]"<<std::endl;
	}
	     
	~Car() 
	{
		std::cout << "Destructing Car:[" << brand << "]" << std::endl;
	}
	void Print()
	{
		std::cout << brand << "," << year << std::endl;
	}
};

void Drive()
{
	Car x("品牌", 2000);
	x.Print();
}
int main()
{
	Drive();
	std::cin.get();
}
