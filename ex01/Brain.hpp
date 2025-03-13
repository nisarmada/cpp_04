/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:02:37 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:04:57 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain& operator=(const Brain& other);
		Brain(const Brain& other);
};


#endif