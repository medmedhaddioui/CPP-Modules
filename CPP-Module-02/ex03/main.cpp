/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:12:45 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/11 19:00:38 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a(Fixed(9.1f), Fixed(7));
    Point b(Fixed(2.5f), Fixed(7));
    Point c(Fixed(1), Fixed(23));
    Point point(Fixed(2.9f), Fixed(14));
    if (bsp (a , b , c ,point))
        std::cout << "inside" << std::endl;
    else 
        std::cout << "outside" << std::endl;   
    return 0;
}