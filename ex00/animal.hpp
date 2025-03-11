/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 15:29:08 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 19:39:19 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "wrongAnimal.hpp"
#include <iostream>


class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal &other);
		virtual void makeSound() const;
};

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		void makeSound() const override;
};

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void makeSound() const override;
};


#endif