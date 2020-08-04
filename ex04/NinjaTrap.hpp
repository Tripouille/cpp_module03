#ifndef NINJATRAP_HPP 
# define NINJATRAP_HPP
# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		virtual ~NinjaTrap(void);
		NinjaTrap(NinjaTrap const &other);

		NinjaTrap		&operator=(NinjaTrap const &other);

		void			ninjaShoebox(ClapTrap &target);
		void			ninjaShoebox(FragTrap &target);
		void			ninjaShoebox(ScavTrap &target);
		void			ninjaShoebox(NinjaTrap &target);

		enum iv {LV = 1, HP = 60, MHP = 60, EP = 120, MEP = 120, MAD = 60, RAD = 5, ADR = 0};

	private:
		NinjaTrap(void);

		void			copy(NinjaTrap const &other);
};

#endif