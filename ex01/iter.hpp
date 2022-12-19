/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:19:33 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/09 09:12:54 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <string>
# include <iostream>

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T const &elmnt)) {

	for (size_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

template<typename T>
void	print(T const &elmnt) {
	std::cout << elmnt << std::endl;
}

#endif
