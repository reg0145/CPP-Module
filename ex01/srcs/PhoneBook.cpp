#include "../includes/PhoneBook.h"

PhoneBook::PhoneBook() {
	this->size = 0;
	this->index = 0;
}

Contact *PhoneBook::GetContacts() {
	return this->contacts;
}

void    PhoneBook::AddContact(Contact& contact) {
	this->contacts[index] = contact;
	this->index = (this->index + 1) % kMaxSize;
	if (this->size != kMaxSize)
		this->size += 1;
}

int     PhoneBook::GetSize() {
	return this->size;
}