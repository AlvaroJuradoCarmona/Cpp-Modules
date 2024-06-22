
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const AAnimal *arr[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		delete arr[i];

	Cat cat1;

	for (int i = 0; i < 100; i++)
		cat1.getBrain()->setIdea(i, "idea");

	Cat cat2(cat1);

	for (int i = 0; i < 100; i++)
		std::cout << cat2.getBrain()->getIdea(i) << std::endl;

	cat1.getBrain() != cat2.getBrain() ? std::cout << "Deep copy" : std::cout << "Shallow copy";
	Dog dog1;
	Dog dog2(dog1);

	return 0;
}