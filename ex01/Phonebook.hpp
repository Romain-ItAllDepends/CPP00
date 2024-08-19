/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:25:17 by rgobet            #+#    #+#             */
/*   Updated: 2024/08/19 16:06:54 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <locale>
# include "Contact.hpp"

class	Phonebook {
private:
	int		_index;
	Contact	_contacts[8];
public:
	
	Phonebook(void);
	~Phonebook(void);

	int		getIndex(void);
	Contact	*getContacts(void);
	void	setIndex(int i);
	void	setContact(Contact c);
};

#endif