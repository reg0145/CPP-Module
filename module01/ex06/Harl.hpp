//
// Created by KDH on 2022/12/23.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	public:
		void complain( std::string level );

	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void nothing( void );
};


#endif //INC_00_HARL_HPP
