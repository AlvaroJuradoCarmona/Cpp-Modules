#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	Bureaucrat b1("5", 5);
	Bureaucrat b2("140", 140);
	Bureaucrat b3("150", 150);

	AForm *form;
	Intern i = Intern();

	form = i.makeForm("shrubbery", "file");
	if (!form)
		return (1);
	try {
		form->beSigned(b3);
	} catch (std::exception &e) {
		std::cout << "shrubbery could not be signed because " << e.what() << std::endl;
	}
	try {
		b3.executeForm(*form);
	} catch (std::exception &e) {
		std::cout << "shrubbery could not be executed because " << e.what() << std::endl;
	}
	delete form;
	return (0);
}