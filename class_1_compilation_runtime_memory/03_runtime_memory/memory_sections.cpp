#include <iostream>
#include <memory>

// Global variables have static storage duration.
int global_score = 10;

struct Game
{
    // A static data member is shared by all Game objects.
    static int total_games;

    int local_member = 7;
};

int Game::total_games = 0;

void show_addresses()
{
    // This ordinary local variable has automatic storage duration.
    int local_score = 20;

    // The unique_ptr object itself is local.
    // The integer it owns is dynamically allocated.
    auto heap_score = std::make_unique<int>(30);

    static int function_static = 40;

    std::cout << "global_score       @ " << &global_score << " value=" << global_score << '\n';
    std::cout << "Game::total_games  @ " << &Game::total_games << " value=" << Game::total_games << '\n';
    std::cout << "function_static    @ " << &function_static << " value=" << function_static << '\n';
    std::cout << "local_score        @ " << &local_score << " value=" << local_score << '\n';
    std::cout << "heap integer       @ " << heap_score.get() << " value=" << *heap_score << '\n';
}

int main()
{
    show_addresses();
}
