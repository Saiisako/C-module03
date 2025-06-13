/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:27:23 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 18:53:35 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap("CL4PTP");
	ScavTrap	scav("Roboto");
	FragTrap	frag("Bomberman");

	clap.status();
	
	scav.status();
	scav.attack("Le beauJack");
	scav.guardGate();
	
	frag.status();
	frag.highFivesGuys();
}