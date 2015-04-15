
@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone {

}

 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) lightKeycapsFontName;
 - (void) _customizeTraits:(id)a forPopupForKey:(id)b withRenderConfig:(id)c keycapsFontName:(id)d ;
 - (double) emojiInternationalKeySize;
 - ({CGPoint=dd}) emojiInternationalKeyOffset;
 - ({CGPoint=dd}) emojiPopupTextOffset;
 - (BOOL) shouldClearBaseDisplayStringForVariants:(id)a ;
 - (id) thinKeycapsFontName;
 - (double) keyCornerRadius;


@end
