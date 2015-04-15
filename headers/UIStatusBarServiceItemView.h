
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
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (long long) legibilityStyle;
 - (double) updateContentsAndWidth;
 - (double) standardPadding;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(double)c;
 - (double) extraRightPadding;
 - (double) resetContentOverlap;
 - (double) addContentOverlap:(double)a;
 - (BOOL) animatesDataChange;
 - (void) performPendedActions;
 - (BOOL) updateForContentType:(int)aserviceString:(id)bserviceCrossfadeString:(id)cmaxWidth:(double)dactions:(int)e;
 - (id) _cachedContentImageForString:(id)awithWidth:(double)bletterSpacing:(double)c;
 - (void) _crossfadeStepAnimation;
 - (BOOL) _crossfaded;
 - (BOOL) _loopingNecessary;
 - (id) _contentsImageFromString:(id)awithWidth:(double)bletterSpacing:(double)c;
 - (id) _crossfadeContentsImage;
 - (id) _serviceContentsImage;
 - (void) _loopAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _finalAnimationDidStop:(id)afinished:(id)bcontext:(id)c;


@end
