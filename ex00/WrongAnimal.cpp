#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Default constructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(std::string typeAnimal) : type(typeAnimal)
{
    std::cout << "Constructor WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy)
{
    std::cout << "Constructor copy Animal called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << type << " : Rrrrr" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}