#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _level(1), _hitPoints(1), _maxHitPoints(1),
						_energyPoints(1), _maxEnergyPoints(1), _meleeAttackDamage(1),
						_rangedAttackDamage(1), _armorDamageReduction(1)
{
	std::cout << "CLAPTRAP constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name, u_int level, u_int hitPoints, u_int maxHitPoints,
					u_int energyPoints, u_int maxEnergyPoints, u_int meleeAttackDamage,
					u_int rangedAttackDamage, u_int armorDamageReduction)
					: _name(name), _level(level), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
					_energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _meleeAttackDamage(meleeAttackDamage),
					_rangedAttackDamage(rangedAttackDamage), _armorDamageReduction(armorDamageReduction)
{
	std::cout << "CLAPTRAP constructor" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CLAPTRAP destructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "CLAPTRAP copy constructor" << std::endl;
	ClapTrap::copy(other);
}

ClapTrap		&ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "CLAPTRAP assignation." << std::endl;
	if (this != &other)
		ClapTrap::copy(other);
	return (*this);
}

void			ClapTrap::copy(ClapTrap const &other)
{
	std::cout << "CLAPCOPY de " << other._name << std::endl;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
}

void			ClapTrap::showStatus(void) const
{
	std::cout << "_name: " << _name << std::endl;
	std::cout << "_level: " << _level << std::endl;
	std::cout << "_hitPoints: " << _hitPoints << std::endl;
	std::cout << "_maxHitPoints: " << _maxHitPoints << std::endl;
	std::cout << "_energyPoints: " << _energyPoints << std::endl;
	std::cout << "_maxEnergyPoints: " << _maxEnergyPoints << std::endl;
	std::cout << "_meleeAttackDamage: " << _meleeAttackDamage << std::endl;
	std::cout << "_rangedAttackDamage: " << _rangedAttackDamage << std::endl;
	std::cout << "_armorDamageReduction: " << _armorDamageReduction << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount
		- (_armorDamageReduction > amount ? amount : _armorDamageReduction);

	_hitPoints -= damage > _hitPoints ? _hitPoints : damage;
	std::cout << "ClapTrap " << _name <<  " take " << damage << " points of damage!" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	missingHitPoints = _maxHitPoints - _hitPoints;
	unsigned int	repairedHitPoints = amount > missingHitPoints ? missingHitPoints : amount;
	_hitPoints += repairedHitPoints;
	std::cout << "ClapTrap " << _name <<  " repare himself " << repairedHitPoints << " hit points!" << std::endl;	
}

void			ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name <<  " attacks " << target << " at range, causing "
				<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name <<  " attacks " << target << " at melee, causing "
				<< _meleeAttackDamage << " points of damage!" << std::endl;
}
