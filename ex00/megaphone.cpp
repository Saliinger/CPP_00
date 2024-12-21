/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:57:18 by anoukan           #+#    #+#             */
/*   Updated: 2024/12/20 17:33:47 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			std::cout << static_cast<char>(toupper(av[j][i]));
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}
