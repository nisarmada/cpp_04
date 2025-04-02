/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:14:28 by nikos         #+#    #+#                 */
/*   Updated: 2025/04/02 14:01:46 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:30:15 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:30:15 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include <iostream>

int main() {
	// Animal test; //this should ont compile

	std::cout << "--simple sounds--" << std::endl;
	Animal* doggie = new Dog();
	Animal* cattie = new Cat();

	doggie->makeSound();
	cattie->makeSound();

	delete doggie;
	delete cattie;

	std::cout << "--Deep copy checks--" << std::endl;
	Dog dog1;
	Dog dog2(dog1);
	Cat cat1;
	Cat cat2(cat1);

	dog1.makeSound();
	dog2.makeSound();
	cat1.makeSound();
	cat2.makeSound();

	std::cout << "--Zoo tests:)--" << std::endl;
	const int numberAnimals = 6;
	Animal* zoo[numberAnimals];

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	std::cout << "--zoo animals sounds--" << std::endl;
	for (int i = 0; i < 6; i++)
		zoo[i]->makeSound();

	for (int i = 0; i < 6; i++)
		delete zoo[i];
	return 0;
}