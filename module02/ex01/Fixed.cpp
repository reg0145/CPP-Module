#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_ = 0;
}

Fixed::Fixed(const Fixed &ref) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_ = ref.fixed_point_;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point_;
}

void Fixed::setRawBits(const int raw) {
	this->fixed_point_ = raw;
}