/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   wrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/11 19:43:38 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 20:20:11 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../wrongAnimal.hpp"

wrongAnimal::wrongAnimal() : type("some wrong animal") {
	std::cout << "some wrong animal has been constructed !" << std::endl;
}

wrongAnimal::~wrongAnimal() {
	std::cout  << "some wrong animal was destroyed" << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal& other) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal& other) {
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void wrongAnimal::makeSound() const {
	std::cout << "*wrong animal soundsss*" << std::endl;
}

wrongCat::wrongCat()  {
	std::cout << "wrong cat constructor" << std::endl;
	this->type = "wrong cat";
}

wrongCat::~wrongCat() {
	std::cout << "wrong cat destructed" << std::endl;
}

wrongCat::wrongCat(const wrongCat &other) : wrongAnimal(other) {
	std::cout << "wrong cat constructor" << std::endl;
	this->type = "wrong cat";
}

wrongCat& wrongCat::operator=(const wrongCat &other) {
	if (this == &other)
		return (*this);
	wrongAnimal::operator=(other);
	return (*this);
}

void wrongCat::makeSound() const {
	std::cout << "wroong meeeeoow" << std::endl;
}



