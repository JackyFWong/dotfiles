const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d171c", /* black   */
  [1] = "#A79898", /* red     */
  [2] = "#D4AD99", /* green   */
  [3] = "#C2956F", /* yellow  */
  [4] = "#F2D7AD", /* blue    */
  [5] = "#927A86", /* magenta */
  [6] = "#6D8892", /* cyan    */
  [7] = "#c8dadc", /* white   */

  /* 8 bright colors */
  [8]  = "#392d36",  /* black   */
  [9]  = "#edb0b0",  /* red     */
  [10] = "#ffd9af", /* green   */
  [11] = "#ffc07c", /* yellow  */
  [12] = "#ffffbb", /* blue    */
  [13] = "#cf8dae", /* magenta */
  [14] = "#7db8ce", /* cyan    */
  [15] = "#f2ffff", /* white   */

  /* special colors */
  [256] = "#1d171c", /* background */
  [257] = "#f2ffff", /* foreground */
  [258] = "#f2ffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
