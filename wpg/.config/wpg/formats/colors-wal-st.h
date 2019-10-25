const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C192C", /* black   */
  [1] = "#CEB7A2", /* red     */
  [2] = "#9BB6D0", /* green   */
  [3] = "#E3D0AF", /* yellow  */
  [4] = "#6790A7", /* blue    */
  [5] = "#9C9DA4", /* magenta */
  [6] = "#69B6D1", /* cyan    */
  [7] = "#ccdbe7", /* white   */

  /* 8 bright colors */
  [8]  = "#162f53",  /* black   */
  [9]  = "#ffecba",  /* red     */
  [10] = "#b1edff", /* green   */
  [11] = "#ffffc4", /* yellow  */
  [12] = "#74c0ea", /* blue    */
  [13] = "#b6bce9", /* magenta */
  [14] = "#74f6ff", /* cyan    */
  [15] = "#efffff", /* white   */

  /* special colors */
  [256] = "#0C192C", /* background */
  [257] = "#efffff", /* foreground */
  [258] = "#efffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
