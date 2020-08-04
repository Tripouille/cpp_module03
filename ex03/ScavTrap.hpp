#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include <string.h>
# include <ctime>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
		ScavTrap(ScavTrap const &other);

		ScavTrap		&operator=(ScavTrap const &other);

		void			challengeNewcomer(std::string const &target);
		void			bananaChallenge(std::string const &target);
		void			hotChallenge(std::string const &target);
		void			chamallowChallenge(std::string const &target);

	private:
		ScavTrap(void);

		void			copy(ScavTrap const &other);
};

typedef void	(ScavTrap::*challenge)(std::string const &);

#endif