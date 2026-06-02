#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();
	    void makeSound() const;
		std::string getBrainIdeas(const int index) const;
		void setBrainIdeas(int index, const std::string idea);
};