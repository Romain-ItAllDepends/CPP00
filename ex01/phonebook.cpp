/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:11:07 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/17 21:24:39 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

void	addContact() {
	cout << "MERDE" << endl;
}

void	searchContact(int nbContact = 0) {
	int	i;

	i = 0;
	cout << " _________ __________ __________ __________" << endl;
	cout << "|         |          |          |          |" << endl;
	cout << "|  Index  |First name|Last name | Nickname |" << endl;
	cout << "|_________|__________|__________|__________|" << endl;
	while (i < nbContact) {
		cout << "|" << "i" << "|" << "name" << "|" << "surname" << "|" << "pseudo" << "|" << endl;
		i++;
	}
	if (i != 0)
		cout << "|_________|__________|__________|__________|" << endl;
}

int	main(void) {
	string	cmd;

	while (42) {
		cout << "Command : ";
		cin >> cmd;
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			addContact();
		else if (cmd == "SEARCH")
			searchContact(5);
	}
	return (0);
}