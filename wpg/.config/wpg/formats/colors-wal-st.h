const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e131e", /* black   */
  [1] = "#9d7f82", /* red     */
  [2] = "#2f537b", /* green   */
  [3] = "#625d6e", /* yellow  */
  [4] = "#386998", /* blue    */
  [5] = "#6376a1", /* magenta */
  [6] = "#7b90bd", /* cyan    */
  [7] = "#cec9d5", /* white   */

  /* 8 bright colors */
  [8]  = "#1d2840",  /* black   */
  [9]  = "#da9096",  /* red     */
  [10] = "#3068a6", /* green   */
  [11] = "#786998", /* yellow  */
  [12] = "#3985ce", /* blue    */
  [13] = "#6d8fde", /* magenta */
  [14] = "#89b0ff", /* cyan    */
  [15] = "#fffaff", /* white   */

  /* special colors */
  [256] = "#0e131e", /* background */
  [257] = "#fffaff", /* foreground */
  [258] = "#fffaff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
