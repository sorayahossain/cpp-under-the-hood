#include "player.hpp"

void damage(Player& player, int amount)
{
    player.hit_points -= amount;
}
