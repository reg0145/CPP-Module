#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;

	public:
		std::string GetFirstName();
		void        SetFirstName(std::string);
		std::string GetLastName();
		void        SetLastName(std::string);
		std::string GetNickName();
		void        SetNickName(std::string);
		std::string GetPhoneNumber();
		void        SetPhoneNumber(std::string);
};

#endif