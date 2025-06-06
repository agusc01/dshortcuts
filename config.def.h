/* See LICENSE file for copyright and license details. */
#define FONT "Ubuntu:size=12"

static const char font[]    = { FONT };
static const char *fonts[]  = { font };
static int topbar           = 1;         /* -b  option; if 0, dmenu appears at bottom     */
static char sep[]           = ":";       /* -s option; set the separator between key and text */
static char *maxkey         = "p";
static char background[]    = "#000000"; /* global background */
static char keyfg[]         = "#00ff00"; /* key name foreground */
static char sepfg[]         = "#ffffff"; /* separator foreground */
static char descfg[]        = "#ffffff"; /* description foreground */
static char bordercol[]     = "#ffffff"; /* border color */
static unsigned int backkey = XK_BackSpace;   /* backwards key */

static char *colors[SchemeLast][2] = {
	/*                 fg          bg       */
	[SchemeKey]    = { keyfg,      background }, /* fg for key */
	[SchemeTitle]  = { keyfg,      background }, /* fg for key */
	[SchemeSep]    = { sepfg,      background }, /* fg for separator (->) */
	[SchemeDesc]   = { descfg,     background }, /* fg for description */
	[SchemeBorder] = { background, bordercol  }, /* bg for border */
};

/* -c option, if nonzero dshortcuts will set this number of colums. If not, it's calculated */
static unsigned int columns        = 6;
static unsigned int colpadding     = 100;
static unsigned int outpaddinghor  = 25;
static unsigned int outpaddingvert = 15;
static unsigned int borderpx       = 2;

#define SCRIPT_DSHORTCUTS(path) "~/.bash_scripts/dshortcuts/" #path
#define SCRIPT_ROFI(path) "~/.bash_scripts/rofi/" #path

#include "items.h"

/* see keys.h to see the keynames */
/* keyname, text, script, childs */
/* parent items */
static item items[] = {
    /* keyname  description         path to script keep open?  childs      childs length       vertical   */
    { "s",    "Surf",               SCRIPT_DSHORTCUTS("surf"),         0,   internet,      LENGTH(internet)          ,1 },
    { "f",    "Firefox",            NULL,                              0,   firefoxNP,     LENGTH(firefoxNP)         ,1 },
    { "b",    "Brave",              NULL,                              0,   braveNP,       LENGTH(braveNP)           ,1 },
    { "l",    "LibreWolf",          NULL,                              0,   libreWolfNP,   LENGTH(libreWolfNP)       ,1 },
    { "q",    "QuteBrowser",        SCRIPT_DSHORTCUTS("qutebrowser"),  0,   internet,      LENGTH(internet)          ,1 },
    { "d",    "DWM",                NULL,                              0,   dwm,           LENGTH(dwm)               ,1 },
    { "m",    "Machine",            NULL,                              0,   machine,       LENGTH(machine)           ,1 },
    { "t",    "Toggle",             SCRIPT_DSHORTCUTS("toggle"),       0,   toggle,        LENGTH(toggle)            ,1 },
    { "r",    "Rotation",           SCRIPT_DSHORTCUTS("rotation"),     0,   rotation,      LENGTH(rotation)          ,0 },
    { "p",    "Power",              SCRIPT_DSHORTCUTS("power"),        0,   power,         LENGTH(power)             ,0 },
};

