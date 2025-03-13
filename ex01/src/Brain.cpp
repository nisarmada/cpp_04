/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:06:02 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:12:21 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = "Nirvana state";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}