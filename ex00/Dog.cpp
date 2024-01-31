#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default constructor Dog called" << std::endl;
    return ;
}


Dog::Dog(Dog const& copy)
{
    std::cout << "Constructor copy Dog called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    return ;
}

Dog& Dog::operator=(Dog const& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << type << " : Wouaf" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}