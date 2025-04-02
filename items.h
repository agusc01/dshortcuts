static item surf[] = {
    { "n", "normal"                     },
    { "a", "AI"                         },
    { "s", "spotify"                    },
    { "y", "youtube"                    },
    { "e", "translate EN->ES"           },
    { "E", "translate ES->EN"           },
};

static item firefox[] = {
    { "a", "AI (duck)"                  },
    { "d", "duck"                       },
    { "g", "google"                     },
    { "G", "github"                     },
    { "m", "gmail"                      },
    { "d", "drive"                      },
    { "w", "whastApp"                   },
    { "s", "spotify"                    },
    { "y", "youtube"                    },
    { "e", "translate EN->ES"           },
    { "E", "translate ES->EN"           },
};

static item firefoxNP[] = {
    { "n", "normal",        SC("firefox-normal"),      0,       firefox,    LENGTH(firefox),   1 },
    { "p", "private",       SC("firefox-private"),     0,       firefox,    LENGTH(firefox),   1 },
};

static item sound[] = {
    { "j", "Decrement 10% Sound"        },
    { "k", "Increment 10% Sound"        },
};

static item brightness[] = {
    { "j", "Decrement 10% Brightness"   },
    { "k", "Increment 10% Brightness"   },
};

static item power[] = {
    { "p", "Power off"                  },
    { "r", "Reboot"                     },
    { "b", "Block"                      },
    { "q", "Exit"                       },
};

static item layouts[] = {
	{ "t",      "tile"                  },
	{ "m",      "monocle"               },
	{ "s",      "spiral"                },
	{ "w",      "dwindle"               },
	{ "d",      "deck"                  },
	{ "b",      "bstack"                },
	{ "B",      "bstackhoriz"           },
	{ "g",      "grid"                  },
	{ "r",      "nrowgrid"              },
	{ "h",      "horizgrid"             },
	{ "l",      "gaplessgrid"           },
	{ "M",      "centeredmaster"        },
	{ "F",      "centeredfloatingmaster"},
	{ "f",      "floating"              },
};
