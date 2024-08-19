/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:11:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/19 16:06:28 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) {
	this->_index = 0;
}

Phonebook::~Phonebook(void)
{
}

int		Phonebook::getIndex(void) {
	return (this->_index);
}
	
void	Phonebook::setIndex(int i) {
	this->_index = i;
}

Contact	*Phonebook::getContacts(void) {
	return (this->_contacts);
}
	
void	Phonebook::setContact(Contact c) {
	this->_contacts[0] = c;
}
