const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a131f", /* black   */
  [1] = "#887C7D", /* red     */
  [2] = "#576475", /* green   */
  [3] = "#5C7289", /* yellow  */
  [4] = "#3D6083", /* blue    */
  [5] = "#6C6C76", /* magenta */
  [6] = "#758595", /* cyan    */
  [7] = "#c6c0c2", /* white   */

  /* 8 bright colors */
  [8]  = "#152a45",  /* black   */
  [9]  = "#c19094",  /* red     */
  [10] = "#6380a5", /* green   */
  [11] = "#6893c0", /* yellow  */
  [12] = "#427cb6", /* blue    */
  [13] = "#7d7da8", /* magenta */
  [14] = "#86acd2", /* cyan    */
  [15] = "#fffbfd", /* white   */

  /* special colors */
  [256] = "#0a131f", /* background */
  [257] = "#fffbfd", /* foreground */
  [258] = "#fffbfd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
