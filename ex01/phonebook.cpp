/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:11:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/26 11:43:54 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact	addContact(void) {
	Contact		contact;
	std::string	str;

	std::cout << "First name : ";
	std::cin >> str;
	contact.setFirstName(str);
	std::cout << "Last name : ";
	std::cin >> str;
	contact.setLastName(str);
	std::cout << "Nick name : ";
	std::cin >> str;
	contact.setNickName(str);
	std::cout << "Darkest secret : ";
	std::cin >> str;
	contact.setSecret(str);
	return (contact);
}

void	searchContact(Contact *contact) {
	int			i;
	static int	index;

	index++;
	if (index == 9)
		index = 8;
	i = 0;
	std::cout << " _________ __________ __________ __________" << std::endl;
	std::cout << "|         |          |          |          |" << std::endl;
	std::cout << "|  Index  |First name|Last name | Nickname |" << std::endl;
	std::cout << "|_________|__________|__________|__________|" << std::endl;
	while (i < index) {
		std::cout << "|" << i << "        |" << contact[i].getFirstName() << "|" << contact[i].getLastName() << "|" << contact[i].getNickName() << "|" << std::endl;
		i++;
	}
	if (i != 0)
		std::cout << "|_________|__________|__________|__________|\n" << std::endl;
}

void	display(void) {
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

	i = 0;
	display();
	while (42) {
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			contact[i++] = addContact();
		else if (cmd == "SEARCH")
			searchContact(contact);
	}
	return (0);
}