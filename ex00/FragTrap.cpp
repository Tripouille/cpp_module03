#include "FragTrap.hpp" 

FragTrap::FragTrap(std::string name) : _name(name), _level(1), _hitPoints(100), _maxHitPoints(100),
						_energyPoints(100), _maxEnergyPoints(100),   _meleeAttackDamage(30),
						_rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : "
	<< _name << ". Robot d'Hyperion classe C++" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "Séquence de copie" << std::endl;
	*this = other;
}

FragTrap		&FragTrap::operator=(FragTrap const &other)
{
	std::cout << "Scan de " << other._name << std::endl;
	if (this == &other)
		return (*this);
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	std::cout << "Copie réussie" << std::endl;
	return (*this);
}

void			FragTrap::showStatus(void) const
{
	std::cout << "_name: " << _name << std::endl;
	std::cout << "_hitPoints: " << _hitPoints << std::endl;
	std::cout << "_energyPoints: " << _energyPoints << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount
		- (_armorDamageReduction > amount ? amount : _armorDamageReduction);

	_hitPoints -= damage > _hitPoints ? _hitPoints : damage;
	std::cout << "FR4G-TP " << _name <<  " take " << damage << " points of damage!" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	missingHitPoints = _maxHitPoints - _hitPoints;
	unsigned int	repairedHitPoints = amount > missingHitPoints ? missingHitPoints : amount;

	_hitPoints += repairedHitPoints;
	std::cout << "FR4G-TP " << _name <<  " repare himself " << repairedHitPoints << " hit points!" << std::endl;	
}

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name <<  " attacks " << target << " at range, causing "
				<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void			FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name <<  " attacks " << target << " at melee, causing "
				<< _meleeAttackDamage << " points of damage!" << std::endl;
}

void			FragTrap::stunningAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name <<  " attacks " << target << " with a stunning hit " << std::endl;
}

void			FragTrap::viciousAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name <<  " attacks " << target << " in the back causing "
				<< _meleeAttackDamage * 2 << " points of damage!" << std::endl;
}

void			FragTrap::rocketAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name <<  " attacks " << target << " launching a rocket causing "
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
		std::cout << "vaulthunter_dot_exe require at least " << VAULT_HUNTER_COST << " energy" << std::endl;
	else
	{
		std::cout << "vaulthunter_dot_exe on " << target << std::endl;
		_energyPoints -= VAULT_HUNTER_COST;
		(this->*(attacks[rand() % 5]))(target);
	}
}
