#ifndef NINJATRAP_HPP 
# define NINJATRAP_HPP
# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
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

	private:
		NinjaTrap(void);

		void			copy(NinjaTrap const &other);
};

#endif