#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default constructor Cat called" << std::endl;
    return ;
}

Cat::Cat(Cat const& copy)
{
    std::cout << "Constructor copy Cat called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    return ;
}

Cat& Cat::operator=(Cat const& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << type << " : Miaou" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}