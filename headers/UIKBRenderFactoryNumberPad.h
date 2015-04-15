
@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory {

}

 - (id) controlKeyBackgroundColorName;
 - (id) _traitsForKey:(id)a onKeyplane:(id)b ;
 - (id) defaultKeyDividerColorName;
 - (id) controlKeyDividerColorName;
 - (long long) lightHighQualityEnabledBlendForm;
 - (id) controlKeyForegroundColorName;
 - (void) setupLayoutSegments;
 - ({CGPoint=dd}) deleteGlyphOffset;
 - ({CGPoint=dd}) dictationGlyphOffset;
 - ({CGPoint=dd}) loneZeroOffset;
 - (double) numberFontSize;
 - (double) letterFontSize;
 - ({CGPoint=dd}) leftColumnNumberOffset;
 - ({CGPoint=dd}) leftColumnLetterOffset;
 - ({CGPoint=dd}) rightColumnNumberOffset;
 - ({CGPoint=dd}) rightColumnLetterOffset;
 - ({CGPoint=dd}) centerColumnNumberOffset;
 - ({CGPoint=dd}) centerColumnLetterOffset;
 - (void) _customizeSymbolStyle:(id)a secondaryStyle:(id)b forKey:(id)c contents:(id)d ;


@end
