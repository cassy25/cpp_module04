#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default constructor Cat called" << std::endl;
    brain = new Brain();
    return ;
}

Cat::Cat(Cat const& copy) : Animal(copy)
{
    std::cout << "Constructor copy Cat called" << std::endl;
    *this = copy;
    brain = new Brain(*copy.getBrain());
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete brain;
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
    std::cout << "Miaou" << std::endl;
    //std::cout << type << " : Miaou" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}

Brain	*Cat::getBrain(void) const
{
	std::cout << "  Cat getBrain function called " << std::endl;
	return (this->brain);
}