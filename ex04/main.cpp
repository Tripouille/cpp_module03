#include "SuperTrap.hpp"


int		main(void)
{
	srand(time(nullptr));
	ClapTrap target("target");
	std::cout << std::endl << "TEST DU CTOR" << std::endl;
	SuperTrap	super("super");
	super.showStatus();
	std::cout << std::endl << "TEST DES ATTACK" << std::endl;
	super.meleeAttack("cible");
	super.rangedAttack("cible");
	super.ninjaShoebox(target);
	super.vaulthunter_dot_exe("roger");
	std::cout << std::endl << "TEST DU CTOR PAR COPIE" << std::endl;
	SuperTrap	super2(super);
	std::cout << std::endl << "DESTRUCTOR TIME" << std::endl;
	return (0);
}