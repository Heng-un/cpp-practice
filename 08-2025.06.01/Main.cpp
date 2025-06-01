#include <iostream>

class Book
{
public:
	std::string title;
	std::string author;
	int pages;

	Book(std::string t, std::string a, int p)
	{
		title = t;
		author = a;
		pages = p ;
	}

	void Print()
	{
		std::cout <<"Title:" << title << std::endl;
		std::cout <<"Author" << author << std::endl;
		std::cout <<"Pages:" << pages << std::endl;
	}
};


int main()
{
	Book xs("C++ Basics", "John Smith", 320);
		xs.Print();

	std::cin.get();
}
