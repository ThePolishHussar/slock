/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =	"white",
	[INIT] =	"#928374",
	[INPUT] =	"458588",
	[FAILED] =	"#cc241d",
	[CAPS] =	"#d79921",
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 0;
/* length of time (seconds) until [command] is executed */
static int timeoffset = 30;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "/usr/bin/xset dpms force off";

/* time in seconds to cancel lock with mouse movement */
static int timetocancel = 5;

static int logosize = 30;
static const int logow = 12; /* Grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
    {0, 3, 1, 3},
    {1, 3, 2, 1},
    {0, 5, 8, 1},
    {3, 0, 1, 5},
    {5, 3, 1, 2},
    {7, 3, 1, 2},
    {8, 3, 4, 1},
    {9, 4, 1, 2},
    {11,4, 1, 2},
};

/*Set blur radius*/
static int blurRadius=5;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "initcolor",	STRING,		&colorname[INIT] },
		{ "inputcolor",	STRING,		&colorname[INPUT] },
		{ "failcolor",	STRING,		&colorname[FAILED] },
		{ "capscolor",	STRING,		&colorname[CAPS] },
		{ "blurradius", INTEGER,	&blurRadius },
		{ "canceltime",	INTEGER,	&timetocancel },
		{ "logosize",	INTEGER,	&logosize },
		{ "timeout",	INTEGER,	&timeoffset },
};
