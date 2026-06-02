#include "Brain.hpp"

Brain::Brain()
{
    int size = 0;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = "Think about something to eat...";
        size++;
    }
    _nbIdeas = size;
	std::cout << "Brain Default constructor called"<<std::endl;
}


Brain::~Brain()
{
    std::cout << "Brain Default destructor called"<<std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;

	if (this != &other)
		_nbIdeas = other._nbIdeas;
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
	return (*this);
}

std::string Brain::getIdeas(const int index) const
{
		if (index >= 0 && index < _nbIdeas)
	{

		return(this->_ideas[index]);
	}
	std::cout << "Not a valid index passed"<<std::endl;
	return ("");
}

void Brain::setIdeas(int index, const std::string idea)
{
	if (index >= 0 && index < _nbIdeas)
	{
		this->_ideas[index] = idea;
		return ;
	}
	std::cout << "Not a valid index passed"<<std::endl;
}