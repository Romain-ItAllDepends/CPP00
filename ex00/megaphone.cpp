/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgobet <rgobet@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:18:22 by rgobet            #+#    #+#             */
/*   Updated: 2024/07/15 22:08:38 by rgobet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main(int ac, char **av) {
    int		i;
	int		j;
    string	str;

	(void)ac;
	j = 1;
	if (!av[1]) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	while (av[j]) {
		i = 0;
		str = av[j];
		while (str[i]) {
			str[i] = toupper(str[i]);
			i++;
		}
		cout << str << endl;
		j++;
	}
    return (0);
}
