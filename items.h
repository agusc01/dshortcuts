static item surf[] = {
    { "n", "Normal"                        },
    { "a", "AI"                            },
    { "s", "Spotify"                       },
    { "y", "Youtube"                       },
    { "e", "Translate EN->ES"              },
    { "E", "Translate ES->EN"              },
};

static item firefox[] = {
    { "n", "Nothing"                       },
    { "a", "AI (duck)"                     },
    { "d", "Duck"                          },
    { "g", "Google"                        },
    { "G", "Github"                        },
    { "m", "Gmail"                         },
    { "d", "Drive"                         },
    { "w", "WhastApp"                      },
    { "s", "Spotify"                       },
    { "y", "Youtube"                       },
    { "e", "Translate EN->ES"              },
    { "E", "Translate ES->EN"              },
};

static item firefoxNP[] = {
    { "n", "Normal",        SC("firefox-normal"),      0,       firefox,    LENGTH(firefox),   1 },
    { "p", "Private",       SC("firefox-private"),     0,       firefox,    LENGTH(firefox),   1 },
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
    { "q", "Exit"                          },
};

static item machine[] = {
    { "s", "Sound",              SC("sound"),        1,   sound,        LENGTH(sound)             ,1 },
    { "b", "Brightness",         SC("brightness"),   1,   brightness,   LENGTH(brightness)        ,1 },
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
    { "l", "Layout",             SC("layout"),       1,   layout,       LENGTH(layout)            ,1 },
    { "g", "Gap",                SC("gap"),          1,   gap,          LENGTH(gap)               ,1 },
    { "b", "Border",             SC("border"),       1,   border,       LENGTH(border)            ,1 },
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
