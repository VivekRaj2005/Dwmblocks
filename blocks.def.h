//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {" ⚡ ", "$HOME/.local/bin/battery",          30,                 2},
    {" 🐧 ", "$HOME/.local/bin/kernel",		    3600,		        2},
	{" ⏫ ", "$HOME/.local/bin/upt",		    60,		            2},
	{" 📤 ", "$HOME/.local/bin/pacupdate",		3600,		        9},	
    {" 🔥 ", "$HOME/.local/bin/temp",		    5,		            2},
	{" 📟 ", "$HOME/.local/bin/memory",	        6,		            1},
	{" 🔊 ", "$HOME/.local/bin/volume",			2,		            10},
	{" 🕑 ", "$HOME/.local/bin/clock",			60,		            2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
