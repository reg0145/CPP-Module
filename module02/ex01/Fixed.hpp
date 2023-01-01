#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
	private:
		static const int kFractionalBits = 8;
		int fixed_point_;

	public:
		Fixed();
		Fixed(const Fixed &ref);
		~Fixed();
		Fixed &operator=(const Fixed &ref);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif