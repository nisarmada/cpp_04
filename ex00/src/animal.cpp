/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:41:13 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/10 17:48:58 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../animal.hpp"

Animal::Animal() : type("Animal") {
	// this->type = "Animal";
	std::cout << this->type << " has been constructed" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << this->type << " has been constructed" << std::endl;
}

Animal::~Animal() {
	std::cout << this->type << " has been destroyed" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << this->type << " has been copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "**Generic Animal sounds**" << std::endl;
}

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog has been constructed !" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog has been destroyed !" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copied from another Dog!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "woof woof wooooof" << std::endl;
}

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat has been created" << std::endl;
}

Cat::~Cat() {
	std::cout << this->type << " has been destructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << this->type << " has been copied" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->type << ": Meeeeeowwwww" << std::endl;
}