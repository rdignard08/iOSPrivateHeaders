
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone {

}

 - (id) _traitsForKey:(id)aonKeyplane:(id)b;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)aforPopupForKey:(id)bwithRenderConfig:(id)ckeycapsFontName:(id)d;
 - (BOOL) shouldClearBaseDisplayStringForVariants:(id)a;
 - (id) thinKeycapsFontName;
 - (d) keyCornerRadius;
 - (id) displayContentsForKey:(id)a;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (void) setupLayoutSegments;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;
 - (d) spaceKeyFontSize;
 - (d) deleteKeyFontSize;
 - (d) moreKeyFontSize;
 - (d) internationalKeyFontSize;
 - (d) dictationKeyFontSize;
 - (d) dismissKeyFontSize;
 - ({CGPoint=dd}) dismissKeyOffset;
 - (id) deleteKeyImageName;
 - (d) skinnyKeyThreshold;
 - (id) globalKeyImageName;
 - (id) dismissKeyImageName;
 - (id) dictationKeyImageName;
 - ({CGPoint=dd}) internationalKeyOffset;
 - ({CGPoint=dd}) dictationKeyOffset;
 - ({CGPoint=dd}) deleteKeyOffset;
 - (d) shiftKeyFontSize;
 - ({CGPoint=dd}) shiftKeyOffset;
 - (d) stringKeyFontSize;
 - (d) zhuyinFirstToneKeyFontSize;
 - (void) _customizeSymbolStyle:(id)aforKey:(id)bcontents:(id)c;
 - (void) _customizeGeometry:(id)aforKey:(id)bcontents:(id)c;
 - (void) _customizePopupTraits:(id)aforKey:(id)bonKeyplane:(id)c;
 - ({UIEdgeInsets=dddd}) variantDisplayFrameInsets;
 - ({UIEdgeInsets=dddd}) variantSymbolFrameInsets;
 - (q) rowLimitForKey:(id)a;
 - (id) variantGeometriesForGeometry:(id)avariantCount:(Q)browLimit:(q)c;
 - (d) _row4ControlSegmentWidth;
 - ({CGPoint=dd}) secondaryShiftKeyOffset;
 - (d) keyInsetBottom;
 - (d) symbolFrameInset;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) shiftKeySymbolFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) dismissKeySymbolFrame;
 - (d) returnKeySymbolFrameInset;
 - (d) fontSizeAdjustmentForNonAlphanumericKeycaps;
 - (d) dualStringKeyFontSizeAdjustment;
 - (d) bottomRowDefaultFontSize;
 - (d) fallbackFontSize;
 - (d) smallKanaKeyFontSize;
 - (d) emailDotKeyFontSize;
 - (d) facemarkKeyFontSize;
 - ({CGSize=dd}) defaultVariantGeometrySize;
 - (d) defaultVariantSizeThreshold;
 - ({CGPoint=dd}) dualStringKeyOffset;
 - (d) dualStringKeyMiddleMargin;
 - (d) defaultPathWeight;


@end
