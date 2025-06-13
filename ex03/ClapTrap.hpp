/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:28:00 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 19:16:37 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap(const std::string &name, int hp, int ep, int ad);
		ClapTrap(); // Constructeur par défaut
		ClapTrap(std::string new_name); // Constructeur
		ClapTrap(const ClapTrap& copy); // Constructeur de copie
		ClapTrap& operator=(const ClapTrap& other); // Opérateur d'affectation
		virtual ~ClapTrap(); // Destructeur
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	status(void);
};

