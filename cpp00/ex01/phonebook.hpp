#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook {
	private:
		Contact		contacts[8];
		int			size;
		int			moment;
		std::string	get_input(std::string str);

	public:
		void		add();
		void		search(int id);
		void		display();
		int			get_size() const;
		PhoneBook(void);
};

#endif
