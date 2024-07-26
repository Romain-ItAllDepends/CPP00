/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:02:44 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/26 11:24:46 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getFirstName(void) {
	Contact	contact;
	return (contact.firstName);
}

std::string	Contact::getLastName(void) {
	Contact	contact;
	return (contact.lastName);
}

std::string	Contact::getNickName(void) {
	Contact	contact;
	return (contact.nickName);
}

std::string	Contact::getPhoneNumber(void) {
	Contact	contact;
	return (contact.phoneNumber);
}

std::string	Contact::getSecret(void) {
	Contact	contact;
	return (contact.secret);
}