
@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key {

}

 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)a forPopupForKey:(id)b withRenderConfig:(id)c keycapsFontName:(id)d ;
 - (id) thinKeycapsFontName;
 - (double) keyCornerRadius;
 - (double) controlColumnWidthFactor;
 - (void) setupLayoutSegments;
 - (double) spaceKeyFontSize;
 - (double) deleteKeyFontSize;
 - ({CGPoint=dd}) spaceReturnKeyTextOffset;
 - (double) moreKeyFontSize;
 - (double) internationalKeyFontSize;
 - (double) dictationKeyFontSize;
 - (double) dismissKeyFontSize;
 - ({CGPoint=dd}) dismissKeyOffset;


@end
