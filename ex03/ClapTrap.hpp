#ifndef CLAPTRAP_HPP 
# define CLAPTRAP_HPP
# include <iostream>
# include <string.h>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &other);

		ClapTrap		&operator=(ClapTrap const &other);

		void			showStatus(void) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

	protected:
		std::string		_name;
		unsigned int	_level;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
};

#endif