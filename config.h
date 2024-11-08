/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [BACKGROUND] = "white",
	[INIT] =   "2d2d2d",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
 	[CAPS] = "red",         /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const int logosize = 50;
static const int logow = 18;   /* grid width and height for right center alignment*/
static const int logoh = 11;

static XRectangle rectangles[] = {
   /* x    y   w   h */
/* Default DWM Logo
   { 0,    3,  1,  3 },
   { 1,    3,  2,  1 },
   { 0,    5,  8,  1 },
   { 3,    0,  1,  5 },
   { 5,    3,  1,  2 },
   { 7,    3,  1,  2 },
   { 8,    3,  4,  1 },
   { 9,    4,  1,  2 },
   { 11,   4,  1,  2 },
*/
/*// Kr. PK Logo
   { 0,    3,  1,  5 },
   { 1,    5,  1,  1 },
   { 2,    4,  1,  1 },
   { 3,    3,  1,  1 },
   { 2,    6,  1,  1 },
   { 3,    7,  1,  1 },
   { 5,    4,  1,  4 },
   { 6,    4,  2,  1 },
   { 8,    7,  1,  1 },
   {10,    3,  1,  5 },
   {11,    3,  2,  1 },
   {12,    4,  1,  2 },
   {11,    5,  1,  1 },
   {14,    3,  1,  5 },
   {15,    5,  1,  1 },
   {16,    4,  1,  1 },
   {17,    3,  1,  1 },
   {16,    6,  1,  1 },
   {17,    7,  1,  1 },
};*/

// Kr. PJ Logo
   { 0,    3,  1,  5 },
   { 1,    5,  1,  1 },
   { 2,    4,  1,  1 },
   { 3,    3,  1,  1 },
   { 2,    6,  1,  1 },
   { 3,    7,  1,  1 },
   { 5,    4,  1,  4 },
   { 6,    4,  2,  1 },
   { 8,    7,  1,  1 },
   {10,    3,  1,  5 },
   {11,    3,  2,  1 },
   {12,    4,  1,  2 },
   {11,    5,  1,  1 },
   {14,    6,  1,  2 },
   {15,    7,  1,  1 },
   {16,    3,  1,  1 },
   {16,    3,  1,  5 },
};



/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
