/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:01:15 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:50:48 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"

Animal::Animal() : type("Animal") {
	// this->type = "Animal";
	std::cout << "An Animal has been constructed" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "An Animal has been constructed" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal has been copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog has been constructed !" << std::endl;
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog has been destroyed !" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copied from another Dog!" << std::endl;
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		Animal::operator=(other);
	if (brain)
		delete brain;
	brain = new Brain(*other.brain);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "woof woof wooooof" << std::endl;
}

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat has been created" << std::endl;
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << this->type << " has been destructed" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat has been copied" << std::endl;
	brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		Animal::operator=(other);
	}
	if (brain)
		delete brain;
	brain = new Brain(*other.brain);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->type << ": Meeeeeowwwww" << std::endl;
}