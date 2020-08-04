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

	private:
		SuperTrap(void);

		void			copy(SuperTrap const &other);
};

#endif