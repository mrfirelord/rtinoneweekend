#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

using color = vec3;

void write_color(std::ostream &out, const color &pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] component values to the byte range [0,255].
    const int rByte = static_cast<int>(255.999 * r);
    const int gByte = static_cast<int>(255.999 * g);
    const int bByte = static_cast<int>(255.999 * b);

    // Write out the pixel color components.
    out << rByte << ' ' << gByte << ' ' << bByte << '\n';
}

#endif