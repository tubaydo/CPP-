#include "phonebook.hpp"

PhoneBook::PhoneBook(void): size(0)
{

}

std::string	PhoneBook::get_input(std::string str)
{
	std::string input;

	while (input.empty())
	{
		std::cout << str;
		std::getline(std::cin, input);
	}
	return (input);
}

void	PhoneBook::add()
{
	contacts[moment].setName(get_input("First name : "));
	contacts[moment].setSurname(get_input("Last name : "));
	contacts[moment].setNickname(get_input("Nickname : "));
	contacts[moment].setPhoneNumber(get_input("Phone Number : "));
	contacts[moment].setSecret(get_input("Dark secret : "));
	moment = (moment + 1) % 8;
	if (this -> size < 8)
		this -> size++;
}

void	print_for_lenght(std::string str)
{
	int	len;
	int	space;

	len = str.length();
	if (len <= 10)
	{
		space = 10 - len + 1;
		while (--space)
		{}
		std::cout << std::setw(10) << std::right << str.substr(0, 9) << "|";
	}
	else
		std::cout << str.substr(0, 9) << ".|";
}

void	PhoneBook::display()
{
	int	i;

	i = 0;
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nick Name" << "|";
	std::cout<<std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	while (i < size)
	{
		
		std::cout << std::setw(10) << std::right << i+1 << "|";
		//std::cout << i + 1 << "       |";
		print_for_lenght(contacts[i].getName());
		print_for_lenght(contacts[i].getSurname());
		print_for_lenght(contacts[i].getNickname());
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::search(int id)
{
	if (id > 0 && id <= size)
	{
		std::cout << "First name : " << contacts[id - 1].getName() << std::endl;
		std::cout << "Last name : " << contacts[id - 1].getSurname() << std::endl;
		std::cout << "Nickname : " << contacts[id - 1].getNickname() << std::endl;
		std::cout << "Phone Number : " << contacts[id - 1].getPhoneNumber() << std::endl;
		std::cout << "Dark secret : " << contacts[id - 1].getSecret() << std::endl;
	}
}

int	PhoneBook::get_size() const
{
	return (this -> size);
}
