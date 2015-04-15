
@protocol NSCopying;
@interface UIFont : NSObject <NSCopying> {

}
@property (nonatomic, retain, readonly) NSString* familyName;
@property (nonatomic, retain, readonly) NSString* fontName;
@property (nonatomic, assign, readonly) NSNumber* pointSize;
@property (nonatomic, assign, readonly) NSNumber* ascender;
@property (nonatomic, assign, readonly) NSNumber* descender;
@property (nonatomic, assign, readonly) NSNumber* capHeight;
@property (nonatomic, assign, readonly) NSNumber* xHeight;
@property (nonatomic, assign, readonly) NSNumber* lineHeight;
@property (nonatomic, assign, readonly) NSNumber* leading;
 + (id) _ui_bulletFontForFont:(id)a;
 + (id) classFallbacksForKeyedArchiver;
 + (void) initialize;
 + (id) _ultraLightSystemFontOfSize:(d)a;
 + (d) systemFontSize;
 + (id) defaultFontForTextStyle:(id)a;
 + (id) _lightSystemFontOfSize:(d)a;
 + (id) _thinSystemFontOfSize:(d)a;
 + (d) labelFontSize;
 + (id) _opticalBoldSystemFontOfSize:(d)a;
 + (id) _opticalSystemFontOfSize:(d)a;
 + (id) systemFontOfSize:(d)a;
 + (id) userFontOfSize:(d)a;
 + (id) fontWithDescriptor:(id)asize:(d)b;
 + (id) fontWithName:(id)asize:(d)b;
 + (id) boldSystemFontOfSize:(d)a;
 + (id) _sharedFontCache;
 + (id) fontWithName:(id)asize:(d)btraits:(i)c;
 + (id) systemFontOfSize:(d)atraits:(i)b;
 + (id) systemFontOfSize:(d)aweight:(d)bdesign:(id)c;
 + (id) _systemFontsOfSize:(d)atraits:(i)b;
 + (id) preferredFontForTextStyle:(id)a;
 + (id) ib_preferredFontForTextStyle:(id)a;
 + (id) _sharedZeroPointFont;
 + (void) _evictAllItemsFromFontAndFontDescriptorCaches;
 + (id) fontWithFamilyName:(id)atraits:(i)bsize:(d)c;
 + (id) fontWithMarkupDescription:(id)a;
 + (id) familyNames;
 + (id) fontNamesForFamilyName:(id)a;
 + (id) italicSystemFontOfSize:(d)a;
 + (id) systemFontOfSize:(d)aweight:(d)b;
 + (d) buttonFontSize;
 + (d) smallSystemFontSize;
 + (id) preferredFontForUsage:(id)a;
 + (id) preferredFontForUsage:(id)acontentSizeCategoryName:(id)b;
 + (d) _readableWidth;

 - (Class) classForCoder;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (d) capHeight;
 - (d) leading;
 - (d) _scaledValueForValue:(d)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) verticalFont;
 - ({CGSize=dd}) advancementForGlyph:(S)a;
 - (^{CGFont=}) _backingCGSFont;
 - (d) pointSize;
 - (BOOL) isVertical;
 - (d) xHeight;
 - (d) descender;
 - (d) _leading;
 - (d) underlineThickness;
 - (d) ascender;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) boundingRectForFont;
 - ({CGAffineTransform=dddddd}) _textMatrixTransformForContext:(^{CGContext=})a;
 - (void) getAdvancements:(^{CGSize=dd})aforCGGlyphs:(r^S)bcount:(Q)c;
 - (void) getVerticalOriginTranslations:(^{CGSize=dd})aforCGGlyphs:(r^S)bcount:(Q)c;
 - (void) setInContext:(^{CGContext=})a;
 - (Q) getCaretPositions:(^d)aforGlyph:(I)bmaximumLength:(Q)c;
 - (d) _totalAdvancementForNativeGlyphs:(r^S)acount:(q)b;
 - (BOOL) _isDefaultFace;
 - (Q) renderingMode;
 - (id) _kernOverride;
 - (I) hyphenGlyphForLocale:(id)a;
 - (void) getBoundingRects:(^{CGRect={CGPoint=dd}{CGSize=dd}})aforCGGlyphs:(r^S)bcount:(Q)c;
 - (id) screenFontWithRenderingMode:(Q)a;
 - (d) _defaultLineHeightForUILayout;
 - (S) glyphWithName:(id)a;
 - (Q) numberOfGlyphs;
 - (id) fontWithSize:(d)a;
 - (id) fontName;
 - (id) fontDescriptor;
 - (id) coveredCharacterSet;
 - (i) traits;
 - (id) bestMatchingFontForCharacters:(r^S)alength:(Q)battributes:(id)cactualCoveredLength:(^Q)d;
 - (id) lastResortFont;
 - (d) _baseLineHeightForFont:(BOOL)a;
 - (BOOL) _getLatin1GlyphMapping:(r^^S)aandAdvanceMapping:(r^^{CGSize})b;
 - (id) initWithMarkupDescription:(id)a;
 - (BOOL) isSystemFont;
 - (d) readableWidth;
 - (d) _bodyLeading;
 - (id) initWithFamilyName:(id)atraits:(i)bsize:(d)c;
 - (BOOL) isIBTextStyleFont;
 - (id) familyName;
 - (d) lineHeight;
 - (id) familyNameForCSSFontFamilyValue;
 - (id) markupDescription;
 - (id) _alternateSystemFonts;
 - (id) initWithName:(id)asize:(d)b;
 - (id) _fontScaledByScaleFactor:(d)a;
 - (BOOL) isFixedPitch;
 - (^{__CTFont=}) CTFont;
 - (BOOL) _isHiraginoFont;
 - (d) _ascenderDeltaForBehavior:(q)a;
 - (id) _familyName;
 - (I) _defaultGlyphForChar:(S)a;
 - (Q) mostCompatibleStringEncoding;


@end