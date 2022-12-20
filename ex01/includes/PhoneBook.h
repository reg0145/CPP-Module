#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"

class PhoneBook {
	public:
		static const int    kMaxSize = 8;

		PhoneBook();

		void    AddContact(Contact&);
		int     GetSize();
		Contact *GetContacts();

	private:
		int     index;
		int     size;
		Contact contacts[kMaxSize];
};


#endif
