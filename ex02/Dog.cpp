#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default constructor Dog called" << std::endl;
    brain = new Brain();
    return ;
}


Dog::Dog(Dog const& copy)
{
    std::cout << "Constructor copy Dog called" << std::endl;
    *this = copy;
    brain = new Brain(*copy.getBrain());
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    delete brain;
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
    //std::cout << "Wouaf" << std::endl;
    std::cout << type << " : Wouaf" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}