#ifndef NINJATRAP_HPP 
# define NINJATRAP_HPP
# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"

class NinjaTrap : ClapTrap
{
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(NinjaTrap const &other);

		NinjaTrap		&operator=(NinjaTrap const &other);

	private:
};

#endif