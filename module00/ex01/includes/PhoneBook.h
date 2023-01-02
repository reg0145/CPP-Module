#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"

class PhoneBook {
	public:
		PhoneBook();

		void    AddContact(Contact&);
		int     GetSize();
		Contact *GetContacts();

	private:
		static const int    kMaxSize = 8;

		int     index_;
		int     size_;
		Contact contacts_[kMaxSize];
};
#endif
