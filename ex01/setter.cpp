/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:57:45 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/26 11:27:02 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setFirstName(std::string _firstName) {
	Contact	contact;
	contact.firstName = _firstName;
}

void	Contact::setLastName(std::string _lastName) {
	Contact	contact;
	contact.lastName = _lastName;
}

void	Contact::setNickName(std::string _nickName) {
	Contact	contact;
	contact.nickName = _nickName;
}

void	Contact::setPhoneNumber(std::string _phoneNumber) {
	Contact	contact;
	contact.phoneNumber = _phoneNumber;
}

void	Contact::setSecret(std::string _secret) {
	Contact	contact;
	contact.secret = _secret;
}
