/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:48:47 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 18:40:30 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(); // Constructeur par défaut
		ScavTrap(const std::string& name); // Constructeur
		ScavTrap(const ScavTrap& copy); // Constructeur de copie
		ScavTrap& operator=(const ScavTrap& other); // Opérateur d'affectation
		~ScavTrap(); // Destructeur
		void	guardGate();
};

