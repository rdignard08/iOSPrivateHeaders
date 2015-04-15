
@interface UIStatusBarItemView : UIView {

    d _currentOverlap;
    ^{CGContext=} _imageContext;
    d _imageContextScale;
    @"_UILegibilityView" _legibilityView;
    BOOL _visible;
    BOOL _allowsUpdates;
    @"UIStatusBarItem" _item;
    @"UIStatusBarLayoutManager" _layoutManager;
    @"UIStatusBarForegroundStyleAttributes" _foregroundStyle;
}
 + (id) createViewForItem:(id)awithData:(id)bactions:(i)cforegroundStyle:(id)d;

 - (id) item;
 - (id) description;
 - (void) dealloc;
 - (void) setContentMode:(q)a;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (void) willMoveToWindow:(id)a;
 - (q) textAlignment;
 - (id) imageWithShadowNamed:(id)a;
 - (id) foregroundStyle;
 - (void) beginImageContextWithMinimumWidth:(d)a;
 - (id) imageFromImageContextClippedToWidth:(d)a;
 - (void) endImageContext;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (q) legibilityStyle;
 - (void) setPersistentAnimationsEnabled:(BOOL)a;
 - (id) initWithItem:(id)adata:(id)bactions:(i)cstyle:(id)d;
 - (void) setAllowsUpdates:(BOOL)a;
 - (d) updateContentsAndWidth;
 - (BOOL) allowsUpdates;
 - (d) legibilityStrength;
 - (d) adjustFrameToNewSize:(d)a;
 - (void) setLayerContentsImage:(id)a;
 - (d) standardPadding;
 - (d) shadowPadding;
 - (void) endDisablingRasterization;
 - (void) setVisible:(BOOL)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})bduration:(d)c;
 - (void) setCurrentOverlap:(d)a;
 - (d) currentOverlap;
 - (d) currentLeftOverlap;
 - (d) currentRightOverlap;
 - (d) setStatusBarData:(id)aactions:(i)b;
 - (id) textFont;
 - (d) extraLeftPadding;
 - (d) extraRightPadding;
 - (d) resetContentOverlap;
 - (d) addContentOverlap:(d)a;
 - (d) maximumOverlap;
 - (BOOL) animatesDataChange;
 - (void) performPendedActions;
 - (id) imageWithText:(id)a;
 - (void) beginDisablingRasterization;
 - (id) layoutManager;
 - (void) setLayoutManager:(id)a;
 - (q) textStyle;
 - (void) setVisible:(BOOL)a;
 - (BOOL) isVisible;


@end
