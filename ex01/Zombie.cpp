#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << GRN << "Zombie has just been born (｡⨱ω⨱)づ" << std::endl;
}

// Zombie::Zombie( std::string name ) : _name( name ) {
// 	// this->_name = name; 
// 	std::cout << GRN << this->_name << RED << " --> " << MAG << "has just been born (｡⨱ω⨱)づ" << std::endl;
// }

Zombie::~Zombie() {
	std::cout << CYN << this->_name << RED << " --> " << MAG << "DIED ⤜(*⏠*)⤏" << std::endl;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}

void Zombie::announce() {
	std::cout << CYN << this->_name << RED << " --> " << MAG << "BraiiiiiiinnnzzzZ..." << std::endl;
}