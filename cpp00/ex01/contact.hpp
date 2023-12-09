#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private :
		std::string	name;
		std::string	surname;
		std::string	nick;
		std::string	phoneNumber;
		std::string	secret;

	public :
		void		setName(std::string name);
		std::string	getName(void) const;
		void		setSurname(std::string surname);
		std::string	getSurname(void) const;
		void		setNickname(std::string nick);
		std::string	getNickname(void) const;
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getPhoneNumber(void) const;
		void		setSecret(std::string secret);
		std::string	getSecret(void) const;
};

#endif
