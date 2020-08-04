#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string.h>
# include <ctime>
# include "ClapTrap.hpp"

# define VAULT_HUNTER_COST 25

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const &other);

		FragTrap		&operator=(FragTrap const &other);

		void			stunningAttack(std::string const &target);
		void			viciousAttack(std::string const &target);
		void			rocketAttack(std::string const &target);
		void			vaulthunter_dot_exe(std::string const &target);

	private:
		void			copy(FragTrap const &other);
};

typedef void	(FragTrap::*attack)(std::string const &);

#endif