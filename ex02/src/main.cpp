/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:51:19 by nikos         #+#    #+#                 */
/*   Updated: 2025/04/02 14:44:14 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:14:28 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:49:09 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include <iostream>

int main() {
	std::cout << "--Basic animal Sounds--" << std::endl;
	Dog ogDog;
	Dog copiedDog(ogDog);

	ogDog.makeSound();
	copiedDog.makeSound();

	std::cout << "--assignment operator tests--" << std::endl;
	Cat cat1;
	Cat cat2;

	cat1 = cat2;
	cat1.makeSound();
	cat2.makeSound();

	std::cout << "--Testing if it's a deep copy--" << std::endl;
	Dog* brainDog = new Dog();
	Dog* brainlessDog = new Dog(*brainDog);

	delete brainDog;
	brainlessDog->makeSound();
	
	delete brainlessDog;

	// Animal breakCode; //uncommenting this will break the program
	return 0;
}