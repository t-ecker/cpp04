#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "(Brain) Default constructer called" << std::endl;    
}

Brain::Brain(const Brain &src)
{
    std::cout << "(Brain) Copy Constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
    std::cout << "(Brain) Deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "(Brain) Copy assignment operator called" << std::endl;
    if (this != &src)
    {
        for(int i = 0; i < 100; i++)
			_ideas[i] = src.getIdea(i);
    }
    return (*this);
}

std::string Brain::getIdea(int i) const
{
	return (_ideas[i]);
}