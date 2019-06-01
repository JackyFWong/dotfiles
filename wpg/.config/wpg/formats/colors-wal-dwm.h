static const char norm_fg[] = "#f2ffff";
static const char norm_bg[] = "#1d171c";
static const char norm_border[] = "#392d36";

static const char sel_fg[] = "#f2ffff";
static const char sel_bg[] = "#D4AD99";
static const char sel_border[] = "#f2ffff";

static const char urg_fg[] = "#f2ffff";
static const char urg_bg[] = "#A79898";
static const char urg_border[] = "#A79898";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
