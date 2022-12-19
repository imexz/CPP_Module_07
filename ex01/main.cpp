/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:19:28 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/09 09:13:05 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int	main(void) {

	char	c[] = {'a', 'b', 'c'};
	int		i[] = {42 , 24 , 42};
	float	f[] = {10.1, 11.2, 12.3};
	double	d[] = {42.42, 42.01, 42.24};
	bool	b[] = {true, false, true, false};
	std::string s[] = {"Hello", "World", "42 is best"};

	iter(c, 3, &print);
	std::cout << std::endl;
	iter(i, 3, &print);
	std::cout << std::endl;
	iter(f, 3, &print);
	std::cout << std::endl;
	iter(d, 3, &print);
	std::cout << std::endl;
	iter(b, 4, &print);
	std::cout << std::endl;
	iter(s, 3, &print);
	std::cout << std::endl;

	return (0);
}