
@interface CIEnhancementCalculator : CIEnhancementCalculation {

    BOOL faceBalanceEnabled;
    BOOL vibranceEnabled;
    BOOL curvesEnabled;
    BOOL shadowsEnabled;
}

 - (void) dealloc;
 - (id) init;
 - (void) setFaceBalanceEnabled:(BOOL)a;
 - (void) setVibranceEnabled:(BOOL)a;
 - (void) setCurvesEnabled:(BOOL)a;
 - (void) setShadowsEnabled:(BOOL)a;
 - (BOOL) faceBalanceEnabled;
 - (void) setupFaceColorFromImage:(id)ausingContext:(id)bfeatures:(id)c;
 - (void) setupHistogramsUsing:(id)aredIndex:(int)bgreenIndex:(int)cblueIndex:(int)d;
 - (BOOL) vibranceEnabled;
 - (BOOL) curvesEnabled;
 - (BOOL) shadowsEnabled;
 - (void) analyzeFeatures:(id)ausingContext:(id)bbaseImage:(id)c;
 - (id) histogramFromRows:(id)acomponentOffset:(unsigned int)b;
 - (id) setupFaceColorFromImage:(id)ausingContext:(id)bdetectorOpts:(id)c;


@end
