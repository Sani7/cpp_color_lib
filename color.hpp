/*
 * MIT License
 *
 * Copyright (c) 2024 Sander Speetjens
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#pragma once

#include <cstdint>
#include <string>

class Color {
  public:
    enum Colors {
        Aquamarine,
        Baker_s_Chocolate,
        Black,
        Blue,
        Blue_Violet,
        Brass,
        Bright_Gold,
        Brown,
        Bronze,
        Bronze_II,
        Cadet_Blue,
        Cool_Copper,
        Copper,
        Coral,
        Corn_Flower_Blue,
        Cyan,
        Dark_Brown,
        Dark_Green,
        Dark_Green_Copper,
        Dark_Olive_Green,
        Dark_Orchid,
        Dark_Purple,
        Dark_Slate_Blue,
        Dark_Slate_Grey,
        Dark_Tan,
        Dark_Turquoise,
        Dark_Wood,
        Dim_Grey,
        Dusty_Rose,
        Feldspar,
        Firebrick,
        Forest_Green,
        Gold,
        Goldenrod,
        Grey,
        Green,
        Green_Copper,
        Green_Yellow,
        Hunter_Green,
        Indian_Red,
        Khaki,
        Light_Blue,
        Light_Grey,
        Light_Steel_Blue,
        Light_Wood,
        Lime_Green,
        Magenta,
        Mandarian_Orange,
        Maroon,
        Medium_Aquamarine,
        Medium_Blue,
        Medium_Forest_Green,
        Medium_Goldenrod,
        Medium_Orchid,
        Medium_Seagreen,
        Medium_Slate_Blue,
        Medium_Spring_Green,
        Medium_Turquoise,
        Medium_Violet_Red,
        Medium_Wood,
        Midnight_Blue,
        Navy_Blue,
        Neon_Blue,
        Neon_Pink,
        New_Midnight_Blue,
        New_Tan,
        Old_Gold,
        Orange,
        Orange_Red,
        Orchid,
        Pale_Green,
        Pink,
        Plum,
        Quartz,
        Red,
        Rich_Blue,
        Salmon,
        Scarlet,
        Sea_Green,
        Semi_Sweet_Chocolate,
        Sienna,
        Silver,
        Sky_Blue,
        Slate_Blue,
        Spicy_Pink,
        Spring_Green,
        Steel_Blue,
        Summer_Sky,
        Tan,
        Thistle,
        Turquoise,
        Very_Dark_Brown,
        Very_Light_Grey,
        Violet,
        Violet_Red,
        Wheat,
        White,
        Yellow,
        Yellow_Green,
        Dark_Yellow
    };

    enum hex_type { HEX_TYPE_RGB, HEX_TYPE_ARGB, HEX_TYPE_RGB_HASH, HEX_TYPE_ARGB_HASH };
    Color();
    Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 0xFF);
    Color(uint32_t color);
    Color(Colors color);
    Color(std::string hex);

    uint32_t color() const;
    uint8_t red() const;
    uint8_t green() const;
    uint8_t blue() const;
    uint8_t alpha() const;

    void set_color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 0xFF);
    void set_red(uint8_t color);
    void set_green(uint8_t color);
    void set_blue(uint8_t color);
    void set_alpha(uint8_t color);

    std::string to_hex(hex_type type = HEX_TYPE_ARGB_HASH) const;

    bool operator==(const Color& color) const;
    bool operator!=(const Color& color) const;

  private:
    uint32_t m_color;
};