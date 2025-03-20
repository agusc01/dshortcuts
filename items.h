static item process[] = {
    { "h", "htop"           },
    { "b", "btop"           },
    { "t", "top"            },
};

static item edit[] = {
    { "m", "dmenu"          },
    { "w", "dwm"            },
    { "b", "dbar"           },
    { "s", "dshortcuts"     },
    { "t", "st"             },
    { "l", "slock"          },
};

static item internet[] = {
    { "i", "internet"       },
    { "o", "private"        },
    { "p", "AI (private)"   },
};

static item power[] = {
    { "p", "Power off"      },
    { "r", "Reboot"         },
    { "b", "Block"          },
    { "q", "Exit"           },
};

static item sound[] = {
    { "j", "Decrement 10% Sound" },
    { "k", "Increment 10% Sound" },
};

static item brightness[] = {
    { "j", "Decrement 10% Brightness" },
    { "k", "Increment 10% Brightness" },
};

// static item sound[] = {
//     { "p", "AI (private)"   },
// }
//
// static item settings[] = {
//     { "s", "sound"          , SC("sound") , 0 , sound , LENGTH(sound)},
//     { "b", "brightness"     },
// }
//
// static item ratoli[] = {
//     { "d", "Dreta"    },
//     { "e", "Esquerra" },
// };
// static item monitors[] = {
//     { "p", "Portàtil"         },
//     { "m", "HDMI"             },
//     { "d", "Doble (eDP-HDMI)" },
//     { "D", "Doble (HDMI-eDP)" },
//     { "a", "Altres (arandr)"  },
// };
// static item audio[] = {
//     { "m", "Mixer",                 },
//     { "1", "I/O: Analog",           },
//     { "2", "O: HDMI 2, I: Analog",  },
// };
// static item record[] = {
//     { "s", "screencast", "dm-ffrecord screencast" },
//     { "v", "video",      "dm-ffrecord video"      },
//     { "a", "audio",      "dm-ffrecord audio"      },
//     { "k", "kill",       "dm-ffrecord kill"       },
// };
// static item music[] = {
//     { "␣", ""   },
//     { "n", ""   },
//     { "p", ""   },
//     { "b", ""   },
//     { "o", "O"   },
//     { "x", "X"   },
// };
// static item power[] = {
//     { "a", "Atura"    },
//     { "r", "Reinicia" },
//     { "b", "Bloqueja" },
//     { "q", "Hiberna"  },
//     { "s", "Suspèn"   },
//     { "x", "Surt"     },
// };
// static item emacs[] = {
//     { "e", "Emacs"    },
//     { "f", "Elfeed" },
//     { "m", "mu4e" },
// };
// static item dwm_gaps[] = {
//     { "0", "Toggle",          },
//     { "s", "Smart toogle",    },
//     { "d", "Predeterminat",   },
//     { "u", "Incrementa",      },
//     { "U", "Decrementa",      },
//     { "i", "Inc interiors",   },
//     { "I", "Dec interiors",   },
//     { "o", "Inc exteriors",   },
//     { "O", "Dec exteriors",   },
//     { "1", "Inc int hor",     },
//     { "2", "Dec int hor",     },
//     { "3", "Inc int vert",    },
//     { "4", "Dec int vert",    },
//     { "5", "Inc ext hor",     },
//     { "6", "Dec ext hor",     },
//     { "7", "Inc ext vert",    },
//     { "8", "Dec ext vert",    },
// };
// static item dwm_borders[] = {
//     { "s", "Smart toogle", },
//     { "-", "Decrementa",   },
//     { "+", "Incrementa",   },
// };
// static item dwm[] = {
//     { "b", "Borders", NULL, 1, dwm_borders, LENGTH(dwm_borders) },
//     { "g", "Gaps",    NULL, 1, dwm_gaps,    LENGTH(dwm_gaps)    },
// };
// static item launch[] = {
//     { "d", "Fitxers (dbrowse)" },
//     { "t", "Telegram"          },
// };
// static item cron[] = {
//     { "m", "Email",          "$HOME/sc/cron/mail.sh &"  },
//     { "d", "Drive",          "$HOME/sc/cron/drive.sh &" },
// };
// // static item config[] = {
// //     { "r", "Ratolí",         SC("config/mouse"),       0, ratoli,      LENGTH(ratoli)     },
// //     { "m", "Monitors",       SC("config/monitors"),    0, monitors,    LENGTH(monitors)   },
// //     { "a", "Audio",          SC("config/audio"),       0, audio,       LENGTH(audio)      },
// //     { "w", "Wallpaper",      "setwallpaper"                                               },
// //     { "W", "Tria wallpaper", "nsxiv /usr/share/wallpapers"                                },
// //     { "t", "Tema",           "dm-color"                                                   },
// // };
//
// static item toggle[] = {
//     { "a", "xautolock" },
//     { "k", "screenkey" },
//     { "b", "bluetooth" },
//     { "c", "cups"      },
//     { "s", "ssh"       },
//     { "t", "xcompmgr"  },
//     { "w", "wallpaper" },
//     { "i", "internet"  },
// };
// static item tabbed[] = {
//     {"#", "XDOTOOL"           },
//     {"c", "Crea"              },
//     {"a", "Afegeix"           },
//     {"d", "Elimina principal" },
//     {"#", "DMENU"             },
//     {"C", "Crea"              },
//     {"A", "Afegeix"           },
//     {"D", "Elimina principal" },
//     {"x", "Elimina totes" },
// };
