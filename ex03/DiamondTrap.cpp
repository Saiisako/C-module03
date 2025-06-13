#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "constructing DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name + "_clap_name"), FragTrap(new_name), ScavTrap(new_name)
{
	std::cout << "constructing DiamondTrap" << std::endl;

	name = new_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::~DiamondTrap()
{
std::cout << "destructing DiamondTrap" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << name << ", " << ClapTrap::name << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
