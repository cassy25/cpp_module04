#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* animal[100];
    Brain brain;

    int i = 0;
    while (i < 50)
    {
        animal[i] = new Dog();
        i++;
    }
    while (i < 100)
    {
        animal[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 100)
    {
        std::cout << animal[i]->getType() << std::endl; //Print type animal
        std::cout << brain.getBrain() << std::endl; // print creation brain
        animal[i]->makeSound(); // print sound
        std::cout << std::endl;
        i++;
    }
    i = 0;
    while (i < 100)
    {
        delete animal[i];
        i++;
    }

    return 0;
}
