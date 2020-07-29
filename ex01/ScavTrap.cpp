#include "ScavTrap.hpp" 

ScavTrap::ScavTrap(std::string name) : _name(name), _level(1), _hitPoints(100), _maxHitPoints(100),
						_energyPoints(50), _maxEnergyPoints(50),   _meleeAttackDamage(20),
						_rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot ScavTrap. Nom : "
	<< _name << ". Robot d'Hyperion classe C--" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Je suis mort . . ." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Lancement de la Scav copie" << std::endl;
	*this = other;
}

ScavTrap		&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavScan de " << other._name << std::endl;
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

void			ScavTrap::showStatus(void) const
{
	std::cout << "_name: " << _name << std::endl;
	std::cout << "_hitPoints: " << _hitPoints << std::endl;
	std::cout << "_energyPoints: " << _energyPoints << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount
		- (_armorDamageReduction > amount ? amount : _armorDamageReduction);

	_hitPoints -= damage > _hitPoints ? _hitPoints : damage;
	std::cout << "ScavTrap " << _name <<  " take " << damage << " points of damage!" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	missingHitPoints = _maxHitPoints - _hitPoints;
	unsigned int	repairedHitPoints = amount > missingHitPoints ? missingHitPoints : amount;
	_hitPoints += repairedHitPoints;
	std::cout << "ScavTrap " << _name <<  " repare himself " << repairedHitPoints << " hit points!" << std::endl;	
}

void			ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name <<  " attacks " << target << " at range, causing "
				<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name <<  " attacks " << target << " at melee, causing "
				<< _meleeAttackDamage << " points of damage!" << std::endl;
}
