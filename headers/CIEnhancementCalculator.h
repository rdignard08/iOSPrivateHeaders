
@interface CIEnhancementCalculator : CIEnhancementCalculation {

    BOOL faceBalanceEnabled;
    BOOL vibranceEnabled;
    BOOL curvesEnabled;
    BOOL shadowsEnabled;
}

 - (void) dealloc;
 - (id) init;
 - (void) setFaceBalanceEnabled:(BOOL)a ;
 - (void) setVibranceEnabled:(BOOL)a ;
 - (void) setCurvesEnabled:(BOOL)a ;
 - (void) setShadowsEnabled:(BOOL)a ;
 - (BOOL) faceBalanceEnabled;
 - (void) setupFaceColorFromImage:(id)a usingContext:(id)b features:(id)c ;
 - (void) setupHistogramsUsing:(id)a redIndex:(int)b greenIndex:(int)c blueIndex:(int)d ;
 - (BOOL) vibranceEnabled;
 - (BOOL) curvesEnabled;
 - (BOOL) shadowsEnabled;
 - (void) analyzeFeatures:(id)a usingContext:(id)b baseImage:(id)c ;
 - (id) histogramFromRows:(id)a componentOffset:(unsigned int)b ;
 - (id) setupFaceColorFromImage:(id)a usingContext:(id)b detectorOpts:(id)c ;


@end
