int bpinch_(integer *mxnd, integer *mln, integer *lnodes,real *xn, real *yn, integer *lxn, integer *nxl, real *angle, integer *n0, integer *n1, integer *n2, integer *nloop, real *toler1, real *toler2, logical *bok, logical *err);

int filsmo_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *lll, integer *nnn, integer *nnn2, integer *lnodes, real *bnsize, integer *nloop, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg, ftnlendev1_len);

int pltdrw_(real *x, real *y);

int ndstat_(integer *node, integer *lxn, real *angle,integer *jstat);

int match2_(integer *mxnd, integer *mln, real *xn, real *yn,integer *nxl, integer *lxn, integer *lnodes, real *angle, integer *n0,integer *n1, integer *n2, integer *n3, integer *n0test, integer *n1test, integer *n2test, integer *n3test, integer *i1, integer *i2,integer *j1, integer *j2, integer *kountl, logical *lmatch, integer *kount2, integer *node, real *u, real *w, integer *nloop, logical *pmatch, logical *err);

int pcross_(integer *mxnd, integer *mxcorn, integer *mln,integer *mxloop, integer *maxprm, integer *nuid, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, integer *lnodes, real *bnsize, integer *linkpr, integer *kperim, integer *node, integer *node1, integer *node2, integer *kkkold, integer *lllold, integer *nnnold, integer *iavail, integer *navail, logical *done, real *xmin, real *xmax, real *ymin, real *ymax,real *zmin, real *zmax, char *dev1, integer *lll, integer *kkk,integer *nnn, integer *lcorn, integer *ncorn, integer *nloop, integer*nextn1, integer *kloop, logical *graph, logical *video, integer *kreg, logical *noroom, logical *err, ftnlen dev1_len);

int close2_(integer *mxnd, integer *mln, integer *nuid, real*xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *lnodes, integer *iavail, integer *navail,integer *nnn, integer *lll, integer *n1, real *xmin, real *xmax, real*ymin, real *ymax, real *zmin, real *zmax, logical *pgraph, logical *video, char *dev1, integer *kreg, logical *noroom, logical *err,ftnlen dev1_len);

int tridel_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *nuid, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *nnn, integer *lll, integer *kkk, integer *navail, integer *iavail, real *angle, integer *lnodes, real *bnsize,integer *nloop, char *dev1, integer *kreg, real *xmin, real *xmax,real *ymin, real *ymax, real *zmin, real *zmax, logical *graph,logical *video, logical *noroom, logical *err, ftnlen dev1_len);

int qual3_(integer *mxnd, integer *mxcorn, integer *mln,integer *ncorn, integer *lcorn, integer *lnodes, integer *icomb, real*angle, integer *lxn, integer *itest, integer *ltest, real *qual,logical *posbl3, logical *posbl4, logical *err);

int mpmul4_(integer *n, integer *mask, real *arr1, real *arr2, real *arr3, real *arr4, real *mat, real *res1, real *res2, real*res3, real *res4);

int getrow_(integer *mxnd, integer *mxcorn, integer *mxpick,integer *mln, integer *nuid, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *lnodes, integer *ncorn, integer *lcorn, real *bnsize, real *angle, real *xn, real *yn, real *zn, integer *icomb,integer *itype, integer *nloop, integer *nbegin, integer *nend,integer *iavail, integer *navail, integer *lll, integer *kkk, integer*nnn, logical *graph, logical *video, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg,logical *sizeit, integer *nextpr, logical *noroom, logical *err,ftnlen dev1_len);

int addwdg_(integer *mxnd, integer *mln, integer *nuid, real*xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *lnodes, real *angle, real *bnsize, integer *nloop, integer *iavail, integer *navail, integer *lll, integer *kkk,integer *nnn, integer *lllold, integer *nnnold, real *tang, integer *kang, integer *nstart, integer *nend, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, logical *graph, logical *video, char *dev1, integer *kreg, logical *noroom, logical *err,ftnlen dev1_len);

int pltcv2_(integer *n, integer *mask, real *px, real *py,real *qx, real *qy, real *ppx, real *ppy, real *qqx, real *qqy, real *c1, real *c2);

int intsct_(real *x1, real *y1, real *x2, real *y2, real *x3,real *y3, real *x4, real *y4, real *u, real *w, logical *lcross);

int eqlang_(integer *mxnd, real *xn, real *yn, integer *lxn,integer *node, integer *n0, integer *n2, integer *nfrom, real *dist,real *vro, real *xdel, real *ydel);

int fndlnk_(integer *mxnd, integer *lxk, integer *nxl,integer *k, integer *n1, integer *n2, integer *l, logical *err);

int chrtrm_(char *line, integer *l, ftnlen line_len);

int getime_(real *time);

int setn02_(integer *mxnd, integer *nxl, integer *lxk,integer *kxl, integer *line, integer *nend, integer *node, integer *n0, integer *n2);

int periml_(integer *nbnode, integer *mxnd, integer *nper,integer *istart, integer *mln, real *xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *angle, real *bnsize, integer *lnodes, integer *lperim, integer *lll, integer *lllold, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin,real *zmax, char *dev1, integer *kreg, logical *err, ftnlen dev1_len);

int pltbel_();

int longel_(integer *mxnd, integer *mln, integer *lnodes,real *xn, real *yn, integer *nuid, integer *lxk, integer *kxl,integer *nxl, integer *lxn, integer *nnn, integer *navail, integer *iavail, integer *node, integer *kelem, real *ang, real *toler,integer *n1, integer *n2, integer *kreg, real *xmin, real *xmax, real*ymin, real *ymax, integer *kkk, integer *lll, logical *done, logical*graph, logical *video, logical *noroom, logical *err, integer *kkkadd);

int mpd2vc_(integer *n, real *x0, real *y0, real *x1, real *y1);

int pltrim_(char *line, integer *l, ftnlen line_len);

int extnd3_(integer *mxnd, real *xn, real *yn, real *angle,integer *n1, integer *n2, integer *n3, real *x, real *y, real *dist);

int siorpt_(char *module, char *mess, integer *disp, ftnlenmodule_len, ftnlen mess_len);

int setlop_(integer *mxnd, integer *mln, integer *nloop,integer *lnodes, integer *node, integer *ivalue, logical *err);

int lupang_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *nloop, real *angle, integer *lnodes, integer *nstart,integer *lll, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg, logical *err, ftnlendev1_len);

int invert_fq__(integer *mxnd, integer *mln, real *xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *lll, integer *lnodes, real *xmin, real *xmax, real *ymin,real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg,integer *node, real *xdel, real *ydel, ftnlen dev1_len);

int undelm_(integer *mxnd, integer *mln, integer *lnodes,real *xn, real *yn, integer *nuid, integer *lxk, integer *kxl,integer *nxl, integer *lxn, integer *nnn, integer *lll, integer *kkk,integer *navail, integer *iavail, integer *n0, integer *n1, integer *n2, integer *n3, integer *l1, integer *l2, integer *l3, integer *k1,integer *k2, logical *noroom, logical *err, logical *graph, logical *video);

int mpmul2_(integer *n, real *x0, real *y0, real *mat, real *res1, real *res2, real *res3, real *res4);

int node12_(integer *mxnd, integer *mln, integer *lnodes,integer *i1, integer *i2, integer *nloop1, integer *nloop2, integer *node1, integer *node2, integer *node, logical *err);

int getdum_(integer *i__, char *dummy, integer *len, ftnlendummy_len);

int pltvwp_(real *pll, real *pur, integer *n, integer *mask,real *px, real *py);

int chric_(integer *jin, char *ds, integer *nd, ftnlends_len);

int pltp2d_(real *x, real *y, real *xn, real *yn);

int addnod_(integer *mxnd, integer *mln, real *xn, real *yn,integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *angle,real *bnsize, integer *lnodes, real *xnew, real *ynew, real *dist,integer *nnn, integer *kkk, integer *lll, integer *n0, integer *n1,integer *n2, logical *ambig, integer *lambig, logical *sizeit,logical *err, logical *noroom, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg, real *bmesur, integer *mlink, integer *npnold, integer *npeold, integer *nnxk, real *remesh,real *rexmin, real *rexmax, real *reymin, real *reymax, integer *idivis, real *sizmin, real *emax, real *emin);

int add2cn_(integer *mxnd, integer *mln, real *xn, real *yn,integer *nuid, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, real *bnsize, integer *lnodes, integer *nnn, integer *kkk, integer *lll, integer *nnnold, integer *lllold, integer *nloop,integer *i1, integer *iavail, integer *navail, logical *graph,logical *video, logical *sizeit, logical *noroom, logical *err, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg,real *bmesur, integer *mlink, integer *npnold, integer *npeold,integer *nnxk, real *remesh, real *rexmin, real *rexmax, real *reymin,real *reymax, integer *idivis, real *sizmin, real *emax, real *emin);

int wedge_(integer *mxnd, integer *mln, integer *nuid,integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *xn,real *yn, integer *lnodes, real *bnsize, integer *iavail, integer *navail, integer *lll, integer *kkk, integer *nnn, integer *lllold,integer *nnnold, integer *n1, integer *n6, integer *nloop, logical *pwedge, logical *graph, logical *video, logical *noroom, logical *err);

int pltvwv_(real *pll, real *pur, integer *n, integer *mask,real *px, real *py, real *qx, real *qy);

int trifix_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *nuid, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *nnn, integer *lll, integer *kkk, integer *navail, integer *iavail, real *angle, integer *lnodes, real *bnsize,integer *nloop, char *dev1, integer *kreg, real *xmin, real *xmax,real *ymin, real *ymax, real *zmin, real *zmaxz, logical *graph,logical *video, logical *noroom, logical *err, ftnlen dev1_len);

int nxkord_(integer *nodes, integer *n1);

int sflush_();

int gkxn_(integer *mxnd, integer *kxl, integer *lxn, integer*n, integer *ks, integer *klist, logical *err);

int addlxn_(integer *mxnd, integer *lxn, integer *nuid,integer *navail, integer *iavail, integer *node, integer *line,integer *nnn, logical *err, logical *noroom);

int add1cn_(integer *mxnd, integer *mln, real *xn, real *yn,integer *nuid, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, real *bnsize, integer *lnodes, integer *nnn, integer *kkk, integer *lll, integer *nnnold, integer *lllold, integer *nloop,real *xnew, real *ynew, integer *i1, integer *iavail, integer *navail,logical *graph, logical *video, logical *sizeit, logical *noroom,logical *err, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg, real *bmesur, integer *mlink, integer *npnold, integer *npeold, integer *nnxk, real *remesh, real *rexmin,real *rexmax, real *reymin, real *reymax, integer *idivis, real *sizmin, real *emax, real *emin);

int lcolor_(char *color, ftnlen color_len);

int ch3to4_(integer *mxnd, integer *mxcorn, integer *mln,integer *ncorn, integer *lcorn, integer *lnodes, integer *icomb, real*angle, integer *itest, integer *ltest, real *qual, logical *posbl4,integer *ichang);

int close4_(integer *mxnd, integer *mln, integer *lxk,integer *kxl, integer *nxl, integer *lxn, integer *lnodes, integer *n0, integer *n1, integer *n2, integer *n3, integer *kkk, logical *err);

int getsiz_(real *xnold, real *ynold, integer *nxkold,integer *linkeg, integer *listeg, real *bmesur, integer *mlink,integer *npnold, integer *npeold, integer *nnxk, real *remesh, real *rexmin, real *rexmax, real *reymin, real *reymax, integer *idivis,real *sizmin, real *emax, real *emin, real *x, real *y, real *size);

int b4bad_(integer *mxnd, integer *mln, real *xn, real *yn,integer *lxk, integer *kxl, integer *nxl, integer *lxn, integer *lnodes, real *angle, integer *i1, integer *i2, integer *j1, integer *j2, integer *nloop, integer *kountl, logical *bok, logical *err);

int mesage_(char *prompt, ftnlen prompt_len);

int mxzero_(integer *n, real *mat);

int rowsmo_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *nnn, real *wfac, real *wfac2, integer *nit, real *eps, real *ro, integer *nnn2, integer *lnodes, real *bnsize, integer *lll,logical *graph, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg, ftnlen dev1_len);

int setcir_(integer *mxnd, integer *mln, integer *nloop,integer *lnodes, integer *node, logical *err);

int putlxn_(integer *mxnd, integer *nl, integer *lxn,integer *nuid, integer *node, integer *lines, integer *navail,integer *iavail, integer *nnn, logical *err, logical *noroom);

int cpudac_(char *ds, ftnlen ds_len);

int connod_(integer *mxnd, integer *mln, real *xn, real *yn,integer *nuid, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, integer *lnodes, integer *nnn, integer *kkk, integer *lll, integer *nnnold, integer *lllold, integer *n0, integer *n1,integer *n2, integer *node, integer *i__, integer *nloop, integer *iavail, integer *navail, logical *graph, logical *video, logical *noroom, logical *err);

int extnd1_(integer *mxnd, real *xn, real *yn, real *angle,integer *n1, integer *n2, integer *n3, real *x, real *y, real *dist);

int pltrsd_();

int snapit_(integer *i__);

int mnorm_(integer *mxnd, real *xn, real *yn, integer *nxl,integer *lll, real *stdlen);

int rplotl_(integer *mxnd, real *xn, real *yn, real *zn,integer *nxl, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, integer *lll, char *dev1, integer *kreg, ftnlendev1_len);

int add2nd_(integer *mxnd, integer *mln, real *xn, real *yn,integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *bnsize,integer *lnodes, real *x1, real *y1, real *x2, real *y2, real *dist1,real *dist2, integer *nnn, integer *lll, integer *kkk, integer *n1,integer *n2, integer *nloop, logical *sizeit, logical *err, logical *noroom, real *xnold, real *ynold, integer *nxkold, integer *linkeg,integer *listeg, real *bmesur, integer *mlink, integer *npnold,integer *npeold, integer *nnxk, real *remesh, real *rexmin, real *rexmax, real *reymin, real *reymax, integer *idivis, real *sizmin,real *emax, real *emin);

int getlxn_(integer *mxnd, integer *lxn, integer *node,integer *lines, integer *nl, logical *err);

int pltfrm_(integer *type__);

int sew2_(integer *mxnd, integer *mln, integer *nuid,integer *lxk, integer *kxl, integer *nxl, integer *lxn, integer *lnodes, integer *iavail, integer *navail, integer *lll, integer *kkk,integer *nnn, integer *i1, integer *i2, integer *j1, integer *j2,logical *noroom, logical *err);

int pltflu_();

int pltmov_(real *x, real *y);

int add2el_(integer *mxnd, integer *mln, real *xn, real *yn,integer *nuid, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, integer *lnodes, integer *nnn, integer *kkk, integer *lll, integer *nnnold, integer *lllold, integer *nloop, integer *i1,integer *i4, integer *iavail, integer *navail, logical *graph,logical *video, logical *noroom, logical *err);

int getfrm_(integer *mxnd, integer *lines, integer *nl,integer *nxl, integer *node, integer *n0, integer *n2, integer *nfrom);

int cntcrn_(integer *mxnd, integer *mxcorn, integer *mln,integer *lnodes, integer *lcorn, integer *ncorn, integer *nloop,integer *n1, logical *err);

int invmap_(real *x0, real *y0, real *x1, real *y1, real *x2,real *y2, real *x3, real *y3, real *x4, real *y4, real *sxi, real *seta, logical *inside);

int colaps_(integer *mxnd, integer *mxcorn, integer *mln,integer *mxloop, integer *nuid, real *xn, real *yn, real *zn, integer*lxk, integer *kxl, integer *nxl, integer *lxn, real *angle, integer *lnodes, real *bnsize, integer *node, integer *kkkold, integer *lllold,integer *nnnold, integer *iavail, integer *navail, logical *done,real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *lll, integer *kkk, integer *nnn, integer *lcorn, integer *ncorn, integer *nloop, integer *nextn1, integer *kloop, logical *graph, logical *video, integer *kreg, logical *noroom,logical *err, ftnlen dev1_len);

int dellxn_(integer *mxnd, integer *lxn, integer *nuid,integer *navail, integer *iavail, integer *node, integer *line,integer *nnn, logical *err, logical *noroom);

int adjrow_(integer *mxnd, integer *mln, integer *nuid, real*xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl,integer *lxn, real *angle, real *bnsize, integer *lnodes, integer *nloop, integer *iavail, integer *navail, real *xmin, real *xmax, real*ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *lll,integer *kkk, integer *nnn, integer *lllold, integer *nnnold, integer*node, integer *nadj1, integer *nadj2, integer *nnn2, logical *graph,logical *video, integer *kreg, real *defsiz, logical *adjted, logical*noroom, logical *err, ftnlen dev1_len);

int d2node_(integer *mxnd, real *xn, real *yn, integer *node1, integer *node2);

int keep3_(integer *itest, integer *ltest, integer *nbegin,integer *nend);

int gnxka_(integer *mxnd, real *xn, real *yn, integer *k,integer *nodes, real *area, integer *lxk, integer *nxl, logical *ccw);

int ringbl_();

int dlpara_(real *x1, real *y1, real *x2, real *y2, real *xm,real *b, logical *bad);

int extnd5_(integer *mxnd, real *xn, real *yn, real *angle,integer *n1, integer *n2, integer *n3, real *x, real *y, real *dist);

int nsplit_(integer *mxnd, integer *mln, integer *lnodes,real *angle, integer *nstart, integer *kang, integer *inode, integer *nnode, integer *nwant, logical *maxsiz);

int symbol_bl__(char *isytyp, real *varfac, integer *lenf,integer *nlnkf, logical *hidef, real *xf, real *yf, real *zf, logical*isvok, integer *blkcol, integer *idelb, ftnlen isytyp_len);

int pltbgn_();

int flmnmx_(integer *mxnd, integer *mln, integer *maxprm,integer *linkpr, integer *kperim, integer *lnodes, real *xn, real *yn,integer *nloop, integer *node, real *xmin, real *xmax, real *ymin,real *ymax, logical *err);

int ugrcol_(integer *indx, integer *blkcol);

int marksm_(integer *mxnd, integer *mln, integer *lxk,integer *kxl, integer *nxl, integer *lxn, integer *lnodes, integer *node, logical *err);

int qual2n_(integer *mxnd, integer *mxcorn, integer *mln,integer *ncorn, integer *lcorn, integer *lnodes, integer *icomb, real*bnsize, real *angle, integer *lxn, integer *itest, integer *ltest,real *qual, logical *posbl2, logical *posbl3, logical *rowchn,logical *sidpin, integer *istart, integer *iend, integer *ipinch,integer *npinch, logical *err);

int getcrn_(integer *mxnd, integer *mxcorn, integer *mln,integer *lnodes, integer *ncorn, integer *lcorn, real *angle, real *xn, real *yn, integer *lxn, integer *nloop, integer *n1, logical *onlyc, logical *pposbl, logical *graph, logical *err);

int addkxl_(integer *mxnd, integer *kxl, integer *k, integer*l);

int tuck_(integer *mxnd, integer *mln, integer *nuid, real *xn, real *yn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *lnodes, integer *iavail, integer *navail, integer *lll,integer *kkk, integer *nnn, integer *n1, integer *nloop, logical *graph, logical *noroom, logical *err);

int spaced_(integer *mxnd, integer *mxcorn, integer *mln,integer *ilen, integer *ncorn, integer *lcorn, integer *lnodes,integer *icomb, integer *itest, integer *ltest, logical *err);

int add3nd_(integer *mxnd, integer *mln, real *xn, real *yn,integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *bnsize,integer *lnodes, real *x, real *y, real *dist, integer *nnn, integer *lll, integer *kkk, integer *n1, integer *nloop, logical *sizeit,logical *err, logical *noroom, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg, real *bmesur, integer *mlink, integer *npnold, integer *npeold, integer *nnxk, real *remesh,real *rexmin, real *rexmax, real *reymin, real *reymax, integer *idivis, real *sizmin, real *emax, real *emin);

int pinch_(integer *mxnd, integer *mxcorn, integer *mln,integer *nuid, real *xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn, real *angle, integer *lnodes, real *bnsize, integer *node, integer *nloop, integer *kkkold, integer *lllold, integer *nnnold, integer *iavail, integer *navail, logical *done, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin,real *zmax, char *dev1, integer *lll, integer *kkk, integer *nnn,integer *lcorn, integer *ncorn, integer *nadj1, integer *nadj2,logical *graph, logical *video, integer *kreg, logical *noroom,logical *err, ftnlen dev1_len);

int paving_(integer *nbnode, integer *nprm, integer *mln,integer *iptper, integer *numper, integer *lperim, real *xn, real *yn,real *zn, integer *iexk, integer *inxe, integer *nnn, integer *lll,integer *kkk, integer *mxnd, real *angle, real *bnsize, integer *lnodes, integer *linkpr, integer *nperim, integer *lxk, integer *kxl,integer *nxl, integer *lxn, integer *nuid, integer *iavail, integer *navail, logical *graph, logical *timer, logical *video, real *defsiz,logical *sizeit, char *dev1, integer *kreg, logical *batch, logical *noroom, logical *err, real *amesur, real *xnold, real *ynold, integer*nxkold, integer *mmpold, integer *linkeg, integer *listeg, real *bmesur, integer *mlink, integer *nprold, integer *npnold, integer *npeold, integer *nnxk, logical *remesh, real *rexmin, real *rexmax,real *reymin, real *reymax, integer *idivis, real *sizmin, real *emax,real *emin, ftnlen dev1_len);

int pltlig_(real *x, real *y);

int viinit_(real *aspect, integer *justif);

int vdiqdc_0_(int n__, integer *index, real *value, real *xinch, real *yinch);

int vdiqdc_(integer *index, real *value);

int vdiqd9_(real *xinch, real *yinch);

int vberrh_(integer *errnum, integer *errsev);

int vdgnam_0_(int n__, char *name__, integer *koutfl,integer *koutff, integer *kk, ftnlen name_len);

int vdgnam_(char *name__, ftnlen name_len);

int pstofs_(integer *koutfl);

int pstcfs_(integer *koutff, integer *kk);

int vdinit_(real *aspect, integer *justif);

int vdiqnd_(real *xndc, real *yndc);

int vdiqos_(real *attarr);

int vdlina_(real *x, real *y);

int vdloge_(integer *errnum, integer *errsev);

int vdmoni_0_(int n__, integer *istate, char *c1, char *c2,ftnlen c1_len, ftnlen c2_len);

int vdmoni_(integer *istate);

int vbpkg_(char *c1, ftnlen c1_len);

int vbdev_(char *c2, ftnlen c2_len);

int vbiqpk_(char *c1, ftnlen c1_len);

int vbiqdv_(char *c2, ftnlen c2_len);

int vdmova_(real *x, real *y);

int vdnwpg_();

int vdpnta_(real *x, real *y);

int vdpoly_(real *xarray, real *yarray, integer *npts);

int vdstos_(real *attarr);

int vdterm_();

int vdtext_(integer *length, integer *chars);

int vdfram_(integer *itype);

int vifram_(integer *itype);

int vdaabu_(integer *btnnum);

int vdabgl_(integer *btnnum, real *x, real *y);

int vdakgl_(integer *char__, real *x, real *y);

int vdaloc_(real *x, real *y);

int vdbell_();

int vdbufl_();

int vdstla_(real *locx, real *locy);

int vdwait_();

int vdiqco_(integer *num, integer *index, real *clrary,integer *clrmod);

int vdiqcp_(real *x, real *y);

int vdstbc_(integer *color);

int vdstco_(integer *num, integer *index, real *clrary,integer *clrmod);

int vdstfc_(integer *color);

int vdstin_(real *inten);

int viterm_();

int vimova_(real *x, real *y);

int vipnta_(real *x, real *y);

int vipoly_(real *xarray, real *yarray, integer *npts);

int vinwpg_();

int vdescp_(integer *escpcd, integer *n, real *args);

int vilina_0_(int n__, real *x, real *y);

int vilina_(real *x, real *y);

int vblina_(real *x, real *y);

int vbvect_(integer *ipen, real *x, real *y);

int vitext_(integer *lengt1, integer *chars);

int vdstls_0_(int n__, integer *linsty);

int vdstls_(integer *linsty);

int vbstls_(integer *linsty);

int vdstcs_(real *ysize);

int vdstlw_(real *linwth);

int vdiqes_(integer *escpcd, integer *support);

int pstbuf_(integer *nchrs, char *out, ftnlen out_len);

int psta2c_(integer *asci, char *charac, ftnlen charac_len);

int psti2c_(integer *int__, integer *ndigit, char *istr,ftnlen istr_len);

int pstbbg_();

int pstjob_();

int pstsel_(char *karg, ftnlen karg_len);

int pstini_();

int addrow_(integer *mxnd, integer *mxcorn, integer *mxloop,integer *mln, integer *maxprm, integer *nuid, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,real *angle, real *bnsize, integer *lnodes, integer *nbegin, integer *nend, integer *nloop, integer *nextn1, integer *linkpr, integer *kperim, integer *kkkold, integer *lllold, integer *nnnold, integer *iavail, integer *navail, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *lll, integer *kkk,integer *nnn, integer *nnn2, integer *nadj1, integer *nadj2, integer *lcorn, integer *kloop, logical *graph, logical *video, integer *kreg,logical *done, logical *sizeit, logical *noroom, logical *err, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg,real *bmesur, integer *mlink, integer *npnold, integer *npeold,integer *nnxk, real *remesh, real *rexmin, real *rexmax, real *reymin,real *reymax, integer *idivis, real *sizmin, real *emax, real *emin,ftnlen dev1_len);

int vinter_(integer *mxnd, real *xn, real *yn, integer *n1,integer *n2, integer *n3, real *xold, real *yold, real *xnew, real *ynew, logical *vcross);

int close6_(integer *mxnd, integer *mxcorn, integer *mln,integer *nuid, real *xn, real *yn, integer *lxk, integer *kxl,integer *nxl, integer *lxn, real *angle, real *bnsize, integer *lnodes, integer *node, integer *nloop, integer *kkkold, integer *lllold, integer *nnnold, integer *navail, integer *iavail, real *done,real *xmin, real *xmax, real *ymin, real *ymax, char *dev1, integer *lll, integer *kkk, integer *nnn, integer *lcorn, integer *ncorn,logical *graph, logical *video, logical *sizeit, logical *noroom,logical *err, real *xnold, real *ynold, integer *nxkold, integer *linkeg, integer *listeg, real *bmesur, integer *mlink, integer *npnold, integer *npeold, integer *nnxk, real *remesh, real *rexmin,real *rexmax, real *reymin, real *reymax, integer *idivis, real *sizmin, real *emax, real *emin, ftnlen dev1_len);

int comsrt_(integer *mxnd, integer *mxcorn, integer *mxpick,integer *mln, integer *lnodes, integer *lcorn, integer *ncorn,integer *icomb, integer *itype, integer *npick);

int adjtri_(integer *mxnd, integer *mln, integer *lnodes,real *xn, real *yn, real *zn, integer *nuid, integer *lxk, integer *kxl, integer *nxl, integer *lxn, integer *nnn, integer *navail,integer *iavail, integer *node, integer *kelem, real *ang, real *toler1, real *toler2, integer *n1, integer *n2, integer *n3, integer *kreg, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin,real *zmax, integer *kkk, integer *lll, char *dev1, logical *done,logical *check, logical *graph, logical *video, logical *noroom,logical *err, integer *kkkadd, ftnlen dev1_len);

int pltvcm_(integer *n, integer *mask, real *xx0, real *yy0,real *xx1, real *yy1);

int pltxth_(real *x, real *y, char *text, ftnlen text_len);

int mxmult_(integer *n, real *mat1, real *mat2, real *matr);

int qual4_(integer *mxnd, integer *mxcorn, integer *mln,integer *ncorn, integer *lcorn, integer *lnodes, integer *icomb, real*angle, integer *lxn, integer *itest, integer *ltest, real *qual,logical *posbl4, logical *err);

int addtuk_(integer *mxnd, integer *mln, integer *nuid, real*xn, real *yn, real *zn, integer *lxk, integer *kxl, integer *nxl,integer *lxn, integer *lnodes, real *angle, integer *nloop, integer *iavail, integer *navail, integer *lll, integer *kkk, integer *nnn,real *tang, integer *kang, integer *nstart, integer *nend, integer *node, real *xmin, real *xmax, real *ymin, real *ymax, real *zmin,real *zmax, logical *graph, logical *video, char *dev1, logical *noroom, logical *err, ftnlen dev1_len);

int fixlxn_(integer *mxnd, integer *lxn, integer *nxl,integer *nuid, integer *navail, integer *iavail, integer *nnn,integer *lll, integer *nnnold, integer *lllold, logical *err, logical*noroom);

int delem_(integer *mxnd, real *xn, real *yn, integer *nuid,integer *lxk, integer *kxl, integer *nxl, integer *lxn, integer *nnn,integer *navail, integer *iavail, integer *node1, integer *k, integer*n2, integer *n4, logical *done, logical *check, logical *noroom,logical *err);

int getang_(integer *mxnd, integer *mln, real *xn, real *yn,integer *lnodes, integer *lxk, integer *kxl, integer *nxl, integer *lxn, integer *i__, integer *j, integer *k, real *angle, logical *err);

int bcross_(integer *mxnd, integer *mln, real *xn, real *yn,real *zn, integer *lxk, integer *kxl, integer *nxl, integer *lxn,integer *lnodes, integer *i1, integer *i2, integer *j1, integer *j2,integer *nloop, logical *bok, integer *lll, real *xmin, real *xmax,real *ymin, real *ymax, real *zmin, real *zmax, char *dev1, integer *kreg, logical *err, ftnlen dev1_len);

