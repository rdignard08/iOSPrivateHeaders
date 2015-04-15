
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone {

}

 - (id) _traitsForKey:(id)aonKeyplane:(id)b;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)aforPopupForKey:(id)bwithRenderConfig:(id)ckeycapsFontName:(id)d;
 - (BOOL) shouldClearBaseDisplayStringForVariants:(id)a;
 - (id) thinKeycapsFontName;
 - (double) keyCornerRadius;
 - (id) displayContentsForKey:(id)a;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (void) setupLayoutSegments;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;
 - (double) spaceKeyFontSize;
 - (double) deleteKeyFontSize;
 - (double) moreKeyFontSize;
 - (double) internationalKeyFontSize;
 - (double) dictationKeyFontSize;
 - (double) dismissKeyFontSize;
 - ({CGPoint=dd}) dismissKeyOffset;
 - (id) deleteKeyImageName;
 - (double) skinnyKeyThreshold;
 - (id) globalKeyImageName;
 - (id) dismissKeyImageName;
 - (id) dictationKeyImageName;
 - ({CGPoint=dd}) internationalKeyOffset;
 - ({CGPoint=dd}) dictationKeyOffset;
 - ({CGPoint=dd}) deleteKeyOffset;
 - (double) shiftKeyFontSize;
 - ({CGPoint=dd}) shiftKeyOffset;
 - (double) stringKeyFontSize;
 - (double) zhuyinFirstToneKeyFontSize;
 - (void) _customizeSymbolStyle:(id)aforKey:(id)bcontents:(id)c;
 - (void) _customizeGeometry:(id)aforKey:(id)bcontents:(id)c;
 - (void) _customizePopupTraits:(id)aforKey:(id)bonKeyplane:(id)c;
 - ({UIEdgeInsets=dddd}) variantDisplayFrameInsets;
 - ({UIEdgeInsets=dddd}) variantSymbolFrameInsets;
 - (long long) rowLimitForKey:(id)a;
 - (id) variantGeometriesForGeometry:(id)avariantCount:(unsigned long long)browLimit:(long long)c;
 - (double) _row4ControlSegmentWidth;
 - ({CGPoint=dd}) secondaryShiftKeyOffset;
 - (double) keyInsetBottom;
 - (double) symbolFrameInset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) shiftKeySymbolFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) dismissKeySymbolFrame;
 - (double) returnKeySymbolFrameInset;
 - (double) fontSizeAdjustmentForNonAlphanumericKeycaps;
 - (double) dualStringKeyFontSizeAdjustment;
 - (double) bottomRowDefaultFontSize;
 - (double) fallbackFontSize;
 - (double) smallKanaKeyFontSize;
 - (double) emailDotKeyFontSize;
 - (double) facemarkKeyFontSize;
 - ({CGSize=dd}) defaultVariantGeometrySize;
 - (double) defaultVariantSizeThreshold;
 - ({CGPoint=dd}) dualStringKeyOffset;
 - (double) dualStringKeyMiddleMargin;
 - (double) defaultPathWeight;


@end
