#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	srand(time(nullptr));
	ClapTrap	clap("clap");
	FragTrap	frag("frag");
	ScavTrap	scav("scav");
	NinjaTrap	ninja("ninja");
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	return (0);
}