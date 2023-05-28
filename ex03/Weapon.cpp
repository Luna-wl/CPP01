#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
}

void Weapon::setType( std::string str ) {
	
	// std::cout << "newType = " << newType << std::endl;
}

const std::string Weapon::getType() {
	return (this->_type);
}