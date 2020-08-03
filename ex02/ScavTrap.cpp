#include "ScavTrap.hpp" 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_level = 1;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot ScavTrap. Nom : "
	<< _name << ". Robot d'Hyperion classe C--" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Je suis mort . . ." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "Lancement de la Scav copie" << std::endl;
	*this = other;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavScan de " << other._name << std::endl;
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	std::cout << "Copie réussie" << std::endl;
	return (*this);
}

void			ScavTrap::bananaChallenge(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " challenge " << target << " to swallow a banana." << std::endl;
}

void			ScavTrap::hotChallenge(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " challenge " << target << " to eat chilli pepper." << std::endl;
}

void			ScavTrap::chamallowChallenge(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " challenge " << target << " to eat 100 chamallow." << std::endl;
}

void			ScavTrap::challengeNewcomer(std::string const &target)
{
	challenge		challenges[3] = {
		&ScavTrap::bananaChallenge,
		&ScavTrap::hotChallenge,
		&ScavTrap::chamallowChallenge
	};
	std::cout << "Hello " << target << " you need to do a challenge to enter." << std::endl;
	(this->*(challenges[rand() % 3]))(target);
}
