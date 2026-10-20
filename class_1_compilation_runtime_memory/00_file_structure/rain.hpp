#pragma once

// This header describes the public shape of the Rain type.
// Other source files can include this header to learn which operations exist.
class Rain
{
public:
    // Update changes the stored state. dt is elapsed time in seconds.
    void Update(float dt);

    // Draw only reports the current state in this console example.
    void Draw() const;

private:
    // This value belongs to each Rain object.
    // It is deliberately simple: one number stands in for one falling drop.
    float drop_y_ = 0.0f;
};
