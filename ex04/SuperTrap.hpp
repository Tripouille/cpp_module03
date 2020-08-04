#ifndef SUPERTRAP_HPP 
# define SUPERTRAP_HPP
# include <iostream>
# include <string.h>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(SuperTrap const &other);

		SuperTrap		&operator=(SuperTrap const &other);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

	private:
		SuperTrap(void);

		void			copy(SuperTrap const &other);
};

#endif