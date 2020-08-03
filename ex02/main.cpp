#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap a("a");
	FragTrap b(a);
	b.showStatus();
	/*std::cout << std::endl << "TEST DU FRAGTRAP" << std::endl;
	FragTrap		bob("bob");
	bob.showStatus();
	bob.takeDamage(1);
	bob.takeDamage(10000);
	FragTrap		roger(bob);
	roger.showStatus();
	bob.showStatus();
	bob.beRepaired(10000);
	roger.showStatus();
	bob.showStatus();
	std::cout << std::endl << "TEST DES ATTAQUES" << std::endl;
	bob.meleeAttack("Caillou");
	bob.rangedAttack("Pigeon");
	bob.vaulthunter_dot_exe("Jack");
	bob.vaulthunter_dot_exe("Dockett");
	bob.vaulthunter_dot_exe("L'Ange");
	bob.vaulthunter_dot_exe("Krieg");
	bob.vaulthunter_dot_exe("Poulpe");

	std::cout << std::endl << "TEST DU SCAVTRAP" << std::endl;
	ScavTrap		paul("paul");
	ScavTrap		robert(paul);
	paul.showStatus();
	paul.takeDamage(1);
	paul.takeDamage(10000);
	paul.showStatus();
	paul.beRepaired(10000);
	paul.showStatus();
	std::cout << std::endl << "TEST DES CHALLENGES" << std::endl;
	paul.challengeNewcomer("Xavier");
	paul.challengeNewcomer("Michel");
	paul.challengeNewcomer("Roger");*/
	return (0);
}