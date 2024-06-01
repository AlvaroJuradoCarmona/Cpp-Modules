#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie(void);
        ~Zombie(void);

        Zombie(std::string name);
        void setName(std::string name);
        void announce(void);
};

Zombie* zombieHorde(int num, std::string name);

#endif