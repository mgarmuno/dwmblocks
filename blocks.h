//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "python /home/magneto/.config/mscripts/spotify.py", 1, 0}, 
	{" ", "top -b -n1 | grep 'Cpu(s)' | awk '{print $2 + $4}'", 2, 0},
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "/home/magneto/.config/mscripts/weather.sh 'granada,spain'", 60, 0}, 
	{"", "wpctl get-volume @DEFAULT_AUDIO_SINK@", 1, 0},
	{"", "date '+%d-%m-%Y %H:%M'",  5, 0},
	{"   ", "",  5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
