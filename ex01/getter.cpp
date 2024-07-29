/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:02:44 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/29 11:11:40 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getFirstName(void) {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) {
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string	Contact::getSecret(void) {
	return (this->_secret);
}