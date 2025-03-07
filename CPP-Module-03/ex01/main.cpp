/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:53:24 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 16:49:09 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ClapTrap suii("DOG");
    suii.attack("PEACHE");
    suii.beRepaired(21);
    ScavTrap enemy("BOSS");
    enemy.attack("Sergent");
    enemy.beRepaired(12);
    enemy.takeDamage(2);
    enemy.guardGate();
}