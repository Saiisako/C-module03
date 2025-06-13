/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:27:23 by skock             #+#    #+#             */
/*   Updated: 2025/06/13 18:28:00 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <vector>

int	main(void)
{
	ScavTrap	scav("Roboto");
	ClapTrap	clap("CL4PTP");

	clap.status();
	scav.status();
	std::cout << std::endl;
	scav.attack("Le beauJack");
	scav.guardGate();
}