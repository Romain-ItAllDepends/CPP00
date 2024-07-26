/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:25:17 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/26 11:33:50 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>

class Contact {
	private :
	
	int		index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secret;

	public :
	Contact	addContact();

	void	setFirstName(std::string _firstName);
	void	setLastName(std::string _lastName);
	void	setNickName(std::string _nickName);
	void	setPhoneNumber(std::string _phoneNumber);
	void	setSecret(std::string _secret);

	static std::string	getFirstName(void);
	static std::string	getLastName(void);
	static std::string	getNickName(void);
	static std::string	getPhoneNumber(void);
	static std::string	getSecret(void);
};

#endif