static const char norm_fg[] = "#efffff";
static const char norm_bg[] = "#0C192C";
static const char norm_border[] = "#162f53";

static const char sel_fg[] = "#efffff";
static const char sel_bg[] = "#9BB6D0";
static const char sel_border[] = "#efffff";

static const char urg_fg[] = "#efffff";
static const char urg_bg[] = "#CEB7A2";
static const char urg_border[] = "#CEB7A2";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
