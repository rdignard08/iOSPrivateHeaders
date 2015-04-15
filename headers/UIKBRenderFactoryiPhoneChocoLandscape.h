
@interface UIKBRenderFactoryiPhoneChocoLandscape : UIKBRenderFactoryiPhoneLandscape {

}

 - (id) lightKeycapsFontName;
 - (id) thinKeycapsFontName;
 - (double) moreKeyFontSize;
 - ({CGPoint=dd}) dismissKeyOffset;
 - ({CGPoint=dd}) internationalKeyOffset;
 - ({CGPoint=dd}) realEmojiKeyOffset;
 - ({CGPoint=dd}) dictationKeyOffset;
 - (double) stringKeyFontSize;
 - (double) moreABCKeyFontSize;
 - ({CGPoint=dd}) moreABCKeyOffset;
 - ({CGPoint=dd}) returnKeyOffset;
 - (double) assistKeyFontSize;
 - ({CGPoint=dd}) undoKeyOffset;
 - ({CGPoint=dd}) leftArrowKeyOffset;
 - ({CGPoint=dd}) rightArrowKeyOffset;
 - (double) popupFontSize;
 - ({CGPoint=dd}) popupSymbolTextOffset;
 - ({CGPoint=dd}) variantSymbolTextOffset;
 - ({UIEdgeInsets=dddd}) variantSymbolFrameInsets;
 - (BOOL) isTallPopup;


@end
