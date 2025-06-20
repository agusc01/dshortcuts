/* See LICENSE file for copyright and license details. */
#define DESKTOP_CONFIG 1                        /* 1 means desktop, 0 means laptop */
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#if DESKTOP_CONFIG
    #define FONT_SIZE 22
    #define FONT "Ubuntu:size=" TOSTRING(FONT_SIZE)
    static const char font[]             = { FONT };
    static const char *fonts[]           = { font };
    static int topbar                    = 1;            /* -b  option; if 0, dmenu appears at bottom     */
    static char sep[]                    = ":";          /* -s option; set the separator between key and text */
    static char *maxkey                  = "p";
    static unsigned int backkey          = XK_BackSpace; /* backwards key */
    static const unsigned int cornerrad  = 25;
    /* -c option, if nonzero dshortcuts will set this number of colums. If not, it's calculated */
    static unsigned int columns          = 2;
    static unsigned int colpadding       = 50;
    static unsigned int outpaddinghor    = 20;
    static unsigned int outpaddingvert   = 20;
    static unsigned int borderpx         = 0;
    static int centered                  = 1;            /* -C option; centers dmenu on screen */
    static int min_width                 = 700;          /* minimum width when centered */
    static const float menu_height_ratio = 3.0f;         /* This is the ratio used in the original calculation */
#else
    #define FONT_SIZE 20
    #define FONT "Ubuntu:size=" TOSTRING(FONT_SIZE)
    static const char font[]             = { FONT };
    static const char *fonts[]           = { font };
    static int topbar                    = 1;            /* -b  option; if 0, dmenu appears at bottom     */
    static char sep[]                    = ":";          /* -s option; set the separator between key and text */
    static char *maxkey                  = "p";
    static unsigned int backkey          = XK_BackSpace; /* backwards key */
    static const unsigned int cornerrad  = 25;
    /* -c option, if nonzero dshortcuts will set this number of colums. If not, it's calculated */
    static unsigned int columns          = 2;
    static unsigned int colpadding       = 50;
    static unsigned int outpaddinghor    = 20;
    static unsigned int outpaddingvert   = 20;
    static unsigned int borderpx         = 0;
    static int centered                  = 1;            /* -C option; centers dmenu on screen */
    static int min_width                 = 700;          /* minimum width when centered */
    static const float menu_height_ratio = 5.0f;         /* This is the ratio used in the original calculation */
#endif

#define SCRIPT_DSHORTCUTS(path) "~/.bash_scripts/dshortcuts/" #path
#define SCRIPT_ROFI(path) "~/.bash_scripts/rofi/" #path
#include "colors.h"
#include "items.h"

/* see keys.h to see the keynames */
/* keyname, text, script, childs */
/* parent items */
static item items[] = {
    /* keyname  description         path to script keep open?  childs      childs length       vertical   */
    // { "s",    "Surf",               SCRIPT_DSHORTCUTS("surf"),         0,   internet,      LENGTH(internet)          ,1 },
    { "f",    "Firefox",            NULL,                              0,   firefoxNP,     LENGTH(firefoxNP)         ,1 },
    { "l",    "LibreWolf",          NULL,                              0,   libreWolfNP,   LENGTH(libreWolfNP)       ,1 },
    { "b",    "Brave",              NULL,                              0,   braveNP,       LENGTH(braveNP)           ,1 },
    { "c",    "Chrome",             NULL,                              0,   chromeNP,      LENGTH(chromeNP)          ,1 },
    { "q",    "QuteBrowser",        SCRIPT_DSHORTCUTS("qutebrowser"),  0,   internet,      LENGTH(internet)          ,1 },
    { "v",    "Vieb",               SCRIPT_DSHORTCUTS("vieb"),         0,   internet,      LENGTH(internet)          ,1 },
    { "d",    "DWM",                NULL,                              0,   dwm,           LENGTH(dwm)               ,1 },
    { "m",    "Machine",            NULL,                              0,   machine,       LENGTH(machine)           ,1 },
    { "t",    "Toggle",             SCRIPT_DSHORTCUTS("toggle"),       0,   toggle,        LENGTH(toggle)            ,1 },
    { "r",    "Rotation",           SCRIPT_DSHORTCUTS("rotation"),     0,   rotation,      LENGTH(rotation)          ,1 },
    { "p",    "Power",              SCRIPT_DSHORTCUTS("power"),        0,   power,         LENGTH(power)             ,1 },
};

