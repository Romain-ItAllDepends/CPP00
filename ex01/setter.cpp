/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:57:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/29 07:26:50 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

void	Contact::setNickName(std::string nickName) {
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string secret) {
	this->_secret = secret;
}
