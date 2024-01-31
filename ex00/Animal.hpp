#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    public:
        Animal();
        Animal(std::string typeAnimal);
        Animal(Animal const& copy);
        virtual ~Animal();
        Animal& operator=(Animal const& copy);
        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string type;
};

#endif