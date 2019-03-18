static const char norm_fg[] = "#ffffe9";
static const char norm_bg[] = "#09152D";
static const char norm_border[] = "#102857";

static const char sel_fg[] = "#ffffe9";
static const char sel_bg[] = "#586395";
static const char sel_border[] = "#ffffe9";

static const char urg_fg[] = "#ffffe9";
static const char urg_bg[] = "#7586A2";
static const char urg_border[] = "#7586A2";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
