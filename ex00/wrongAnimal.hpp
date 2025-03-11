/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   wrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/11 19:39:21 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 20:10:17 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal {
	protected:
		std::string type;
	public:
		wrongAnimal();
		~wrongAnimal();
		wrongAnimal(const wrongAnimal &other);
		wrongAnimal& operator=(const wrongAnimal &other);

		void makeSound() const;
};

class wrongCat : public wrongAnimal {
	public:
		wrongCat();
		~wrongCat();
		wrongCat(const wrongCat &other);
		wrongCat& operator=(const wrongCat &other);

		void makeSound() const;

};



#endif