#include "rain.hpp"

#include <iostream>

// This source file supplies the function bodies announced in rain.hpp.
void Rain::Update(float dt)
{
    constexpr float speed = 120.0f; // pixels per second in an imagined game window
    drop_y_ += speed * dt;
}

void Rain::Draw() const
{
    std::cout << "The example drop is at y = " << drop_y_ << '\n';
}
