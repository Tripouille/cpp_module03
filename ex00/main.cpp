#include "FragTrap.hpp"

int		main(void)
{
	FragTrap		bob("bob");
	FragTrap		roger(bob);

	bob.showStatus();
	bob.takeDamage(1);
	bob.takeDamage(10000);
	bob.showStatus();
	bob.beRepaired(10000);
	bob.showStatus();
	std::cout << std::endl << "TEST DES ATTAQUES" << std::endl;
	bob.meleeAttack("Caillou");
	bob.rangedAttack("Pigeon");
	bob.vaulthunter_dot_exe("Jack");
	bob.vaulthunter_dot_exe("Dockett");
	bob.vaulthunter_dot_exe("L'Ange");
	bob.vaulthunter_dot_exe("Krieg");
	bob.vaulthunter_dot_exe("Poulpe");
	return (0);
}