
@interface UIKBRenderFactoryiPadLandscape : UIKBRenderFactoryiPad {

}

 - (double) keyCornerRadius;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
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
 - (id) handwritingMoreKeyImageName;
 - (id) globalKeyImageName;
 - (id) dismissKeyImageName;
 - (id) dictationKeyImageName;
 - ({CGPoint=dd}) deleteKeyOffset;
 - (double) shiftKeyFontSize;
 - ({CGPoint=dd}) shiftKeyOffset;
 - (double) stringKeyFontSize;
 - (double) zhuyinFirstToneKeyFontSize;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) shiftKeySymbolFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) dismissKeySymbolFrame;
 - (double) fontSizeAdjustmentForNonAlphanumericKeycaps;
 - (double) dualStringKeyFontSizeAdjustment;
 - (double) bottomRowDefaultFontSize;
 - (double) fallbackFontSize;
 - (double) smallKanaKeyFontSize;
 - (double) emailDotKeyFontSize;
 - (double) facemarkKeyFontSize;
 - (double) defaultVariantSizeThreshold;
 - ({CGPoint=dd}) dualStringKeyOffset;
 - (double) dualStringKeyMiddleMargin;


@end
