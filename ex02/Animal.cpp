#include "Animal.hpp"


AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "Animal Default constructor called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	_type = other._type;
	std::cout << "Animal Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;

	if (this != &other)
		_type = other._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called"<<std::endl;
}

std::string AAnimal::getType() const
{
	return(_type);
}