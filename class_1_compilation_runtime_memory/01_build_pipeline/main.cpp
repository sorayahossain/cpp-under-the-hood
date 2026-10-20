#include <iostream>

#include "math.hpp"
#include "player.hpp"

int main()
{
    // The compiler can check these calls because the headers contain declarations.
    // The linker later finds the compiled function bodies in math.o and player.o.
    std::cout << "add(2, 3) = " << add(2, 3) << '\n';
    std::cout << "square(5) = " << square(5) << '\n';

    Player player;
    damage(player, 35);
    std::cout << "player.hit_points = " << player.hit_points << '\n';
}
