/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:27:23 by skock             #+#    #+#             */
/*   Updated: 2025/06/12 14:43:19 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	robot1("CL4PTP");
	ScavTrap	robot2("Bozo");
	FragTrap	robot3("Retarded");

	robot2.guardGate();
	robot3.highFivesGuys();
}