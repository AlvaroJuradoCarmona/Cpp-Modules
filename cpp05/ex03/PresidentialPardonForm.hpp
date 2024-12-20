#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string const target;
        PresidentialPardonForm();
    public:
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const &o);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &o);
        std::string const getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif