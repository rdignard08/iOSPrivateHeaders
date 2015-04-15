
@interface UIKBRenderFactory10Key : UIKBRenderFactory {

}
 + (BOOL) _isActiveKeyplaneSwitchKey:(id)a;

 - (id) controlKeyBackgroundColorName;
 - (id) _traitsForKey:(id)aonKeyplane:(id)b;
 - (id) displayContentsForKey:(id)a;
 - (d) interkeyGapsCenterXOfKeyplaneFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({UIEdgeInsets=dddd}) topEdgeAdjustmentInsets;
 - (Q) edgesAdjustedForTranslucentGapsForGeometry:(id)akey:(id)bonKeyplane:(id)c;
 - (d) numberPadKeyPrimarySymbolSize;
 - ({CGPoint=dd}) numberPadKeyPrimaryTextOffset;
 - ({CGPoint=dd}) numberPadVBarSecondaryTextOffset;
 - ({CGPoint=dd}) numberPadKeySecondaryTextOffset;
 - ({CGPoint=dd}) dictationKeyTextOffset;
 - ({CGPoint=dd}) globeKeyTextOffset;
 - ({CGPoint=dd}) abcKeyTextOffset;
 - (id) _preferredScriptFontForRendering:(i)a;
 - (id) defaultKeyDividerColorName;
 - (id) controlKeyDividerColorName;
 - (id) controlKeyTraits;
 - (id) activeControlKeyTraits;
 - (id) shiftedControlKeyTraits;
 - (id) shiftedWhiteControlKeyTraits;
 - (q) lightHighQualityEnabledBlendForm;
 - (id) controlKeyForegroundColorName;
 - (void) setupColumnLayoutSegmentsWithControlWidth:(d)a;


@end
