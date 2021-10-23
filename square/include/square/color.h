#pragma once

/*!
 * @brief RGBA color structure
 */
struct Color
{
    double r, g, b, a;

    Color(double r_ = 0, double g_ = 0, double b_ = 0, double a_ = 0) : r(r_), g(g_), b(b_), a(a_) {}

    bool operator==(const Color &other) const
    {
        return (r == other.r) && (g == other.g) && (b == other.b) && (a == other.a);
    }
};
