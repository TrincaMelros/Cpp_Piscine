#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	bool		empty;

public:
	Contact(void);
	~Contact(void);

	std::string	get_firstname(void);
	std::string get_lastname(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	void	setContact(std::string a, std::string b, std::string c, std::string d, std::string e);
	void	emptyContact(int number);
	
};

#endif