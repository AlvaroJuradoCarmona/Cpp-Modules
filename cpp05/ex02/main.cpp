#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat b1("5", 5);
	Bureaucrat b2("140", 140);
	Bureaucrat b3("150", 150);

	ShrubberyCreationForm s1("shrubbery");
	RobotomyRequestForm r1("robotomy");
	PresidentialPardonForm p1("presidential");

	try {
		s1.beSigned(b3);
	} catch (std::exception &e) {
		std::cout << s1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}
	try {
		b3.executeForm(s1);
	} catch (std::exception &e) {
		std::cout << s1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}
	try {
		r1.beSigned(b1);
	} catch (std::exception &e) {
		std::cout << r1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}
	try {
		b1.executeForm(r1);
	} catch (std::exception &e) {
		std::cout << r1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}
	try {
		p1.beSigned(b2);
	} catch (std::exception &e) {
		std::cout << p1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}
	try {
		b2.executeForm(p1);
	} catch (std::exception &e) {
		std::cout << p1.getTarget() << " could not be signed because " << e.what() << std::endl;
	}

	return (0);
}