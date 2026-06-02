#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat Default constructor called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	_type = other._type;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;

	if (this != &other)
		_type = other._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called"<<std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Miaou!"<<std::endl;
}