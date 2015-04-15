
@protocol NSSecureCoding, NSCopying;
@interface UIColor : NSObject <NSSecureCoding, NSCopying> {

    NSString _systemColorName;
}
@property (nonatomic, assign, readonly) NSNumber* CGColor;
@property (nonatomic, assign, readonly) CIColor* CIColor;
@property (nonatomic, retain, readwrite, getter=_systemColorName, setter=_setSystemColorName:) NSString* systemColorName;
 + (BOOL) supportsSecureCoding;
 + (id) classFallbacksForKeyedArchiver;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) grayColor;
 + (id) lightGrayColor;
 + (id) darkGrayColor;
 + (id) greenColor;
 + (id) cyanColor;
 + (id) magentaColor;
 + (id) yellowColor;
 + (id) orangeColor;
 + (id) purpleColor;
 + (id) tableCellDefaultSelectionTintColor;
 + (id) _alternateSystemInteractionTintColor;
 + (id) systemDarkRedColor;
 + (id) systemGreenColor;
 + (id) systemDarkGreenColor;
 + (id) systemDarkBlueColor;
 + (id) systemOrangeColor;
 + (id) systemDarkOrangeColor;
 + (id) systemTealColor;
 + (id) systemDarkTealColor;
 + (id) systemPinkColor;
 + (id) systemDarkPinkColor;
 + (id) _systemColorWithName:(id)a;
 + (id) _externalSystemDarkGrayColor;
 + (id) _externalBarBackgroundColor;
 + (id) _externalSystemWhiteColor;
 + (id) _accessibilityButtonShapesBackgroundColorOnLight;
 + (id) _accessibilityButtonShapesBackgroundColorOnDark;
 + (id) _accessibilityButtonShapesDisabledBackgroundColorOnDark;
 + (id) _accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
 + (id) _accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
 + (id) _externalSystemExtraDarkGrayColor;
 + (id) groupTableViewBackgroundColor;
 + (id) tableBackgroundColor;
 + (id) tableSeparatorLightColor;
 + (id) tableSeparatorDarkColor;
 + (id) tableGroupedSeparatorLightColor;
 + (id) tableCellbackgroundColorPigglyWiggly;
 + (id) tableCellBackgroundColor;
 + (id) _alternateUISwitchableSelectorPairs;
 + (id) systemGrayColor;
 + (id) systemYellowColor;
 + (id) _composedColorFromSourceColor:(id)adestinationColor:(id)btintColor:(id)calpha:(double)d;
 + (id) insertionPointColor;
 + (id) selectionHighlightColor;
 + (id) __halfTransparentBlackColor;
 + (id) __halfTransparentWhiteColor;
 + (id) tableCellGroupedBackgroundColorLegacyWhite;
 + (double) _luminanceWithRed:(double)agreen:(double)bblue:(double)c;
 + (id) colorWithHue:(double)asaturation:(double)bbrightness:(double)calpha:(double)d;
 + (id) colorWithCIColor:(id)a;
 + (id) _systemColorForColor:(id)awithName:(id)b;
 + (id) tableCellPlainBackgroundColor;
 + (id) tablePlainHeaderFooterBackgroundColor;
 + (id) tablePlainHeaderFooterFloatingBackgroundColor;
 + (id) tableSelectionColor;
 + (id) tableSelectionGradientStartColor;
 + (id) tableSelectionGradientEndColor;
 + (id) tableShadowColor;
 + (id) tableGroupedTopShadowColor;
 + (id) sectionListBorderColor;
 + (id) sectionHeaderBackgroundColor;
 + (id) sectionHeaderOpaqueBackgroundColor;
 + (id) sectionHeaderBorderColor;
 + (id) tableCellValue1BlueColor;
 + (id) tableCellValue2BlueColor;
 + (id) tableCellGrayTextColor;
 + (id) textFieldAtomPurpleColor;
 + (id) infoTextOverPinStripeTextColor;
 + (id) textFieldAtomBlueColor;
 + (id) pinStripeColor;
 + (id) selectionGrabberColor;
 + (id) lightTextColor;
 + (id) darkTextColor;
 + (id) _markedTextBorderColor;
 + (id) tableCellGroupedBackgroundColor;
 + (id) tableCellBlueTextColor;
 + (id) viewFlipsideBackgroundColor;
 + (id) underPageBackgroundColor;
 + (id) scrollViewTexturedBackgroundColor;
 + (id) systemMidGrayColor;
 + (id) systemDarkYellowColor;
 + (id) externalSystemTealColor;
 + (id) externalSystemRedColor;
 + (id) externalSystemGreenColor;
 + (id) _vibrantLightDividerBurnColor;
 + (id) _systemInteractionTintColor;
 + (id) _systemDestructiveTintColor;
 + (id) _barHairlineShadowColor;
 + (id) _barStyleBlackHairlineShadowColor;
 + (id) _systemMidGrayTintColor;
 + (id) _externalSystemMidGrayColor;
 + (id) _externalSystemGrayColor;
 + (id) _externalSystemSuperDarkGrayColor;
 + (id) noContentLightGradientBackgroundColor;
 + (id) noContentDarkGradientBackgroundColor;
 + (id) _translucentPaperTextureColor;
 + (id) _dimmingViewColor;
 + (id) _grayColorForFontSize:(double)a;
 + (id) _alternateGrayColorForFontSize:(double)a;
 + (id) _systemSelectedColor;
 + (id) _vibrantLightDividerDarkeningColor;
 + (id) _vibrantLightFillBurnColor;
 + (id) _vibrantLightFillDarkeningColor;
 + (id) _vibrantDarkFillDodgeColor;
 + (id) _vibrantLightSectionDelimiterDividerBurnColor;
 + (id) _vibrantLightSectionDelimiterDividerDarkeningColor;
 + (id) _webContentBackgroundColor;
 + (id) _alternateBackgroundColor;
 + (id) _alternateBackgroundColor2;
 + (id) _alternateTextColor;
 + (id) _alternateTextColor2;
 + (id) _alternateForegroundColor;
 + (id) _alternateForegroundColor2;
 + (id) blackColor;
 + (id) systemRedColor;
 + (id) colorWithPatternImage:(id)a;
 + (id) redColor;
 + (id) systemBlueColor;
 + (id) blueColor;
 + (id) colorWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 + (id) _markedTextBackgroundColor;
 + (id) brownColor;
 + (id) colorWithWhite:(double)aalpha:(double)b;
 + (id) whiteColor;
 + (id) _disambiguated_due_to_CIImage_colorWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 + (id) clearColor;
 + (id) _disambiguated_due_to_CIImage_colorWithCGColor:(^{CGColor=})a;
 + (id) colorWithCGColor:(^{CGColor=})a;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) set;
 - (id) initWithHue:(double)asaturation:(double)bbrightness:(double)calpha:(double)d;
 - (BOOL) _getWhite:(^d)aalpha:(^d)b;
 - (id) _systemColorName;
 - (id) initWithWhite:(double)aalpha:(double)b;
 - (^{CGColor=}) cgColor;
 - (BOOL) _getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (id) _colorBlendedWithColor:(id)a;
 - (id) styleString;
 - (BOOL) isPatternColor;
 - (BOOL) getHue:(^d)asaturation:(^d)bbrightness:(^d)calpha:(^d)d;
 - (id) CIColor;
 - (id) initWithPatternImage:(id)a;
 - (void) _setSystemColorName:(id)a;
 - (double) _luminance;
 - (id) _colorBlendedWithColor:(id)acompositingFilter:(id)b;
 - (BOOL) _isSimilarToColor:(id)awithinPercentage:(double)b;
 - (double) _colorDifferenceFromColor:(id)a;
 - (double) _luminanceDifferenceFromColor:(id)a;
 - (id) _colorBlendedWithColors:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (^{CGColor=}) CGColor;
 - (BOOL) getRed:(^d)agreen:(^d)bblue:(^d)calpha:(^d)d;
 - (void) setFill;
 - (id) colorWithAlphaComponent:(double)a;
 - (double) alphaComponent;
 - (BOOL) getWhite:(^d)aalpha:(^d)b;
 - (id) initWithCIColor:(id)a;
 - (id) initWithCGColor:(^{CGColor=})a;
 - (id) initWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;
 - (void) setStroke;


@end
