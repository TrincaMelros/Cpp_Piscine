#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include "Contact.Class.hpp"

class Phonebook {
private:
	class Contact list[8];
	int	contacts;

public:
	Phonebook();
	~Phonebook();

	void	add_contact(void);
	void	display_contacts(void);
	void	display_contact(int index);
};

#endif