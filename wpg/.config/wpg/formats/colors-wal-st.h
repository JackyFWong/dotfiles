const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0C1117", /* black   */
  [1] = "#2B8DB7", /* red     */
  [2] = "#517692", /* green   */
  [3] = "#5AADC8", /* yellow  */
  [4] = "#206B97", /* blue    */
  [5] = "#5591B0", /* magenta */
  [6] = "#2CA6CA", /* cyan    */
  [7] = "#add9e0", /* white   */

  /* 8 bright colors */
  [8]  = "#1c2938",  /* black   */
  [9]  = "#29bdfc",  /* red     */
  [10] = "#5a9bcc", /* green   */
  [11] = "#62eaff", /* yellow  */
  [12] = "#1d8ed0", /* blue    */
  [13] = "#5dc1f5", /* magenta */
  [14] = "#29e0ff", /* cyan    */
  [15] = "#deffff", /* white   */

  /* special colors */
  [256] = "#0C1117", /* background */
  [257] = "#deffff", /* foreground */
  [258] = "#deffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
