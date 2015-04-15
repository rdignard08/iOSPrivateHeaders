
@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad {

}

 - (id) backgroundTraitsForKeyplane:(id)a;
 - (id) _traitsForKey:(id)aonKeyplane:(id)b;
 - (void) _customizeTraits:(id)aforPopupForKey:(id)bwithRenderConfig:(id)ckeycapsFontName:(id)d;
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
 - (void) _customizeSymbolStyle:(id)aforKey:(id)bcontents:(id)c;
 - (void) _customizeGeometry:(id)aforKey:(id)bcontents:(id)c;
 - (id) variantGeometriesForGeometry:(id)avariantCount:(unsigned long long)browLimit:(long long)c;
 - (double) keyInsetBottom;
 - (double) symbolFrameInset;
 - (double) defaultPathWeight;


@end
