#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << MAG << "Zombie is born (｡⨱ω⨱)づ" << std::endl;
}

Zombie::~Zombie() {
	std::cout << RED << "DIED ⤜(*⏠*)⤏" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << CYN << ": BraiiiiiiinnnzzzZ..." << std::endl;
}