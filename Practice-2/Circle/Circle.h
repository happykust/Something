#pragma once

class Circle {

private:
    float radius, x_center, y_center;

public:
    void circle (float r, float x, float y);

    void set_circle (float r, float x, float y);

    float square ();

    static bool triangle_around (float a, float b, float c);

    static bool triangle_in (float a, float b, float c);

    bool check_circle (float r, float x_cntr, float y_cntr);

};
