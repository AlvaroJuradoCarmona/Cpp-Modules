#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Ale");
    zombie->announce();
    delete zombie;
    randomChump("random");
    return 0;
}