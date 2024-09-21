//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/         /*Update Interval*/ /*Update Signal*/
    {"",        "bar memory",       5,                  0},
    {"",        "bar cputemp",      5,                  0},
    {"",        "bar battery",      60,                 0},
    {"",        "bar network",      10,                 0},
    {"",        "bar date",         1,                  0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;