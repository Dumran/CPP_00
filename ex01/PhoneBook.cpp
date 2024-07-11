#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// for (int i = 0; i < 8; i++)

	this->_len = 0;
}

PhoneBook::~PhoneBook(void)
{
	// for (int i = 0; i < 8; i++)

	this->_len = 0;
}

void PhoneBook::add_contact(Contact contact)
{
	this->_contacts[this->_len % 8] = contact;
}

void PhoneBook::search_contact()
{

}
