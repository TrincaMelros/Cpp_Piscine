#include "Contact.Class.hpp"

Contact::Contact(void)
{
    std::string empty_string = "Empty";
    
    first_name = empty_string;
    last_name = empty_string;
    nickname = empty_string;
    phone_number = empty_string;
    darkest_secret = empty_string;
    empty = true;

    std::cout << "Contact constructor called" << std::endl;
    return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

std::string	Contact::get_firstname(void)
{
	return(first_name);
}

std::string	Contact::get_lastname(void)
{
	return(last_name);
}

std::string	Contact::get_nickname(void)
{
	return(nickname);
}

std::string	Contact::get_phone_number(void)
{
	return(phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return(darkest_secret);
}

void Contact::setContact(std::string a, std::string b, std::string c, std::string d, std::string e)
{

    first_name = a;
    last_name = b;
    nickname = c;
    phone_number = d;
    darkest_secret = e;

	std::cout << "Contact created successfully" << std::endl;
	return ;
}

void	Contact::emptyContact(int number)
{
	std::string empty_string = "Empty";
    
    first_name = empty_string;
    last_name = empty_string;
    nickname = empty_string;
    phone_number = empty_string;
    darkest_secret = empty_string;
    empty = true;
	return ;
}