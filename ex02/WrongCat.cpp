#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Default constructor WrongCat called" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const& copy)
{
    std::cout << "Constructor copy WrongCat called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
    return ;
}

WrongCat& WrongCat::operator=(WrongCat const& copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << type << " : Miaou" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}