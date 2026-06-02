#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void test_animal_array()
{
	std::cout << "\n\n### TESTING ANIMAL ARRAY ###\n\n" << std::endl;
	int len = 2;
	AAnimal *animals[len];
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	for (int i = 0; i < len; i++)
	{
		if (i < (len / 2))
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < len; i++)
	{
		std::cout << "This is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	for (int i = 0; i < len; i++)
		delete animals[i];
}

void test_deep_copy()
{
	std::cout << "\n\n=== TEST 1: COPY CONSTRUCTOR ===\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Cat cat1;
	cat1.setBrainIdeas(0, "Tom");

	Cat cat2(cat1); // called copy constructor

	std::cout << "cat1 idea[0]: " << cat1.getBrainIdeas(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrainIdeas(0) << std::endl;

	//Modify cat1 and check cat2 doesnt change
	cat1.setBrainIdeas(0, "Changed idea!");

	std::cout << "\nAfter modification:\n";
	std::cout << "cat1 idea[0]: " << cat1.getBrainIdeas(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrainIdeas(0) << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}

void test_deep_assignement()
{
	std::cout << "\n\n=== TEST 2: ASSIGNMENT OPERATOR ===\n\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Cat cat3;
	cat3.setBrainIdeas(1, "Noodles");

	Cat cat4;
	cat4 = cat3; // called operator=

	std::cout << "cat3 idea[1]: " << cat3.getBrainIdeas(1) << std::endl;
	std::cout << "cat4 idea[1]: " << cat4.getBrainIdeas(1) << std::endl;

	cat3.setBrainIdeas(1, "Changed Pizza!");

	std::cout << "\nAfter modification:\n";
	std::cout << "cat3 idea[1]: " << cat3.getBrainIdeas(1) << std::endl;
	std::cout << "cat4 idea[1]: " << cat4.getBrainIdeas(1) << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
}


int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	test_animal_array();
	test_deep_copy();
	test_deep_assignement();
	return 0;
}
