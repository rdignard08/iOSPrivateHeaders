
@interface UIKBRenderFactory : NSObject {

    UIKBRenderConfig* _renderConfig;
    NSMutableArray* _segmentTraits;
    double _rivenSizeFactor;
    BOOL _lightweightFactory;
    double _scale;
    BOOL _boldTextEnabled;
}
@property (nonatomic, assign, readwrite) NSNumber* scale;
@property (nonatomic, assign, readonly) UIKBRenderConfig* renderConfig;
@property (nonatomic, assign, readonly) NSArray* segmentTraits;
@property (nonatomic, assign, readwrite) NSNumber* rivenSizeFactor;
@property (nonatomic, assign, readwrite) NSNumber* lightweightFactory;
@property (nonatomic, assign, readonly) NSNumber* boldTextEnabled;
 + (BOOL) _enabled;
 + (long long) _graphicsQuality;
 + (id) lightweightFactoryForVisualStyle:({?=b6b1b1b8b16})arenderConfig:(id)b;
 + (id) factoryForVisualStyle:({?=b6b1b1b8b16})arenderConfig:(id)b;
 + (id) cacheKeyForString:(id)awithRenderFlags:(long long)brenderConfig:(id)c;
 + (id) segmentedControlColor:(BOOL)a;
 + (Class) factoryClassForVisualStyle:({?=b6b1b1b8b16})a;

 - (double) scale;
 - (void) dealloc;
 - (id) renderConfig;
 - (id) backgroundTraitsForKeyplane:(id)a ;
 - (id) defaultKeyBackgroundColorName;
 - (id) controlKeyBackgroundColorName;
 - (id) traitsHashStringForKey:(id)a withGeometry:(id)b controlOpacities:(BOOL)c ;
 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)a forPopupForKey:(id)b withRenderConfig:(id)c keycapsFontName:(id)d ;
 - (double) translucentGapWidth;
 - (id) lightTextFontName;
 - (BOOL) lightweightFactory;
 - (id) traitsForKey:(id)a onKeyplane:(id)b ;
 - (BOOL) shouldClearBaseDisplayStringForVariants:(id)a ;
 - (id) lightPadKeycapsFontName;
 - (void) modifyTraitsForDetachedInputSwitcher:(id)a withKey:(id)b ;
 - (id) thinKeycapsFontName;
 - (double) keyCornerRadius;
 - (double) RivenFactor:(double)a ;
 - (id) displayContentsForKey:(id)a ;
 - (id) _controlKeyBackgroundColorName;
 - (long long) enabledBlendForm;
 - (void) removeAllLayoutSegments;
 - (BOOL) useBlueThemingForKey:(id)a ;
 - (void) addLayoutSegment:(id)a ;
 - (long long) lightHighQualityEnabledBlendForm;
 - (id) controlKeyForegroundColorName;
 - (id) multitapCompleteKeyImageName;
 - (id) muttitapReverseKeyImageName;
 - (void) setupLayoutSegments;
 - (void) scaleTraits:(id)a ;
 - (id) shiftKeyImageName;
 - (id) shiftOnKeyImageName;
 - (id) shiftLockImageName;
 - (id) initWithRenderConfig:(id)a skipLayoutSegments:(BOOL)b ;
 - (void) setLightweightFactory:(BOOL)a ;
 - (double) emojiPopupDividerKeyOffset;
 - (void) lowQualityTraits:(id)a ;
 - (id) segmentTraits;
 - (id) hashStringElement;
 - (id) deleteKeyImageName;
 - (double) skinnyKeyThreshold;
 - (id) keyImageNameWithSkinnyVariation:(id)a ;
 - (id) handwritingMoreKeyImageName;
 - (id) globalEmojiKeyImageName;
 - (id) globalKeyImageName;
 - (id) dismissKeyImageName;
 - (id) dictationKeyImageName;
 - (id) leftArrowKeyImageName;
 - (id) rightArrowKeyImageName;
 - (id) cutKeyImageName;
 - (id) copyKeyImageName;
 - (id) pasteKeyImageName;
 - (id) undoKeyImageName;
 - (id) boldKeyImageName;
 - (id) biuKeyImageName;
 - (id) defaultKeyShadowColorName;
 - (void) modifyTraitsForDividerVariant:(id)a withKey:(id)b ;
 - (id) controlKeyShadowColorName;
 - (id) thinTextFontName;
 - (double) rivenSizeFactor;
 - (void) setRivenSizeFactor:(double)a ;
 - (BOOL) boldTextEnabled;
 - (double) passcodeEdgeWeight;
 - (id) passcodeKeyEdgeColorName;
 - (id) passcodeActiveControlKeyTraits;
 - (void) modifyKeyTraitsForPasscode:(id)a forKey:(id)b onKeyplane:(id)c ;
 - (id) passcodeBackgroundTraitsForKeyplane:(id)a ;
 - (id) passcodeControlKeyTraits;
 - (id) passcodeShiftedControlKeyTraits;
 - (id) extraPasscodePaddleTraits;
 - (void) setScale:(double)a ;


@end
