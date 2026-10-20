#include "rain.hpp"

int main()
{
    // Including rain.hpp did not create this object.
    // This declaration creates one Rain object named rain.
    Rain rain;

    // We use the interface announced in rain.hpp.
    // The linker later connects these calls to the bodies compiled from rain.cpp.
    rain.Update(0.016f);
    rain.Draw();
}
