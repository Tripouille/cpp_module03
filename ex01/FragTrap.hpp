#ifndef FRAGTRAP_HPP 
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>
# include <ctime>

# define VAULT_HUNTER_COST 25

class FragTrap 
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &other);

		FragTrap		&operator=(FragTrap const &other);

		void			showStatus(void) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			stunningAttack(std::string const &target);
		void			viciousAttack(std::string const &target);
		void			rocketAttack(std::string const &target);
		void			vaulthunter_dot_exe(std::string const &target);
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

typedef void	(FragTrap::*attack)(std::string const &);

#endif