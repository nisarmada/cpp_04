/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:50:17 by nikos         #+#    #+#                 */
/*   Updated: 2025/04/02 13:48:35 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../animal.hpp"


int main() {
    //bsaic polymorphic tests
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n--Sounds--" << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete cat;
	delete dog;

	const Animal aanimal;
	const Dog ddog;
	const Cat ccat;

	std::cout << "\n--Direct sounds--" << std::endl;
	aanimal.makeSound();
	ddog.makeSound();
	ccat.makeSound();

	std::cout << "--wrong animal-- " << std::endl;
	const wrongAnimal* wrongy = new wrongAnimal();
	const wrongAnimal* fakeCat = new wrongCat();

	std::cout << "--wrong animal sounds--" << std::endl;
	wrongy->makeSound();
	fakeCat->makeSound();

	std::cout << "--Copy test-- " << std::endl;
	Dog dog1 = Dog();
	Dog dog2(dog1);
	Dog dog3 = dog1;

	dog1.makeSound();
	dog2.makeSound();
	dog3.makeSound();
    return 0;
}

