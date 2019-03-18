const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#09152D", /* black   */
  [1] = "#7586A2", /* red     */
  [2] = "#586395", /* green   */
  [3] = "#E7CD6D", /* yellow  */
  [4] = "#2E59A7", /* blue    */
  [5] = "#A4A095", /* magenta */
  [6] = "#3A65B3", /* cyan    */
  [7] = "#efe8ca", /* white   */

  /* 8 bright colors */
  [8]  = "#102857",  /* black   */
  [9]  = "#86a9e4",  /* red     */
  [10] = "#6376d1", /* green   */
  [11] = "#ffff77", /* yellow  */
  [12] = "#2d6fe7", /* blue    */
  [13] = "#e9d9ad", /* magenta */
  [14] = "#3b7ef8", /* cyan    */
  [15] = "#ffffe9", /* white   */

  /* special colors */
  [256] = "#09152D", /* background */
  [257] = "#ffffe9", /* foreground */
  [258] = "#ffffe9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
