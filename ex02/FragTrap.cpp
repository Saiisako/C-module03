/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:37:19 by skock             #+#    #+#             */
/*   Updated: 2025/06/12 14:53:20 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name) : ClapTrap("FragTrap")
{
	std::cout << "Fragtrap constructor called." << std::endl;
	name = new_name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap() {std::cout << "Fragt" << std::endl;}

void FragTrap::highFivesGuys(void) { std::cout << "FragTrap \""<< name << "\" want a high five !" << std::endl; }
