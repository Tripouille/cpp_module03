#include "FragTrap.hpp" 

FragTrap::FragTrap(std::string name) : ClapTrap(name, FragTrap::iv::LV, FragTrap::iv::HP, FragTrap::iv::MHP,
							FragTrap::iv::EP, FragTrap::iv::MEP, FragTrap::iv::MAD,
							FragTrap::iv::RAD, FragTrap::iv::ADR)
{
	std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot FRAGTRAP. Nom : "
	<< _name << ". Robot d'Hyperion classe C++" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FRAGTRAP: Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FRAGTRAP: Séquence de copie" << std::endl;
	FragTrap::copy(other);
}

FragTrap		&FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FRAGTRAP: scan de " << other._name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		FragTrap::copy(other);
	}
	return (*this);
}

void			FragTrap::copy(FragTrap const &other)
{
	std::cout << "FRAGCOPY de " << other._name << std::endl;
}

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FRAGTrap " << _name <<  " attacks " << target << " at range, causing "
				<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void			FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FRAGTrap " << _name <<  " attacks " << target << " at melee, causing "
				<< _meleeAttackDamage << " points of damage!" << std::endl;
}

void			FragTrap::stunningAttack(std::string const &target)
{
	std::cout << "FRAGTRAP " << _name <<  " attacks " << target << " with a stunning hit " << std::endl;
}

void			FragTrap::viciousAttack(std::string const &target)
{
	std::cout << "FRAGTRAP " << _name <<  " attacks " << target << " in the back causing "
				<< _meleeAttackDamage * 2 << " points of damage!" << std::endl;
}

void			FragTrap::rocketAttack(std::string const &target)
{
	std::cout << "FRAGTRAP " << _name <<  " attacks " << target << " launching a rocket causing "
				<< _rangedAttackDamage * 10 << " points of damage!" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	attack	attacks[5] = {
		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack,
		&FragTrap::stunningAttack,
		&FragTrap::viciousAttack,
		&FragTrap::rocketAttack
	};

	if (_energyPoints < VAULT_HUNTER_COST)
		std::cout << "FRAGTRAP " << "vaulthunter_dot_exe require at least "
				<< VAULT_HUNTER_COST << " energy" << std::endl;
	else
	{
		std::cout << "FRAGTRAP " << "vaulthunter_dot_exe on " << target << std::endl;
		_energyPoints -= VAULT_HUNTER_COST;
		(this->*(attacks[rand() % 5]))(target);
	}
}
