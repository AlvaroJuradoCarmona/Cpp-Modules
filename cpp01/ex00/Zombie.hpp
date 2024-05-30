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
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif