#pragma once

// STL
#include <string_view>

#include <QColor>

// Colors, sizes etc that are NOT derived from system

// Color names
#define CNAME_BG_POPUP "LightYellow"
#define CNAME_LINK_POPUP "ForestGreen"
#define CNAME_LINK_DEPRECATED "#CC0000"
#define CNAME_LINK_OUTSIDE "#1565C0"        // Google blue 800
#define CNAME_U_COPY "#808080"
#define CNAME_U_BIGCOPY "rgba(128,128,128,45%)"


constexpr QColor FG_DEPRECATED { 0xDD, 0x00, 0x00 };
constexpr QColor BG_CJK { 0xFF, 0xF0, 0xF5 };   // lavenderblush
constexpr QColor TX_CJK { 0x75, 0x50, 0x7b };   // Tango medium violet
//constexpr QColor TX_CJK { 0x5C, 0x35, 0x66 };   // Tango dark violet

#define STYLE_LINK2(color1,color2,place) \
            "color:" color1 "; "   \
            "text-decoration:none; "      \
            "background:qlineargradient(x1:0, y1:1, x2:0, y2:0, " \
                    "stop:0 " color2 ", stop:" place " #00000000, stop:1 #00000000);"
#define STYLE_LINK(color,place)    STYLE_LINK2(color,color,place)
// Camouflaged link
#define STYLE_LINK_CAMO(color,place)    STYLE_LINK2("palette(window-text)",color,place)

#define STYLE_POPUP        STYLE_LINK(CNAME_LINK_POPUP, "0.05")
#define STYLE_DEPRECATED   STYLE_LINK(CNAME_LINK_DEPRECATED, "0.04")
#define STYLE_INET         STYLE_LINK(CNAME_LINK_OUTSIDE, "0.05")
#define STYLE_COPY         STYLE_LINK_CAMO(CNAME_U_COPY, "0.05")
#define STYLE_BIGCOPY      STYLE_LINK_CAMO(CNAME_U_BIGCOPY, "0.05")

#define STYLES_WIKI \
        ".copy { " STYLE_COPY " } "                                             \
        ".bigcopy { " STYLE_BIGCOPY " } "                                       \
        ".popup { " STYLE_POPUP " } "                                           \
        ".deprecated { " STYLE_DEPRECATED " } "                                 \
        ".inet { " STYLE_INET " } "                                             \
        ".missing { color: " CNAME_LINK_DEPRECATED "; } "

#ifdef _WIN32
    #define FAM_DEFAULT "Cambria"
    #define FAM_CONDENSED "Arial"
    #define FAM_EMOJI "Segoe UI Emoji"
#else
    #error Unknown OS
#endif

/// Alpha for space characters
constexpr int ALPHA_SPACE = 70;
