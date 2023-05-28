#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon( std::string str );
		std::string setType( std::string str );
		const std::string getType();
};

#endif