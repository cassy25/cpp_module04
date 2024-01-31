#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string typeAnimal);
        WrongAnimal(WrongAnimal const& copy);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const& copy);
        void makeSound() const;
        std::string getType() const;
    protected:
        std::string type;
};

#endif