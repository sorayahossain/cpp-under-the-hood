#include <iostream>
#include <string>

// Trace prints when an object begins and ends its lifetime.
// It makes scope changes visible in the console.
struct Trace
{
    std::string name;

    explicit Trace(std::string value) : name(std::move(value))
    {
        std::cout << "+ enter " << name << '\n';
    }

    ~Trace()
    {
        std::cout << "- leave " << name << '\n';
    }
};

void spawn_enemy()
{
    Trace frame{"spawn_enemy"};
    int enemy_health = 100;
    std::cout << "  enemy_health @ " << &enemy_health << '\n';
}

void update_game()
{
    Trace frame{"update_game"};
    int frame_number = 1;
    std::cout << "  frame_number @ " << &frame_number << '\n';
    spawn_enemy();
    std::cout << "  back inside update_game\n";
}

int main()
{
    Trace frame{"main"};
    update_game();
    std::cout << "back inside main\n";
}
