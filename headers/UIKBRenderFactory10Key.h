
@interface UIKBRenderFactory10Key : UIKBRenderFactory {

}
 + (BOOL) _isActiveKeyplaneSwitchKey:(id)a;

 - (id) controlKeyBackgroundColorName;
 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) displayContentsForKey:(id)a ;
 - (double) interkeyGapsCenterXOfKeyplaneFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({UIEdgeInsets=dddd}) topEdgeAdjustmentInsets;
 - (unsigned long long) edgesAdjustedForTranslucentGapsForGeometry:(id)a key:(id)b onKeyplane:(id)c ;
 - (double) numberPadKeyPrimarySymbolSize;
 - ({CGPoint=dd}) numberPadKeyPrimaryTextOffset;
 - ({CGPoint=dd}) numberPadVBarSecondaryTextOffset;
 - ({CGPoint=dd}) numberPadKeySecondaryTextOffset;
 - ({CGPoint=dd}) dictationKeyTextOffset;
 - ({CGPoint=dd}) globeKeyTextOffset;
 - ({CGPoint=dd}) abcKeyTextOffset;
 - (id) _preferredScriptFontForRendering:(int)a ;
 - (id) defaultKeyDividerColorName;
 - (id) controlKeyDividerColorName;
 - (id) controlKeyTraits;
 - (id) activeControlKeyTraits;
 - (id) shiftedControlKeyTraits;
 - (id) shiftedWhiteControlKeyTraits;
 - (long long) lightHighQualityEnabledBlendForm;
 - (id) controlKeyForegroundColorName;
 - (void) setupColumnLayoutSegmentsWithControlWidth:(double)a ;


@end
