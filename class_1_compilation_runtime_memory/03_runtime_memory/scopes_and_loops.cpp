#include <iostream>
#include <string>
#include <utility> // std::move is declared here.

struct Trace
{
    std::string name;
    explicit Trace(std::string text) : name(std::move(text))
    {
        std::cout << "+ create " << name << '\n';
    }
    ~Trace()
    {
        std::cout << "- destroy " << name << '\n';
    }
};

int main()
{
    Trace main_scope{"main-scope object"};

    if (true)
    {
        Trace if_scope{"if-scope object"};
        std::cout << "  inside if\n";
    } // if_scope is destroyed here.

    for (int i = 0; i < 3; ++i)
    {
        Trace iteration{"loop iteration " + std::to_string(i)};
        std::cout << "  i = " << i << '\n';
    } // a different iteration object finishes each time.

    std::cout << "main is still running\n";
} // main_scope finishes here.
