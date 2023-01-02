#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	// d.getType();
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	cat->getBrain()->setIdea(0, "I am a cat");
	// dog->getBrain()->setIdea(0, "I am a dog");
	
	std::cout << "Cat idea: " << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog idea: " << dog->getBrain()->getIdea(0) << std::endl;
	delete cat;
	delete dog;
	return 0;
}
