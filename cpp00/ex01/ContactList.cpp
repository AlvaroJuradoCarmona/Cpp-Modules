/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactList.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurado- <ajurado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 13:06:02 by ajurado-          #+#    #+#             */
/*   Updated: 2024/05/11 18:03:13 by ajurado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact contactForm()
{
    Contact c = Contact();
    std::string info;

    std::cout << "Write the contact's first name: ";
    std::getline(std::cin, info);
    c.setFirstName(info);

    std::cout << "Write the contact's last name: ";
    std::getline(std::cin, info);
    c.setLastName(info);

    std::cout << "Write the contact's nickname: ";
    std::getline(std::cin, info);
    c.setNickname(info);

    std::cout << "Write the contact's phone number: ";
    std::getline(std::cin, info);
    c.setPhoneNumber(info);

    std::cout << "Write the contact's darkest secret: ";
    std::getline(std::cin, info);
    c.setDarkestSecret(info);

    return (c);
}

int main(void)
{
    PhoneBook   phoneBook = PhoneBook();
    std::string command = "";
    Contact     contact;
    std::string iStr;
    int         i;
    bool        number = true;

    while (command.compare("EXIT") != 0)
    {
        std::cout << "Write a command (ADD/ SEARCH/ EXIT):" << std::endl; 
        std::getline(std::cin, command);
        for (unsigned long i = 0; i < command.length(); i++)
            command[i] = char(std::toupper(command[i]));
        if (command.compare("ADD") == 0)
        {
            std::cout << "Give contact info:" << std::endl;
            contact = contactForm();
            phoneBook.addContact(contact);
            std::cout << "Contact added!" << std::endl;
        }
        else if (command.compare("SEARCH") == 0)
        {
            phoneBook.printBook();
            std::cout << "Write a valid phonebook index:" << std::endl;
            std::getline(std::cin, iStr);
            i = std::atoi(iStr.c_str());
            for (int w=0; w < (int) iStr.length(); w++)
            {
                if (!std::isdigit(iStr[w]))
                {
                    std::cout << "Wrong index." << std::endl;
                    number = false;
                }
            }
            if (!number)
                break ;
            if (i < 0 || i > 7 || (!phoneBook.getCircular() && i > phoneBook.getCurrentIndex() - 1))
                std::cout << "Wrong index. Exiting search mode..." << std::endl;
            else
                phoneBook.printSelectedContact(i);
        }
        else if (command.compare("EXIT") != 0)
            std::cout << "Wrong command!" << std::endl;
    }
    std::cout << "Exiting..." << std::endl;
    return (0);
}