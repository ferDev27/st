static const char *colorname[] = {

   	/* 8 normal colors */
       "#1D202F",
       "#f7768e",
       "#9ece6a",
       "#e0af68",
       "#7aa2f7",
       "#bb9af7",
       "#7dcfff",
       "#a9b1d6",
 
    /* 8 bright colors */
       "#4c547a",
       "#f7768e",
       "#9ece6a",
       "#e0af68",
       "#7aa2f7",
       "#bb9af7",
       "#7dcfff",
       "#c0caf5",
 
       [255] = 0,
 
       "#24283b", // 256 -> reverse cursor
       "#f5a97f", // 257 -> cursor
       "#c0caf5", // 258 -> foreground
       "#212230", // 259 -> background
 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
