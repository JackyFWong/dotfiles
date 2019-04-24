static const char norm_fg[] = "#f1ffff";
static const char norm_bg[] = "#1d1d20";
static const char norm_border[] = "#34343a";

static const char sel_fg[] = "#f1ffff";
static const char sel_bg[] = "#69637d";
static const char sel_border[] = "#f1ffff";

static const char urg_fg[] = "#f1ffff";
static const char urg_bg[] = "#a66684";
static const char urg_border[] = "#a66684";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
