/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:59:36 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/19 16:05:49 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
		if (!std::isdigit(str[i]))
		{
			std::cout << "You can only use numbers !" << std::endl;
			std::cout << "Phone number : ";
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_index_contact(std::string cmd, Phonebook book) {
	int	i;
	int	tmp;

	i = (cmd[0]) - 48;
	tmp = book.getIndex();
	if (i < 0 || i >= 8 || cmd.length() > 1 || cmd.empty())
	{
		std::cout << "You can only use numbers !" << std::endl;
		std::cout << "Index of the contact : ";
		return (1);
	}
	if (i > tmp)
	{
		std::cout << "You can only display an existant contact !" << std::endl;
		std::cout << "Index of the contact : ";
		return (1);
	}
	return (0);
}

void	add_contact(Contact *contact, int i) {
	static int	index;
	std::string	str;

	if (index >= 8)
		i = index % 8;
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
	index++;
}

void	display_contact(Contact *contact, int nb_contact) {
	int			i;
	std::string	str;

	i = 0;
	std::cout << "\n" << " __________ __________ __________ __________" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     Index|First name|Last  name| Nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i < nb_contact) {
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "|" << std::setw(10) << i << "|";
		str = contact[i].getFirstName();
		if (str.size() <= 10)
			std::cout << str.insert(0, 10 - str.size(), ' ');
		else
			std::cout << str.insert(9, 1, '.').erase(10);
		str = contact[i].getLastName();
		if (str.size() <= 10)
			std::cout << "|" << str.insert(0, 10 - str.size(), ' ');
		else
			std::cout << "|" << str.insert(9, 1, '.').erase(10);
		str = contact[i].getNickName();
		if (str.size() <= 10)
			std::cout << "|" << str.insert(0, 10 - str.size(), ' ');
		else
			std::cout << "|" << str.insert(9, 1, '.').erase(10);
		std::cout << "|" << std::endl;
		i++;
	}
	if (i != 0)
		std::cout << "|__________|__________|__________|__________|\n" << std::endl;
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
	std::string	cmd;
	Phonebook	phonebook;

	display_start();
	while (42) {
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
		{
			add_contact(phonebook.getContacts(), phonebook.getIndex());
			if (phonebook.getIndex() < 8)
				phonebook.setIndex(phonebook.getIndex() + 1);
		}
		else if (cmd == "SEARCH" && phonebook.getIndex() > 0)
		{
			display_contact(phonebook.getContacts(), phonebook.getIndex());
			std::cout << "Index of the contact : " << std::endl;
			while (!(std::getline(std::cin, cmd)) || check_index_contact(cmd, phonebook))
				continue ;
			search_contact(phonebook.getContacts()[(cmd[0]) - 48]);
			std::cin.clear();
		}
		std::cin.clear();
	}
	return (0);
}
