#include "SuperTrap.hpp" 

SuperTrap::SuperTrap(std::string name)
				: ClapTrap(name, 1, FragTrap::iv::HP, FragTrap::iv::MHP,
							NinjaTrap::iv::EP, NinjaTrap::iv::MEP, NinjaTrap::iv::MAD,
							FragTrap::iv::RAD, FragTrap::iv::ADR),
				FragTrap(name),
				NinjaTrap(name)
{
	std::cout << "SUPER CONSTRUCTOR" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUPER DESTRUCTOR" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other), FragTrap(other), NinjaTrap(other)
{
	std::cout << "SUPER COPIE!" << std::endl;
	SuperTrap::copy(other);
}

SuperTrap		&SuperTrap::operator=(SuperTrap const &other)
{
	std::cout << "SUPER ASSIGNATION!" << std::endl;
	if (this != &other)
	{
		FragTrap::operator=(other);
		NinjaTrap::operator=(other);
		SuperTrap::copy(other);
	}
	return (*this);
}

void			SuperTrap::copy(SuperTrap const &other)
{
	std::cout << "(´△`)ﾉ SUPER COPIE DE " << other._name << std::endl;
}

void			SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
