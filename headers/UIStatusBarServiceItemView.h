
@interface UIStatusBarServiceItemView : UIStatusBarItemView {

    NSString* _serviceString;
    NSString* _crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    double _letterSpacing;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (long long) legibilityStyle;
 - (double) updateContentsAndWidth;
 - (double) standardPadding;
 - (void) setVisible:(BOOL)a frame:({CGRect={CGPoint=dd}{CGSize=dd}})b duration:(double)c ;
 - (double) extraRightPadding;
 - (double) resetContentOverlap;
 - (double) addContentOverlap:(double)a ;
 - (BOOL) animatesDataChange;
 - (void) performPendedActions;
 - (BOOL) updateForContentType:(int)a serviceString:(id)b serviceCrossfadeString:(id)c maxWidth:(double)d actions:(int)e ;
 - (id) _cachedContentImageForString:(id)a withWidth:(double)b letterSpacing:(double)c ;
 - (void) _crossfadeStepAnimation;
 - (BOOL) _crossfaded;
 - (BOOL) _loopingNecessary;
 - (id) _contentsImageFromString:(id)a withWidth:(double)b letterSpacing:(double)c ;
 - (id) _crossfadeContentsImage;
 - (id) _serviceContentsImage;
 - (void) _loopAnimationDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) _finalAnimationDidStop:(id)a finished:(id)b context:(id)c ;


@end
