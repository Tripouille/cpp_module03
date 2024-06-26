#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>
# include <ctime>
# include "ClapTrap.hpp"

# define VAULT_HUNTER_COST 25

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(FragTrap const &other);

		FragTrap		&operator=(FragTrap const &other);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			stunningAttack(std::string const &target);
		void			viciousAttack(std::string const &target);
		void			rocketAttack(std::string const &target);
		void			vaulthunter_dot_exe(std::string const &target);

		enum iv {LV = 1, HP = 100, MHP = 100, EP = 100, MEP = 100, MAD = 30, RAD = 20, ADR = 5};

	private:
		FragTrap(void);

		void			copy(FragTrap const &other);
};

typedef void	(FragTrap::*attack)(std::string const &);

#endif