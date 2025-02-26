#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int RequiredSign;
        const int RequiredExecute;
    public: 
        // Constructor
        Form();
        Form(Form const &obj);
        Form &operator=(Form const &obj);
        ~Form();

        //getters
        std::string getName () const ;
        int getRequiredSign() const ;
        int getRequiredExecute() const ;
        bool getisSigned() const ;

        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           public:
                const char * what() const throw();
        };

        // others;
        bool beSigned(Bureaucrat &Bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form &obj);

#endif