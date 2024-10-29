


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string.h>
#include <iostream>

class Brain
{
    private:
		std::string _ideas[100];
    public:
        ~Brain();

        Brain();
        Brain(const Brain &src);
        Brain &operator=(const Brain &src);
		std::string getIdea(int i) const;

};

#endif