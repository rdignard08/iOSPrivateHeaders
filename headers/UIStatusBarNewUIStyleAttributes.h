
@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

    @"UIColor" _backgroundColor;
    @"UIColor" _foregroundColor;
    BOOL _hasBusyBackground;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (Class) foregroundStyleClass;
 - (id) initWithRequest:(id)a;
 - (id) initWithRequest:(id)abackgroundColor:(id)bforegroundColor:(id)chasBusyBackground:(BOOL)d;
 - (id) initWithRequest:(id)abackgroundColor:(id)bforegroundColor:(id)c;
 - (q) legibilityStyle;
 - (BOOL) isTransparent;
 - (BOOL) shouldUseVisualAltitude;
 - (id) backgroundColorWithTintColor:(id)a;
 - (id) newForegroundStyleWithHeight:(d)a;


@end
