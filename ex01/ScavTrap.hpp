#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP
# include <iostream>
# include <string.h>
# include <ctime>

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &other);

		ScavTrap		&operator=(ScavTrap const &other);

		void			showStatus(void) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			challengeNewcomer(std::string const &target);
		void			bananaChallenge(std::string const &target);
		void			hotChallenge(std::string const &target);
		void			chamallowChallenge(std::string const &target);

	private:
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

typedef void	(ScavTrap::*challenge)(std::string const &);

#endif