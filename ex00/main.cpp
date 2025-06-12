/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skock <skock@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:27:23 by skock             #+#    #+#             */
/*   Updated: 2025/06/12 11:47:08 by skock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot("CL4PTP");

	robot.status();
	robot.takeDamage(5);
	robot.status();
	robot.attack("caca");
	robot.beRepaired(5);
	robot.status();
}