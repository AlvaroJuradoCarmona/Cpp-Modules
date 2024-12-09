#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool isSigned;
		int const gradeToSign;
		int const gradeToExecute;
		AForm();
	public:
        virtual ~AForm();		
        class GradeTooHighException;
		class GradeTooLowException;
        class FormNotSignedException;
		AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
		AForm(AForm const &o);
		AForm &operator=(AForm const &o);
		std::string const getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat const &b);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm const &f);

#endif