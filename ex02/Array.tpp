/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:17:51 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/09 19:00:44 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : _arr(new T[0]), _n(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _n(n) {
}

template <typename T>
Array<T>::Array(Array<T> const &src) {

	_arr = new T[src._n];
	_n = src._n;
	for (unsigned int i = 0; i < _n; i++) {
		_arr[i] = src._arr[i];
	}
}

template<typename T>
Array<T>::~Array(void) {

	delete [] _arr;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &src) {

	if (this != &src) {
		delete [] _arr;
		_n = src._n;
		_arr = new T[_n];
		for (unsigned int i = 0; i < _n; i++) {
			_arr[i] = src._arr[i];
		}
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int n) {

	if (n >= _n)
		throw OutOfBoundExcep;
	return (_arr[n]);
}

template<typename T>
T const	&Array<T>::operator[](unsigned int n) const {

	if (n >= _n)
		throw OutOfBoundExcep;
	return (_arr[n]);
}

template<typename T>
unsigned int	Array<T>::size(void) const {

	return (_n);
}

template<typename T>
const char	*Array<T>::OutOfBoundException::what() const throw() {

	return ("OutOfBoundException thrown");
}
