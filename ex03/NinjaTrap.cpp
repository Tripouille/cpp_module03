#include "NinjaTrap.hpp" 

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
}

NinjaTrap::~NinjaTrap(void)
{
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other)
{
}

NinjaTrap		&NinjaTrap::operator=(NinjaTrap const &other)
{
	
}