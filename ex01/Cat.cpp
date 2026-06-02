#include "Cat.hpp"

Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << "Cat Default constructor called"<<std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
	_type = other._type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;

	if (this != &other)
		_type = other._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Miaou miaou!"<<std::endl;
}

std::string Cat::getBrainIdeas(const int index) const
{
	return (this->_brain->getIdeas(index));
}

void Cat::setBrainIdeas(int index, const std::string idea)
{
	this->_brain->setIdeas(index, idea);
}