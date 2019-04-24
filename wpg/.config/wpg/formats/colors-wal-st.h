const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d1d20", /* black   */
  [1] = "#a66684", /* red     */
  [2] = "#69637d", /* green   */
  [3] = "#6981a7", /* yellow  */
  [4] = "#4274a9", /* blue    */
  [5] = "#ba79ad", /* magenta */
  [6] = "#79a1bf", /* cyan    */
  [7] = "#bedbf5", /* white   */

  /* 8 bright colors */
  [8]  = "#34343a",  /* black   */
  [9]  = "#e16fa5",  /* red     */
  [10] = "#796da9", /* green   */
  [11] = "#739ee3", /* yellow  */
  [12] = "#4391e2", /* blue    */
  [13] = "#fe85e4", /* magenta */
  [14] = "#85cdff", /* cyan    */
  [15] = "#f1ffff", /* white   */

  /* special colors */
  [256] = "#1d1d20", /* background */
  [257] = "#f1ffff", /* foreground */
  [258] = "#f1ffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
