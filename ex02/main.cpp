#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{

    //Animal test;
    Dog* dog[50];
    Cat* cat[50];
    Brain brain;

    int i = 0;
    while (i < 50)
    {
        dog[i] = new Dog();
        cat[i] = new Cat();
        i++;
    }

    i = 0;
    while (i < 50)
    {
        std::cout << dog[i]->getType() << std::endl; //Print type animal
        std::cout << brain.getBrain() << std::endl; // print creation brain
        dog[i]->makeSound(); // print sound
        std::cout << std::endl;

        std::cout << cat[i]->getType() << std::endl;
        std::cout << brain.getBrain() << std::endl;
        cat[i]->makeSound();
        std::cout << std::endl;
        i++;
    }

    i = 0;
    while (i < 50)
    {
        delete cat[i];
        delete dog[i];
        i++;
    }

    return 0;
}
