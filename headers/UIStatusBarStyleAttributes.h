
@interface UIStatusBarStyleAttributes : NSObject {

    @"UIStatusBarStyleRequest" _request;
    @"UIStatusBarForegroundStyleAttributes" _foregroundStyle;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (d) heightForOrientation:(q)a;
 - (BOOL) isDoubleHeight;
 - (id) foregroundStyle;
 - (BOOL) shouldShowInternalItemType:(i)awithScreenCapabilities:(id)b;
 - (d) heightForMetrics:(q)a;
 - (id) initWithRequest:(id)a;
 - (q) legibilityStyle;
 - (BOOL) isTransparent;
 - (BOOL) shouldUseVisualAltitude;
 - (id) backgroundColorWithTintColor:(id)a;
 - (id) newForegroundStyleWithHeight:(d)a;
 - (BOOL) usesVerticalLayout;
 - (BOOL) supportsRasterization;
 - (i) cornerStyle;
 - (BOOL) areTopCornersRounded;
 - (id) backgroundImageName;
 - (d) foregroundAlpha;
 - (d) glowAnimationDuration;
 - (q) tapButtonType;
 - (id) init;
 - (q) style;
 - (q) idiom;


@end
