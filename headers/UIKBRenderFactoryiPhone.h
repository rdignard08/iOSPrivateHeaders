
@interface UIKBRenderFactoryiPhone : UIKBRenderFactory {

}

 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) controlKeyTraits;
 - (id) activeControlKeyTraits;
 - (id) shiftedControlKeyTraits;
 - (long long) lightHighQualityEnabledBlendForm;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (void) setupLayoutSegments;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;
 - (double) returnKeyFontSize;
 - (double) deleteKeyFontSize;
 - (double) moreKeyFontSize;
 - ({CGPoint=dd}) dismissKeyOffset;
 - (id) deleteKeyImageName;
 - (double) skinnyKeyThreshold;
 - (id) globalKeyImageName;
 - (id) dictationKeyImageName;
 - ({CGPoint=dd}) internationalKeyOffset;
 - ({CGPoint=dd}) realEmojiKeyOffset;
 - ({CGPoint=dd}) dictationKeyOffset;
 - ({CGPoint=dd}) deleteKeyOffset;
 - (double) shiftKeyFontSize;
 - ({CGPoint=dd}) shiftKeyOffset;
 - (double) hintNoneKeyFontSize;
 - ({CGPoint=dd}) stringKeyOffset;
 - (double) stringKeyFontSize;
 - ({CGPoint=dd}) more123KeyOffset;
 - (double) moreABCKeyFontSize;
 - ({CGPoint=dd}) moreABCKeyOffset;
 - ({CGPoint=dd}) returnKeyOffset;
 - (double) assistKeyFontSize;
 - ({CGPoint=dd}) cutKeyOffset;
 - ({CGPoint=dd}) copyKeyOffset;
 - ({CGPoint=dd}) pasteKeyOffset;
 - ({CGPoint=dd}) boldKeyOffset;
 - ({CGPoint=dd}) undoKeyOffset;
 - ({CGPoint=dd}) leftArrowKeyOffset;
 - ({CGPoint=dd}) rightArrowKeyOffset;
 - (double) zhuyinFirstToneKeyFontSize;
 - ({CGPoint=dd}) zhuyinFirstToneKeyOffset;
 - (double) popupFontSize;
 - ({CGPoint=dd}) popupSymbolTextOffset;
 - ({UIEdgeInsets=dddd}) wideShadowPaddleInsets;
 - ({CGPoint=dd}) variantSymbolTextOffset;
 - (void) _customizeSymbolStyle:(id)a forKey:(id)b contents:(id)c ;
 - (void) _customizeGeometry:(id)a forKey:(id)b contents:(id)c ;
 - (BOOL) _popupMenuStyleForKey:(id)a ;
 - (void) _customizePopupTraits:(id)a forKey:(id)b onKeyplane:(id)c ;
 - (BOOL) _popupStyleForKey:(id)a ;
 - ({UIEdgeInsets=dddd}) variantDisplayFrameInsets;
 - ({UIEdgeInsets=dddd}) variantSymbolFrameInsets;
 - ({UIEdgeInsets=dddd}) variantPaddedFrameInsets;
 - (BOOL) isTallPopup;
 - (long long) rowLimitForKey:(id)a ;
 - (id) variantGeometriesForGeometry:(id)a variantCount:(unsigned long long)b rowLimit:(long long)c ;
 - (double) dualStringBottomAdditionalOffsetForDisplayContents:(id)a ;
 - (id) shiftLockControlKeyTraits;
 - (double) _row4ControlSegmentWidth;
 - (id) shiftDeleteGlyphTraits;
 - ({CGPoint=dd}) secondaryShiftKeyOffset;


@end
