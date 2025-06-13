/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:40:38 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 19:45:44 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Constructing FragTrap" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "Constructing FragTrap" << std::endl;
}

FragTrap::~FragTrap() { std::cout << "destructing FragTrap" << std::endl; }

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " request a high five."<< std::endl;
}
