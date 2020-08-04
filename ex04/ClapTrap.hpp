#ifndef CLAPTRAP_HPP 
# define CLAPTRAP_HPP
# include <iostream>
# include <string.h>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(std::string name, u_int level, u_int hitPoints, u_int maxHitPoints,
				u_int energyPoints, u_int maxEnergyPoints, u_int meleeAttackDamage,
				u_int rangedAttackDamage, u_int armorDamageReduction);
		virtual ~ClapTrap(void);
		ClapTrap(ClapTrap const &other);

		ClapTrap		&operator=(ClapTrap const &other);

		void			showStatus(void) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

	protected:
		std::string		_name;
		u_int			_level;
		u_int			_hitPoints;
		u_int			_maxHitPoints;
		u_int			_energyPoints;
		u_int			_maxEnergyPoints;
		u_int			_meleeAttackDamage;
		u_int			_rangedAttackDamage;
		u_int			_armorDamageReduction;

	private:
		ClapTrap(void);

		void	copy(ClapTrap const &other);
};

#endif