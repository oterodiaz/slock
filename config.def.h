/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#100D28",     /* after initialization */
	[INPUT] =  "#66347a",   /* during input */
	[FAILED] = "#721b2e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
 
/* time in seconds before the monitor shuts down */
static const int monitortime = 10;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "SF Pro Rounded:size:pixelsize=24:antialias=true:autohint=true";
