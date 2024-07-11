#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_contacts[8];
		int			_len;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add_contact(Contact contact);
		void search_contact();
};

#endif