#include "Phonebook.Class.hpp"

std::string	change_string(std::string input)
{
	int	size;

	size = input.size();
	if (size < 10)
	{
		input.insert(0, 10 - size, ' ');
	}
	else if (size > 10)
	{
		input.resize(10);
		input.replace(9, 1, ".");
	}
	return (input);
	
}

Phonebook::Phonebook(void)
{
	contacts = 0;
    std::cout << "Phonebook constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void Phonebook::add_contact(void)
{
	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Phone_number;
	std::string Darkest_secret;
	int			i;

	i = contacts;
	if (i > 7)
		i = i - 8;
	std::cout << "First name: ";
	std::getline(std::cin, First_name);
	std::cout << "Last name: ";
	std::getline(std::cin, Last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, Nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, Phone_number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, Darkest_secret);
	if (First_name.empty() || Last_name.empty() || Nickname.empty() || Phone_number.empty() || Darkest_secret.empty())
	{
		std::cout << "Can't have empty fields" << std::endl;
		return ;
	}
	else
	{
		list[i].setContact(First_name, Last_name, Nickname, Phone_number, Darkest_secret);
		contacts++;
	}
}

void	Phonebook::display_contacts(void)
{
	int	i;
	int	c;
	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Index;

	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	c = contacts;
	if (c > 8)
		c = 8;
	i = 0;
	while (i < c)
	{
		First_name = change_string(list[i].get_firstname());
		Last_name = change_string(list[i].get_lastname());
		Nickname = change_string(list[i].get_nickname());
		Index = std::to_string(i);
		std::cout << "|" << "         " << Index << "|" << First_name << "|" << Last_name << "|" << Nickname << "|" << std::endl; 
		i++;
	}
}

void	Phonebook::display_contact(int index)
{
	std::cout << "First Name: " << list[index].get_firstname() << std::endl;
	std::cout << "Last Name: " << list[index].get_lastname() << std::endl;
	std::cout << "Nickname: " << list[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << list[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << list[index].get_darkest_secret() << std::endl;
}	