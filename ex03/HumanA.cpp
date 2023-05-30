#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon){
	std::cout << this->_name << " enters in the field with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA die" << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}