static item internet[] = {
    { "n", "Nothing"                       },
    { "a", "AI (duck)"                     },
    { "d", "Duck"                          },
    { "g", "Google"                        },
    { "G", "Github"                        },
    { "m", "Gmail"                         },
    { "D", "Drive"                         },
    { "w", "WhastApp"                      },
    { "s", "Spotify"                       },
    { "y", "Youtube"                       },
    { "e", "Translate EN->ES"              },
    { "E", "Translate ES->EN"              },
};

static item firefoxNP[] = {
    { "n", "Normal",        SCRIPT_DSHORTCUTS("firefoxn"),      0,       internet,    LENGTH(internet),   1 },
    { "p", "Private",       SCRIPT_DSHORTCUTS("firefoxp"),      0,       internet,    LENGTH(internet),   1 },
};

static item libreWolfNP[] = {
    { "n", "Normal",        SCRIPT_DSHORTCUTS("librewolfn"),    0,       internet,    LENGTH(internet),   1 },
    { "p", "Private",       SCRIPT_DSHORTCUTS("librewolfp"),    0,       internet,    LENGTH(internet),   1 },
};

static item braveNP[] = {
    { "n", "Normal",        SCRIPT_DSHORTCUTS("braven"),        0,       internet,    LENGTH(internet),   1 },
    { "p", "Private",       SCRIPT_DSHORTCUTS("bravep"),        0,       internet,    LENGTH(internet),   1 },
};

static item sound[] = {
    { "j", "Decrement 10% Sound"           },
    { "k", "Increment 10% Sound"           },
    { "0", "Set Sound in 0%"               },
    { "1", "Set Sound in 10%"              },
    { "2", "Set Sound in 20%"              },
    { "3", "Set Sound in 30%"              },
    { "4", "Set Sound in 40%"              },
    { "5", "Set Sound in 50%"              },
    { "6", "Set Sound in 60%"              },
    { "7", "Set Sound in 70%"              },
    { "8", "Set Sound in 80%"              },
    { "9", "Set Sound in 90%"              },
    { "o", "Set Sound in 100%"             },
    { "m", "Mute sound"                    },
    { "u", "Unmute sound"                  },
};

static item brightness[] = {
    { "j", "Decrement 10% Brightness"      },
    { "k", "Increment 10% Brightness"      },
    { "1", "Set Brightness in 10%"         },
    { "2", "Set Brightness in 20%"         },
    { "3", "Set Brightness in 30%"         },
    { "4", "Set Brightness in 40%"         },
    { "5", "Set Brightness in 50%"         },
    { "6", "Set Brightness in 60%"         },
    { "7", "Set Brightness in 70%"         },
    { "8", "Set Brightness in 80%"         },
    { "9", "Set Brightness in 90%"         },
    { "o", "Set Brightness in 100%"        },
};

static item power[] = {
    { "p", "Power off"                     },
    { "r", "Reboot"                        },
    { "b", "Block"                         },
    { "s", "Suspend"                       },
    { "q", "Exit"                          },
};

static item machine[] = {
    { "s", "Sound",              SCRIPT_DSHORTCUTS("sound"),        1,   sound,        LENGTH(sound)             ,1 },
    { "b", "Brightness",         SCRIPT_DSHORTCUTS("brightness"),   1,   brightness,   LENGTH(brightness)        ,1 },
    { "B", "Bluetooth",          SCRIPT_DSHORTCUTS("bluetooth")},
    { "w", "WiFi",               SCRIPT_DSHORTCUTS("wifi")},
    { "c", "Camera",             SCRIPT_ROFI("camera")},
    { "m", "Microphone",         SCRIPT_ROFI("microphone")},
};

static item gap[] = {
    { "t", "Toggle",                       },
    { "s", "Smart toogle",                 },
    { "i", "Initial Default",              },
    { "j", "Increment",                    },
    { "J", "Decrement",                    },
    { "k", "Increment interiors",          },
    { "K", "Decrement interiors",          },
    { "u", "Increment exteriors",          },
    { "U", "Decrement exteriors",          },
    { "1", "Increment inside horizontal",  },
    { "2", "Decrement inside horizontal",  },
    { "3", "Increment inside vertical",    },
    { "4", "Decrement inside vertical",    },
    { "5", "Increment outside horizontal", },
    { "6", "Decrement outside horizontal", },
    { "7", "Increment outside vertical",   },
    { "8", "Decrement outside vertical",   },
};

static item border[] = {
    { "s", "Smart toogle Border",          },
    { "j", "Decrement Border",             },
    { "k", "Increment Border",             },
};

static item layout[] = {
	{ "t", "Tile"                          },
	{ "m", "Monocle"                       },
	{ "s", "Spiral"                        },
	{ "w", "Dwindle"                       },
	{ "d", "Deck"                          },
	{ "b", "Bstack"                        },
	{ "B", "Bstackhoriz"                   },
	{ "g", "Grid"                          },
	{ "r", "Nrowgrid"                      },
	{ "h", "Horizgrid"                     },
	{ "l", "Gaplessgrid"                   },
	{ "M", "Centeredmaster"                },
	{ "F", "Centeredfloatingmaster"        },
	{ "f", "Floating"                      },
};

static item dwm[] = {
    { "l", "Layout",             SCRIPT_DSHORTCUTS("layout"),       1,   layout,       LENGTH(layout)            ,1 },
    { "g", "Gap",                SCRIPT_DSHORTCUTS("gap"),          1,   gap,          LENGTH(gap)               ,1 },
    { "b", "Border",             SCRIPT_DSHORTCUTS("border"),       1,   border,       LENGTH(border)            ,1 },
};

static item toggle[] = {
    { "b", "Togglebar",                    },
    { "f", "Togglefloating"                },
    { "F", "Togglefullscr"                 },
    { "s", "Togglesticky"                  },
    { "g", "Togglesmartgaps"               },
    { "b", "Togglesmartborders"            },
    { "t", "Togglealttag"                  },
};

static item rotation[] = {
    { "r", "Right"                         },
    { "l", "Left"                          },
    { "n", "Normal"                        },
    { "i", "Inverted"                      },
};
