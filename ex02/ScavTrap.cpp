/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:48:47 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 18:45:06 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "Constructing ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Constructing ScavTrap" << std::endl;
	
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructing ScavTrap" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << name << " is now in guard mode." << std::endl;
}
