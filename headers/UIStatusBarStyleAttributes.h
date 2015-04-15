
@interface UIStatusBarStyleAttributes : NSObject {

    UIStatusBarStyleRequest _request;
    UIStatusBarForegroundStyleAttributes _foregroundStyle;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (double) heightForOrientation:(long long)a;
 - (BOOL) isDoubleHeight;
 - (id) foregroundStyle;
 - (BOOL) shouldShowInternalItemType:(int)awithScreenCapabilities:(id)b;
 - (double) heightForMetrics:(long long)a;
 - (id) initWithRequest:(id)a;
 - (long long) legibilityStyle;
 - (BOOL) isTransparent;
 - (BOOL) shouldUseVisualAltitude;
 - (id) backgroundColorWithTintColor:(id)a;
 - (id) newForegroundStyleWithHeight:(double)a;
 - (BOOL) usesVerticalLayout;
 - (BOOL) supportsRasterization;
 - (int) cornerStyle;
 - (BOOL) areTopCornersRounded;
 - (id) backgroundImageName;
 - (double) foregroundAlpha;
 - (double) glowAnimationDuration;
 - (long long) tapButtonType;
 - (id) init;
 - (long long) style;
 - (long long) idiom;


@end
