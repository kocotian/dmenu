/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=8:antialias=true:autohint=true",
	"JoyPixels:pixelsize=10:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm]   = { "#ebdbb2", "#000000" },
	[SchemeSel]    = { "#fffff7", "#222222" },
	[SchemePrpt]   = { "#fffff7", "#222222" },
	/* [SchemeNorm]   = { "#aaaaaa", "#000000" }, */
	/* [SchemeSel]    = { "#ffffff", "#222222" }, */
	/* [SchemePrpt]   = { "#ffffff", "#222222" }, */
	[SchemeLnNorm] = { "#222222", "#222222" },
	[SchemeLnSel]  = { "#98971a", "#98971a" },
	[SchemeOut]    = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 25;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
