
@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key_Landscape {

}

 - (id) backgroundTraitsForKeyplane:(id)a ;
 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)a forPopupForKey:(id)b withRenderConfig:(id)c keycapsFontName:(id)d ;
 - (id) thinKeycapsFontName;
 - (double) keyCornerRadius;
 - ({UIEdgeInsets=dddd}) topEdgeAdjustmentInsets;
 - (unsigned long long) edgesAdjustedForTranslucentGapsForGeometry:(id)a key:(id)b onKeyplane:(id)c ;
 - (double) controlColumnWidthFactor;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;


@end
