
@interface UIStatusBarItemView : UIView {

    double _currentOverlap;
    ^{CGContext=} _imageContext;
    double _imageContextScale;
    @"_UILegibilityView" _legibilityView;
    BOOL _visible;
    BOOL _allowsUpdates;
    @"UIStatusBarItem" _item;
    @"UIStatusBarLayoutManager" _layoutManager;
    @"UIStatusBarForegroundStyleAttributes" _foregroundStyle;
}
 + (id) createViewForItem:(id)awithData:(id)bactions:(int)cforegroundStyle:(id)d;

 - (id) item;
 - (id) description;
 - (void) dealloc;
 - (void) setContentMode:(long long)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) willMoveToWindow:(id)a;
 - (long long) textAlignment;
 - (id) imageWithShadowNamed:(id)a;
 - (id) foregroundStyle;
 - (void) beginImageContextWithMinimumWidth:(double)a;
 - (id) imageFromImageContextClippedToWidth:(double)a;
 - (void) endImageContext;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (long long) legibilityStyle;
 - (void) setPersistentAnimationsEnabled:(BOOL)a;
 - (id) initWithItem:(id)adata:(id)bactions:(int)cstyle:(id)d;
 - (void) setAllowsUpdates:(BOOL)a;
 - (double) updateContentsAndWidth;
 - (BOOL) allowsUpdates;
 - (double) legibilityStrength;
 - (double) adjustFrameToNewSize:(double)a;
 - (void) setLayerContentsImage:(id)a;
 - (double) standardPadding;
 - (double) shadowPadding;
 - (void) endDisablingRasterization;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(double)c;
 - (void) setCurrentOverlap:(double)a;
 - (double) currentOverlap;
 - (double) currentLeftOverlap;
 - (double) currentRightOverlap;
 - (double) setStatusBarData:(id)aactions:(int)b;
 - (id) textFont;
 - (double) extraLeftPadding;
 - (double) extraRightPadding;
 - (double) resetContentOverlap;
 - (double) addContentOverlap:(double)a;
 - (double) maximumOverlap;
 - (BOOL) animatesDataChange;
 - (void) performPendedActions;
 - (id) imageWithText:(id)a;
 - (void) beginDisablingRasterization;
 - (id) layoutManager;
 - (void) setLayoutManager:(id)a;
 - (long long) textStyle;
 - (void) setVisible:(BOOL)a;
 - (BOOL) isVisible;


@end
