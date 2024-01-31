#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor Brain called" << std::endl;
    
    i = 0;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = "Brain unlocked";
        i++;
    }
    return ;
}

Brain::Brain(Brain const& copy)
{
    std::cout << "Constructor copy Brain called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
    return ;
}

Brain& Brain::operator=(Brain const& copy)
{
    int i = 0;
    if (this != &copy)
    {
        while (i < 100)
        {
            ideas[i] = copy.ideas[i];
            i++;
        }
    }
    return (*this);
}

std::string Brain::getBrain()
{
    return (ideas[i++]);
}