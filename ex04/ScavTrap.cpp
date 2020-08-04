#include "ScavTrap.hpp" 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 1, 100, 100, 50, 50, 20, 15, 3)
{
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
	ScavTrap::copy(other);
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavScan de " << other._name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		ScavTrap::copy(other);
	}
	return (*this);
}

void			ScavTrap::copy(ScavTrap const &other)
{
	std::cout << "SCAVCOPY de " << other._name << std::endl;
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
