#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Default constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(std::string typeAnimal) : type(typeAnimal)
{
    std::cout << "Constructor Animal called" << std::endl;
    return ;
}

Animal::Animal(Animal const& copy)
{
    std::cout << "Constructor copy Animal called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal& Animal::operator=(Animal const& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << type << " : Rrrrr" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
