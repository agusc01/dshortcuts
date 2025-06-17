static char background[]            = "#031D44"; /* global background */
static char keyfg[]                 = "#90CAF9"; /* key name foreground */
static char sepfg[]                 = "#FFFFFF"; /* separator foreground */
static char descfg[]                = "#42A5F5"; /* description foreground */
static char bordercol[]             = "#42A5F5"; /* border color */

static char *colors[SchemeLast][2] = {
	/*                 fg          bg       */
	[SchemeKey]    = { keyfg,      background }, /* fg for key */
	[SchemeTitle]  = { keyfg,      background }, /* fg for key */
	[SchemeSep]    = { sepfg,      background }, /* fg for separator (->) */
	[SchemeDesc]   = { descfg,     background }, /* fg for description */
	[SchemeBorder] = { background, bordercol  }, /* bg for border */
};
