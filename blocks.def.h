//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"Disk:", "/home/magneto/.local/bin/dwmblocks/dwmb-disk", 60, 0},
	{"Bat:", "/home/magneto/.local/bin/dwmblocks/dwmb-battery2", 10, },
	//{"Net:", "/home/magneto/.local/bin/dwmblocks/dwmb-internet", 0, 1},
	{"Vol:", "/home/magneto/.local/bin/dwmblocks/dwmb-volume", 1, 0},
	{"", "/home/magneto/.local/bin/dwmblocks/dwmb-date",  5, 0},
	{"", "dwm -v", 360, 0},
	{"   ", "",  5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
