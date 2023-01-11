static const char *colorname[] = {

        "#15161e", // Black
        "#f7768e", // Red
        "#9ece6a", // Green
        "#e0af68", // Yellow
        "#7aa2f7", // Blue
        "#bb9af7", // Magenta
        "#7dcfff", // Cyan
        "#a9b1d6", // White

        "#414868", // Bright Black
        "#f7768e", // Bright Red
        "#9ece6a", // Bright Green
        "#e0af68", // Bright Yellow
        "#7aa2f7", // Bright Blue
        "#bb9af7", // Bright Magenta
        "#7dcfff", // Bright Cyan
        "#c0caf5", // Bright White
 
       [255] = 0,
 
       "#24283b", // 256 -> reverse cursor
       "#c0caf5", // 257 -> cursor
       "#c0caf5", // 258 -> foreground
       "#171821", // 259 -> background
 };
 
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
