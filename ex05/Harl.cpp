#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug( void ) {
	std::cout << "Debug..." << std::endl;
}

void Harl::info( void ) {
	std::cout << "Info..." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "Warining..." << std::endl;
}

void Harl::error( void ) {
	std::cout << "Error..." <<std::endl;
}

void Harl::complain( std::string level ) {
	void (Harl::*Level[4])(void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (array[i] == level)
			(this->*Level[i])();
	}
}
