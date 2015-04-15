
@interface UIStatusBarServiceItemView : UIStatusBarItemView {

    @"NSString" _serviceString;
    @"NSString" _crossfadeString;
    Q _crossfadeStep;
    d _maxWidth;
    d _serviceWidth;
    d _crossfadeWidth;
    i _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    d _letterSpacing;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (q) legibilityStyle;
 - (d) updateContentsAndWidth;
 - (d) standardPadding;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(d)c;
 - (d) extraRightPadding;
 - (d) resetContentOverlap;
 - (d) addContentOverlap:(d)a;
 - (BOOL) animatesDataChange;
 - (void) performPendedActions;
 - (BOOL) updateForContentType:(i)aserviceString:(id)bserviceCrossfadeString:(id)cmaxWidth:(d)dactions:(i)e;
 - (id) _cachedContentImageForString:(id)awithWidth:(d)bletterSpacing:(d)c;
 - (void) _crossfadeStepAnimation;
 - (BOOL) _crossfaded;
 - (BOOL) _loopingNecessary;
 - (id) _contentsImageFromString:(id)awithWidth:(d)bletterSpacing:(d)c;
 - (id) _crossfadeContentsImage;
 - (id) _serviceContentsImage;
 - (void) _loopAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) _finalAnimationDidStop:(id)afinished:(id)bcontext:(id)c;


@end
