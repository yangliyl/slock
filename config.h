/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#444444",   /* during input */
	[FAILED] = "#FFC125",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.95;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
