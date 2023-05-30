#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	std::cout << this->_name << " enters in the field without any weapon " << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB is die" << std::endl;
}

void HumanB::setWeapon( Weapon &newWeapon ) {
	this->_weapon = &newWeapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with their " << std::endl;
}