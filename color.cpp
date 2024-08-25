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
#include "color.hpp"

Color::Color() : m_color(0) {
}

Color::Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
    : Color((red << 24) | (green << 16) | (blue << 8) | alpha) {
}
Color::Color(uint32_t color) : m_color(color) {
}

Color::Color(std::string hex) {
    if (hex.length() == 6) {
        hex = hex + "FF";
    }
    m_color = (uint32_t)std::stoul(hex, nullptr, 16);
}

Color::Color(Colors color) {
    switch (color) {
        case Colors::Aquamarine:
            set_color(0x70, 0xDB, 0x93);
            break;
            case Colors::Baker_s_Chocolate:
                set_color(0x5C, 0x33, 0x17);
            break;
            case Colors::Black:
                set_color(0x00, 0x00, 0x00);
            break;
            case Colors::Blue:
                set_color(0x00, 0x00, 0xFF);
            break;
            case Colors::Blue_Violet:
                set_color(0x9F, 0x5F, 0x9F);
            break;
            case Colors::Brass:
                set_color(0xB5, 0xA6, 0x42);
            break;
            case Colors::Bright_Gold:
                set_color(0xD9, 0xD9, 0x19);
            break;
            case Colors::Brown:
                set_color(0xA6, 0x2A, 0x2A);
            break;
            case Colors::Bronze:
                set_color(0x8C, 0x78, 0x53);
            break;
            case Colors::Bronze_II:
                set_color(0xA6, 0x7D, 0x3D);
            break;
            case Colors::Cadet_Blue:
                set_color(0x5F, 0x9F, 0x9F);
            break;
            case Colors::Cool_Copper:
                set_color(0xD9, 0x87, 0x19);
            break;
            case Colors::Copper:
                set_color(0xB8, 0x73, 0x33);
            break;
            case Colors::Coral:
                set_color(0xFF, 0x7F, 0x00);
            break;
            case Colors::Corn_Flower_Blue:
                set_color(0x42, 0x42, 0x6F);
            break;
            case Colors::Cyan:
                set_color(0x00, 0xFF, 0xFF);
            break;
            case Colors::Dark_Brown:
                set_color(0x5C, 0x40, 0x33);
            break;
            case Colors::Dark_Green:
                set_color(0x2F, 0x4F, 0x2F);
            break;
            case Colors::Dark_Green_Copper:
                set_color(0x4A, 0x76, 0x6E);
            break;
            case Colors::Dark_Olive_Green:
                set_color(0x4F, 0x4F, 0x2F);
            break;
            case Colors::Dark_Orchid:
                set_color(0x99, 0x32, 0xCD);
            break;
            case Colors::Dark_Purple:
                set_color(0x87, 0x1F, 0x78);
            break;
            case Colors::Dark_Slate_Blue:
                set_color(0x6B, 0x23, 0x8E);
            break;
            case Colors::Dark_Slate_Grey:
                set_color(0x2F, 0x4F, 0x4F);
            break;
            case Colors::Dark_Tan:
                set_color(0x97, 0x69, 0x4F);
            break;
            case Colors::Dark_Turquoise:
                set_color(0x70, 0x93, 0xDB);
            break;
            case Colors::Dark_Wood:
                set_color(0x85, 0x5E, 0x42);
            break;
            case Colors::Dim_Grey:
                set_color(0x54, 0x54, 0x54);
            break;
            case Colors::Dusty_Rose:
                set_color(0x85, 0x63, 0x63);
            break;
            case Colors::Feldspar:
                set_color(0xD1, 0x92, 0x75);
            break;
            case Colors::Firebrick:
                set_color(0x8E, 0x23, 0x23);
            break;
            case Colors::Forest_Green:
                set_color(0x23, 0x8E, 0x23);
            break;
            case Colors::Gold:
                set_color(0xCD, 0x7F, 0x32);
            break;
            case Colors::Goldenrod:
                set_color(0xDB, 0xDB, 0x70);
            break;
            case Colors::Grey:
                set_color(0xC0, 0xC0, 0xC0);
            break;
            case Colors::Green:
                set_color(0x00, 0xFF, 0x00);
            break;
            case Colors::Green_Copper:
                set_color(0x52, 0x7F, 0x76);
            break;
            case Colors::Green_Yellow:
                set_color(0x93, 0xDB, 0x70);
            break;
            case Colors::Hunter_Green:
                set_color(0x21, 0x5E, 0x21);
            break;
            case Colors::Indian_Red:
                set_color(0x4E, 0x2F, 0x2F);
            break;
            case Colors::Khaki:
                set_color(0x9F, 0x9F, 0x5F);
            break;
            case Colors::Light_Blue:
                set_color(0xC0, 0xD9, 0xD9);
            break;
            case Colors::Light_Grey:
                set_color(0xA8, 0xA8, 0xA8);
            break;
            case Colors::Light_Steel_Blue:
                set_color(0x8F, 0x8F, 0xBD);
            break;
            case Colors::Light_Wood:
                set_color(0xE9, 0xC2, 0xA6);
            break;
            case Colors::Lime_Green:
                set_color(0x32, 0xCD, 0x32);
            break;
            case Colors::Magenta:
                set_color(0xFF, 0x00, 0xFF);
            break;
            case Colors::Mandarian_Orange:
                set_color(0xE4, 0x78, 0x33);
            break;
            case Colors::Maroon:
                set_color(0x8E, 0x23, 0x6B);
            break;
            case Colors::Medium_Aquamarine:
                set_color(0x32, 0xCD, 0x99);
            break;
            case Colors::Medium_Blue:
                set_color(0x32, 0x32, 0xCD);
            break;
            case Colors::Medium_Forest_Green:
                set_color(0x6B, 0x8E, 0x23);
            break;
            case Colors::Medium_Goldenrod:
                set_color(0xEA, 0xEA, 0xAE);
            break;
            case Colors::Medium_Orchid:
                set_color(0x93, 0x70, 0xDB);
            break;
            case Colors::Medium_Seagreen:
                set_color(0x42, 0x6F, 0x42);
            break;
            case Colors::Medium_Slate_Blue:
                set_color(0x7F, 0x00, 0xFF);
            break;
            case Colors::Medium_Spring_Green:
                set_color(0x7F, 0xFF, 0x00);
            break;
            case Colors::Medium_Turquoise:
                set_color(0x70, 0xDB, 0xDB);
            break;
            case Colors::Medium_Violet_Red:
                set_color(0xDB, 0x70, 0x93);
            break;
            case Colors::Medium_Wood:
                set_color(0xA6, 0x80, 0x64);
            break;
            case Colors::Midnight_Blue:
                set_color(0x2F, 0x2F, 0x4F);
            break;
            case Colors::Navy_Blue:
                set_color(0x23, 0x23, 0x8E);
            break;
            case Colors::Neon_Blue:
                set_color(0x4D, 0x4D, 0xFF);
            break;
            case Colors::Neon_Pink:
                set_color(0xFF, 0x6E, 0xC7);
            break;
            case Colors::New_Midnight_Blue:
                set_color(0x00, 0x00, 0x9C);
            break;
            case Colors::New_Tan:
                set_color(0xEB, 0xC7, 0x9E);
            break;
            case Colors::Old_Gold:
                set_color(0xCF, 0xB5, 0x3B);
            break;
            case Colors::Orange:
                set_color(0xFF, 0x7F, 0x00);
            break;
            case Colors::Orange_Red:
                set_color(0xFF, 0x24, 0x00);
            break;
            case Colors::Orchid:
                set_color(0xDB, 0x70, 0xDB);
            break;
            case Colors::Pale_Green:
                set_color(0x8F, 0xBC, 0x8F);
            break;
            case Colors::Pink:
                set_color(0xBC, 0x8F, 0x8F);
            break;
            case Colors::Plum:
                set_color(0xEA, 0xAD, 0xEA);
            break;
            case Colors::Quartz:
                set_color(0xD9, 0xD9, 0xF3);
            break;
            case Colors::Red:
                set_color(0xFF, 0x00, 0x00);
            break;
            case Colors::Rich_Blue:
                set_color(0x59, 0x59, 0xAB);
            break;
            case Colors::Salmon:
                set_color(0x6F, 0x42, 0x42);
            break;
            case Colors::Scarlet:
                set_color(0x8C, 0x17, 0x17);
            break;
            case Colors::Sea_Green:
                set_color(0x23, 0x8E, 0x68);
            break;
            case Colors::Semi_Sweet_Chocolate:
                set_color(0x6B, 0x42, 0x26);
            break;
            case Colors::Sienna:
                set_color(0x8E, 0x6B, 0x23);
            break;
            case Colors::Silver:
                set_color(0xE6, 0xE8, 0xFA);
            break;
            case Colors::Sky_Blue:
                set_color(0x32, 0x99, 0xCC);
            break;
            case Colors::Slate_Blue:
                set_color(0x00, 0x7F, 0xFF);
            break;
            case Colors::Spicy_Pink:
                set_color(0xFF, 0x1C, 0xAE);
            break;
            case Colors::Spring_Green:
                set_color(0x00, 0xFF, 0x7F);
            break;
            case Colors::Steel_Blue:
                set_color(0x23, 0x6B, 0x8E);
            break;
            case Colors::Summer_Sky:
                set_color(0x38, 0xB0, 0xDE);
            break;
            case Colors::Tan:
                set_color(0xDB, 0x93, 0x70);
            break;
            case Colors::Thistle:
                set_color(0xD8, 0xBF, 0xD8);
            break;
            case Colors::Turquoise:
                set_color(0xAD, 0xEA, 0xEA);
            break;
            case Colors::Very_Dark_Brown:
                set_color(0x5C, 0x40, 0x33);
            break;
            case Colors::Very_Light_Grey:
                set_color(0xCD, 0xCD, 0xCD);
            break;
            case Colors::Violet:
                set_color(0x4F, 0x2F, 0x4F);
            break;
            case Colors::Violet_Red:
                set_color(0xCC, 0x32, 0x99);
            break;
            case Colors::Wheat:
                set_color(0xD8, 0xD8, 0xBF);
            break;
            case Colors::White:
                set_color(0xFF, 0xFF, 0xFF);
            break;
            case Colors::Yellow:
                set_color(0xFF, 0xFF, 0x00);
            break;
            case Colors::Yellow_Green:
                set_color(0x99, 0xCC, 0x32);
            break;
            case Colors::Dark_Yellow:
                set_color(0x99, 0xCC, 0x32);
            break;
    }
}

uint32_t Color::color() const {
    return m_color;
}

uint8_t Color::red() const {
    return (uint8_t)((m_color >> 16) & 0xFF);
}

uint8_t Color::green() const {
    return (uint8_t)((m_color >> 8) & 0xFF);
}

uint8_t Color::blue() const {
    return m_color & 0xFF;
}

uint8_t Color::alpha() const {
    return (uint8_t)((m_color >> 24) & 0xFF);
}

void Color::set_color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
    this->m_color = (alpha << 24) | (red << 16) | (green << 8) | blue;
}

void Color::set_red(uint8_t color) {
    m_color = (color << 16) | (m_color & 0xFF00FFFF);
}

void Color::set_green(uint8_t color) {
     m_color = (color << 8) | (m_color & 0xFFFF00FF);
}

void Color::set_blue(uint8_t color) {
    m_color = color | (m_color & 0xFFFFFF00);
}

void Color::set_alpha(uint8_t color) {
    m_color = (color << 24) | (m_color & 0x00FFFFFF);
}

std::string Color::to_hex(hex_type type) const {
    char buffer[11];
    if (type == HEX_TYPE_RGB) {
        snprintf(buffer, 11, "#%06X", m_color & 0xFFFFFF);
    } else {
        snprintf(buffer, 11, "#%08X", m_color);
    }
    return std::string(buffer);
}

bool Color::operator==(const Color &color) const {
    return m_color == color.m_color;
}

bool Color::operator!=(const Color &color) const {
    return m_color != color.m_color;
}