static const char norm_fg[] = "#fffbfd";
static const char norm_bg[] = "#0a131f";
static const char norm_border[] = "#152a45";

static const char sel_fg[] = "#fffbfd";
static const char sel_bg[] = "#576475";
static const char sel_border[] = "#fffbfd";

static const char urg_fg[] = "#fffbfd";
static const char urg_bg[] = "#887C7D";
static const char urg_border[] = "#887C7D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
