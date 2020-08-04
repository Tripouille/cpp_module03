#include "NinjaTrap.hpp" 

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 1, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << "(⊙.⊙)" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "ヽ(。_°)ノ" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other)
{
	std::cout << "(⊙.⊙) COPIE!" << std::endl;
	NinjaTrap::copy(other);
}

NinjaTrap		&NinjaTrap::operator=(NinjaTrap const &other)
{
	std::cout << "٩( ᐛ )و NINJA ASSIGNATION!" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		NinjaTrap::copy(other);
	}
	return (*this);
}

void			NinjaTrap::copy(NinjaTrap const &other)
{
	std::cout << "(´△`)ﾉ NINJA COPIE DE " << other._name << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "(ง •̀_•́)ง NINJASHOEBOX SUR CLAPTRAP " << std::endl;
	target.takeDamage(10);
}

void			NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "(ง •̀_•́)ง NINJASHOEBOX SUR FRAGTRAP " << std::endl;
	target.takeDamage(10);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "(ง •̀_•́)ง NINJASHOEBOX SUR SCAVTRAP " << std::endl;
	target.takeDamage(10);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "(ง •̀_•́)ง NINJASHOEBOX SUR NINJATRAP " << std::endl;
	target.takeDamage(10);
}
