/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:16:50 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/17 12:49:58 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array {

	private:

		T				*_arr;
		unsigned int	_n;

	public:

		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &src);
		virtual ~Array(void);

		Array	&operator=(Array const &src);
		T		&operator[](unsigned int n);
		T const	&operator[](unsigned int n) const;

		unsigned int	size(void) const;

		class OutOfBoundException : public std::exception {
			virtual const char * what() const throw();
		} OutOfBoundExcep;
};

# include "Array.tpp"

#endif
