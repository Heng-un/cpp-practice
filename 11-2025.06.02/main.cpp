#include <iostream>
#include <string>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "Some generic animal sound" << std::endl;
	}
};

class Dog : public Animal
{
private:
	std::string d_sound;
public:
	Dog(const std::string& sound) 
		: d_sound(sound){}  

	void speak() override { std::cout << d_sound << std::endl; }
};

class Cat : public Animal
{
private:
	std::string c_sound;
public:
	Cat(const std::string& sound)
		: c_sound(sound) {}

	void speak() override { std::cout << c_sound << std::endl; }
};

void MakeAnimalSpeak(Animal* animal)
{
	animal->speak();
}

int main()
{
	Dog* d = new Dog("Woof!");
	MakeAnimalSpeak(d);

	Cat* c = new Cat("Meow!");
	MakeAnimalSpeak(c);

	std::cin.get();
}
