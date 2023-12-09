#include "contact.hpp"

void	Contact::setName(std::string name)
{
	this -> name = name;
}

void	Contact::setSurname(std::string surname)
{
	this -> surname = surname;
}

void	Contact::setNickname(std::string nickname)
{
	this -> nick = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this -> phoneNumber = phoneNumber;
}

void	Contact::setSecret(std::string secret)
{
	this -> secret = secret;
}

std::string	Contact::getName() const
{
	return (name);
}

std::string	Contact::getSurname() const
{
	return (surname);
}

std::string	Contact::getNickname() const
{
	return (nick);
}

std::string	Contact::getPhoneNumber() const
{
	return (phoneNumber);
}

std::string	Contact::getSecret() const
{
	return (secret);
}
