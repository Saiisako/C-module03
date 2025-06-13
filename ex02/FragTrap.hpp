/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:40:36 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 18:49:19 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(); // Constructeur par défaut
		FragTrap(const std::string& name); // Constructeur
		FragTrap(const FragTrap& copy); // Constructeur de copie
		FragTrap& operator=(const FragTrap& other); // Opérateur d'affectation
		~FragTrap(); // Destructeur
		void	highFivesGuys(void);
};
