/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:50:04 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/17 12:42:36 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b) {
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T	min(T a, T b) {

	return (b <= a ? b : a);
}

template<typename T>
T	max(T a, T b) {

	return (b >= a ? b : a);
}

#endif
