/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:11:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/29 15:03:23 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact() {
	Contact::_firstName = "";
	Contact::_lastName = "";
	Contact::_nickName = "";
	Contact::_phoneNumber = "";
	Contact::_secret = "";
}

Contact::~Contact() {
	std::cout << "BOUM !!!" << std::endl;
}

void	search_contact(Contact contact) {
	std::cout << "First name : " << contact.getFirstName() << std::endl;
	std::cout << "Last name : " << contact.getLastName() << std::endl;
	std::cout << "Nick name : " << contact.getNickName() << std::endl;
	std::cout << "Phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.getSecret() << std::endl;
}

int	check_phone_number(std::string str) {
	int	i;

	i = 0;
	while (str.empty() == false && str[i])
	{
		if (std::isdigit(str[i]))
			return (0);
		i++;
	}
	std::cout << "Vous ne pouvez entrer que des chiffres !" << std::endl;
	std::cout << "Phone number : ";
	return (1);
}

void	add_contact(Contact *contact, int i) {
	std::string	str;

	std::cout << "First name : ";
	while (str.size() == 0)
		std::getline(std::cin, str);
	contact[i].setFirstName(str);
	std::cin.clear();
	std::cout << "Last name : ";
	str = "";
	while (str.size() == 0)
		std::getline(std::cin, str);
	contact[i].setLastName(str);
	std::cin.clear();
	std::cout << "Nick name : ";
	str = "";
	while (str.size() == 0)
		std::getline(std::cin, str);
	contact[i].setNickName(str);
	std::cin.clear();
	std::cout << "Phone number : ";
	str = "o";
	while (!(std::getline(std::cin, str)) || check_phone_number(str))
		continue ;
	contact[i].setPhoneNumber(str);
	std::cin.clear();
	std::cout << "Darkest secret : ";
	str = "";
	while (str.size() == 0)
		std::getline(std::cin, str);
	contact[i].setSecret(str);
	std::cin.clear();
}

void	display_contact(Contact *contact, int nb_contact) {
	int			i;
	std::string	str;

	i = 0;
	std::cout << "\n" << " _________ __________ __________ __________" << std::endl;
	std::cout << "|         |          |          |          |" << std::endl;
	std::cout << "|  Index  |First name|Last name | Nickname |" << std::endl;
	std::cout << "|_________|__________|__________|__________|" << std::endl;
	while (i < nb_contact) {
		std::cout << "|         |          |          |          |" << std::endl;
		std::cout << "|" << i << "        |";
		str = contact[i].getFirstName();
		if (str.size() <= 10)
			std::cout << str.insert(str.size(), 10 - str.size(), ' ');
		else
			std::cout << str.insert(9, 1, '.').erase(10);
		str = contact[i].getLastName();
		if (str.size() <= 10)
			std::cout << "|" << str.insert(str.size(), 10 - str.size(), ' ');
		else
			std::cout << "|" << str.insert(9, 1, '.').erase(10);
		str = contact[i].getNickName();
		if (str.size() <= 10)
			std::cout << "|" << str.insert(str.size(), 10 - str.size(), ' ');
		else
			std::cout << "|" << str.insert(9, 1, '.').erase(10);
		std::cout << "|" << std::endl;
		i++;
	}
	if (i != 0)
		std::cout << "|_________|__________|__________|__________|\n" << std::endl;
}

void	display_start(void) {
	std::cout << " ____________________________________" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "|               WELCOME              |" << std::endl;
	std::cout << "|____________________________________|" << std::endl;
	std::cout << "|                                    |" << std::endl;
	std::cout << "|        ADD - Add a contact         |" << std::endl;
	std::cout << "|   SEARCH - Display this contact    |" << std::endl;
	std::cout << "|     EXIT - Exit the PhoneBook      |" << std::endl;
	std::cout << "|____________________________________|\n" << std::endl;
}

int	main(void) {
	int			i;
	std::string	cmd;
	Contact		contact[8];
	int			index_contact;

	i = 0;
	index_contact = -1;
	display_start();
	while (42) {
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			add_contact(contact, i++);
		else if (cmd == "SEARCH" && i > 0)
		{
			std::cout << "Index du contact : " << std::endl;
			while (!(std::cin >> index_contact)
				|| index_contact < 0 || index_contact >= 8 || index_contact >= i)
			{
				std::cout << "L'index maximum est 7 ou n'existe pas !" << std::endl;
				std::cout << "Index du contact : " << std::endl;
				std::cin.clear();
			}
			search_contact(contact[index_contact]);
			std::cin.clear();
		}
		if (i > 0)
			display_contact(contact, i);
		std::cin.clear();
	}
	return (0);
}