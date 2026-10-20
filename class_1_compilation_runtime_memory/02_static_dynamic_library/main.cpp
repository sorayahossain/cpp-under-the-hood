#include <iostream>
#include "score.hpp"

int main()
{
    int score = 10;
    score = award_points(score, 5);
    std::cout << "score = " << score << '\n';
}
