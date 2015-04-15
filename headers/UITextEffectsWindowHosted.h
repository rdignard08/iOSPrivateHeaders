
@interface UITextEffectsWindowHosted : UITextEffectsWindow {

}

 - (BOOL) _isWindowServerHostingManaged;
 - (BOOL) _isConstrainedByScreenJail;
 - (BOOL) _usesWindowServerHitTesting;
 - (BOOL) _isRotatedByScreenJail;
 - (BOOL) _isScaledByScreenJail;
 - (BOOL) _isOffsetByScreenJail;
 - (BOOL) _isClippedByScreenJail;


@end
