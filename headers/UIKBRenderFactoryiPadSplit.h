
@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad {

}

 - (id) backgroundTraitsForKeyplane:(id)a ;
 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (void) _customizeTraits:(id)a forPopupForKey:(id)b withRenderConfig:(id)c keycapsFontName:(id)d ;
 - (double) keyCornerRadius;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;
 - ({CGPoint=dd}) dismissKeyOffset;
 - (id) deleteKeyImageName;
 - (double) skinnyKeyThreshold;
 - (id) globalEmojiKeyImageName;
 - (id) globalKeyImageName;
 - (id) dismissKeyImageName;
 - (id) dictationKeyImageName;
 - ({CGPoint=dd}) deleteKeyOffset;
 - ({CGPoint=dd}) shiftKeyOffset;
 - (void) _customizeSymbolStyle:(id)a forKey:(id)b contents:(id)c ;
 - (void) _customizeGeometry:(id)a forKey:(id)b contents:(id)c ;
 - (id) variantGeometriesForGeometry:(id)a variantCount:(unsigned long long)b rowLimit:(long long)c ;
 - (double) keyInsetBottom;
 - (double) symbolFrameInset;
 - (double) defaultPathWeight;


@end
