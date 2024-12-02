/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:45:26 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 10:54:46 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal (void)
{
    std::cout << "Default Animal Constructor called !" << std::endl;
    type = "Unknown";
}

Animal::Animal(std::string const type)
{
    std::cout << "Animal Constructor called !" << std::endl;
    this->type = type;
}
 
Animal::Animal(Animal const &Robj)
{
    std::cout << "Animal copy Constructor called !" << std::endl;
    *this = Robj;
}

Animal &Animal::operator=(Animal const &Robj)
{
    std::cout << "Animal copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called !" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
