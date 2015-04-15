
@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

    UIColor* _backgroundColor;
    UIColor* _foregroundColor;
    BOOL _hasBusyBackground;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (Class) foregroundStyleClass;
 - (id) initWithRequest:(id)a ;
 - (id) initWithRequest:(id)a backgroundColor:(id)b foregroundColor:(id)c hasBusyBackground:(BOOL)d ;
 - (id) initWithRequest:(id)a backgroundColor:(id)b foregroundColor:(id)c ;
 - (long long) legibilityStyle;
 - (BOOL) isTransparent;
 - (BOOL) shouldUseVisualAltitude;
 - (id) backgroundColorWithTintColor:(id)a ;
 - (id) newForegroundStyleWithHeight:(double)a ;


@end
