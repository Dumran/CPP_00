#include "Contact.hpp"
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	Contact contact;
	PhoneBook phoneBook;

	contact = Contact("first_name", "last_name", "nickname", "phone_number", "darkest_secret");
	phoneBook.add_contact(contact);
}