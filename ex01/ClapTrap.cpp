/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:36:21 by skock             #+#    #+#             */
/*   Updated: 2025/06/12 14:17:05 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::status(void)
{
	std::cout << std::endl;
	std::cout << "///////  STATUS  ///////" << std::endl;
	std::cout << this->name << std::endl;
	std::cout << std::endl;
	std::cout << "Hp remaining     : " << this->hit_points << std::endl;
	std::cout << "Energy remaining : " << this->energy_points << std::endl;
	std::cout << "Attack damage    : " << this->attack_damage << std::endl;
	std::cout << "//////////////" << std::endl;
	std::cout << std::endl;

}

void ClapTrap::attack(const std::string& target)
{
	std::cout << this->name << " attack " << target << ", causing "<< this->attack_damage << " points of damage!" << std::endl;
	this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " took " << amount << " damage." << std::endl;
	this->hit_points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 10)
	{
		std::cout << "Cannot be repair because " << this->name << " is already full health." << std::endl;
		return ;
	}
	else if (this->energy_points <= 0)
	{
		std::cout << "Cannot be repair because " << this->name << " is already low energy." << std::endl;
		return ;
	}
	this->energy_points -= 1;
	this->hit_points += amount;
	std::cout << this->name << " repaired itself from " << amount << " health point."<< std::endl;
}

ClapTrap::ClapTrap(std::string new_name)
{
	std::cout << "ClapTrap constructor called." << std::endl;
	name = new_name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}
ClapTrap::~ClapTrap() {std::cout << "ClapTrap destructor called." << std::endl;}

