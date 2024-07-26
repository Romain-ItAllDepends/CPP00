/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:18:22 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/26 07:39:09 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av) {
    int		i;
	int		j;
    std::string	str;

	(void)ac;
	j = 1;
	if (!av[1]) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[j]) {
		i = 0;
		str = av[j];
		while (str[i]) {
			str[i] = toupper(str[i]);
			i++;
		}
		std::cout << str;
		j++;
	}
	std::cout << "\n";
    return (0);
}
