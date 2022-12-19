/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:16:45 by mstrantz          #+#    #+#             */
/*   Updated: 2022/02/17 12:57:52 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;				//expected outofbound exception
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;			//expected outofbound exception
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	{
		std::cout << "Own testing" << std::endl;

		Array<float> floats(4);
    	float	*mirror = new float[4];
    	srand(time(NULL));
    	for (int i = 0; i < 4; i++)
    	{
    	    const float value = rand();
    	    floats[i] = value;
    	    mirror[i] = value;
    	}
    	Array<float> tmp = floats;
    	Array<float> test(tmp);
    	for (int i = 0; i < 4; i++)
    	{
    	    if (mirror[i] != floats[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
			mirror[i] = 4.2; 													//proving that changing the value of mirror doesn't affect the original array
			std::cout << "floats[" << i << "] = " << floats[i] << "  mirror[" << i << "] = " << mirror[i] << std::endl;
			std::cout << "test[" << i << "] =   " << test[i] << std::endl;
    	}
		delete [] mirror;
		for (int i = 0; i < 4; i++)
    	{
    	    if (tmp[i] != floats[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
			tmp[i] = 0.1;
			std::cout << "floats[" << i << "] = " << floats[i] << "  tmp[" << i << "] = " << tmp[i] << std::endl;
    	}

		Array<int> arrI(4);
		for (int i = 0; i < 4; i++) {
			arrI[i] = i;
			std::cout << arrI[i] << std::endl;
		}
		Array<float> arrF(4);
		for (int i = 0; i < 4; i++) {
			arrF[i] = 0.42;
			std::cout << arrF[i] << std::endl;
		}
		Array<std::string> arrS(4);
		for (int i = 0; i < 4; i++) {
			std::cout << ':' << arrS[i] << ':' << std::endl;
		}
	}
    return 0;
}