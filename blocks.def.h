//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwmb-pa-volume",	30,		10},

	{"🧠 ", "free -h | awk '/^Pamięć/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"📦 ", "checkupdates | wc -l ",	60,		0},

	{"🌡 ", "dwmb-cpu-temp",					1,		0},

	{"🕓 ", "date '+%b %d (%a) %H:%M:%S%p'",					1,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ⟪ ";
static unsigned int delimLen = 5;
