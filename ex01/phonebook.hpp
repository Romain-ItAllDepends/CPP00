/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:25:17 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/29 11:26:51 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <locale>

class Contact {
	private :

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_secret;
	
	public :

	Contact(void);
	~Contact(void);

	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickName(std::string nickName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setSecret(std::string secret);

	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getSecret(void);
};

#endif