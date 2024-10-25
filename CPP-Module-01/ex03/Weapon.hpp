/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:17:25 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/25 20:01:47 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string &getType(void) const ;
        void setType(std::string type);
        Weapon(std::string type) : type(type) {};
        ~Weapon();
};

#endif