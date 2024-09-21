//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/                     /*Update Interval*/ 	/*Update Signal*/
        {"",        	"bar mem",             			5,						0},
		{"",        	"bar temp", 					5,  					0},
        {"",        	"bar bat", 						60, 					0},
        {"",            "bar net",						5,  					0},
        {"",            "date '+%Y-%d-%m %T %Z'",       1,  					0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;