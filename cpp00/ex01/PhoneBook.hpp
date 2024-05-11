/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneList.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurado- <ajurado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:28:24 by ajurado-          #+#    #+#             */
/*   Updated: 2024/05/11 12:28:25 by ajurado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_first_idx;
		int     _current_idx;
		bool	_circular;

	public:
		PhoneBook();
		~PhoneBook();

		bool		getCircular();
		void		setCircular(bool value);
		int			getCurrentIndex();

		void		addContact(Contact c);
		void		printBook();
		std::string	truncate(std::string word);
		void		printSelectedContact(int idx);
};

#endif