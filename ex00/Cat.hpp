#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const& copy);
        ~Cat();
        Cat& operator=(Cat const& copy);
        void makeSound() const;
        std::string getType() const;
};

#endif