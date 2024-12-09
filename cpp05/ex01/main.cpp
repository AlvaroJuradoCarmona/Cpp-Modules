#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
		Form formA("Form 1", 1, 1);
		Bureaucrat b1("Paco", 1);
		b1.signForm(formA);
	return (0);
}