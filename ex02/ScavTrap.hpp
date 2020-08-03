#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include <string.h>
# include <time.h>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &other);

		ScavTrap		&operator=(ScavTrap const &other);

		void			challengeNewcomer(std::string const &target);
		void			bananaChallenge(std::string const &target);
		void			hotChallenge(std::string const &target);
		void			chamallowChallenge(std::string const &target);
};

typedef void	(ScavTrap::*challenge)(std::string const &);

#endif