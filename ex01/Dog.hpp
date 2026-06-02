#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound() const;
		std::string getBrainIdeas(const int index) const;
		void setBrainIdeas(int index, const std::string idea);
};
