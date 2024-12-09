#include "Bureaucrat.hpp"

int	main(void) {
	Bureaucrat b1("Paco", 149);
	std::cout << "Bureaucrat 1: " << b1;
	try {
		b1.decrementGrade();
		std::cout << "Decrement b1: " << b1;
		b1.decrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Bureaucrat 1: " << b1;
	try {
		Bureaucrat b2("Juan", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}