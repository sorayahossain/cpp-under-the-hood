#pragma once

// The header describes the Player type so other source files can use it.
struct Player
{
    int hit_points{100};
};

// Declaration only. The body lives in player.cpp.
void damage(Player& player, int amount);
