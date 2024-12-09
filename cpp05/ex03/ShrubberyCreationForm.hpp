#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string const target;
        ShrubberyCreationForm();
    public:        
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const &o);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &o);
        std::string const getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif