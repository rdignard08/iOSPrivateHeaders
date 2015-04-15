
@protocol CUIThemeImageSource, NSCopying, NSCoding;
@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding> {

    ^{_renditionkeytoken=SS} _renditionKeyList;
    unsigned long long _themeIndex;
    long long _renditionType;
    {CGSize="width"d"height"d} _thumbnailSize;
    {CGPoint="x"d"y"d} _hotSpot;
    {?="hasCheckedButtonGlyph"b1"isButtonGlyph"b1"reserved"b14} _fFlags;
}
 + (void) initialize;
 + (unsigned long long) themeNamed:(id)aforBundleIdentifier:(id)berror:(^@)c;
 + (id) _themeStoreForThemeIndex:(unsigned long long)a;
 + (id) facetWithElement:(long long)apart:(long long)bdimension1:(long long)cdimension2:(long long)dfromTheme:(unsigned long long)e;
 + (id) _facetWithKeyList:(r^{_renditionkeytoken=SS})aandRenditionKeyClass:(Class)borRenditionKey:(id)cfromTheme:(unsigned long long)d;
 + (void) _invalidateArtworkCaches;
 + (unsigned long long) themeForBundleIdentifier:(id)aerror:(^@)b;
 + (unsigned long long) themeWithContentsOfURL:(id)aerror:(^@)b;
 + (id) debug_bundleIdentifierForThemeRef:(unsigned long long)a;
 + (id) facetWithElement:(long long)apart:(long long)bfromTheme:(unsigned long long)c;
 + (id) facetWithRenditionKey:(id)afromTheme:(unsigned long long)b;
 + (id) cursorFacetWithName:(id)afromTheme:(unsigned long long)b;
 + (BOOL) assetExistsForRenditionKey:(id)afromTheme:(unsigned long long)b;

 - (id) displayName;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (void) setControlSize:(long long)a ;
 - (id) imageForState:(long long)a ;
 - (long long) controlSize;
 - ({CGSize=dd}) thumbnailSize;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (double) alpha;
 - (int) blendMode;
 - (id) _rendition;
 - (id) _themeStore;
 - (id) _renditionForSpecificKey:(id)a ;
 - (id) imageForSliceIndex:(long long)a ;
 - (unsigned long long) themeIndex;
 - (BOOL) _isButtonGlyph;
 - ({CGSize=dd}) imageSize;
 - (void) _drawAsMaskSpecificRenditionKey:(id)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b context:(^{CGContext=})c alpha:(double)d operation:(int)e isFocused:(int)f ;
 - (void) _drawSpecificRenditionKey:(id)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b context:(^{CGContext=})c alpha:(double)d operation:(int)e isFocused:(int)f isFlipped:(BOOL)g ;
 - (id) initWithRenditionKey:(id)a fromTheme:(unsigned long long)b ;
 - (void) _initWithRenditionKey:(id)a ;
 - (void) _applyFixedAttributesToKey:(id)a ;
 - (^{CGImage=}) copyLayerImageContentsAndCenter:(^{CGRect={CGPoint=dd}{CGSize=dd}})a renditionKey:(id)b ;
 - (id) gradientWithKeyAdjustment:(id)a angle:(^d)b style:(^Q)c ;
 - (^{CGImage=}) copyLayerImageContentsAndCenter:(^{CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) blendModeAsCAFilterString;
 - (void) _drawSpecificRenditionKey:(id)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b context:(^{CGContext=})c isFocused:(int)d isFlipped:(BOOL)e ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c isFocused:(int)d context:(^{CGContext=})e ;
 - (id) themeRendition;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b owner:(id)c userInfo:(id)d context:(^{CGContext=})e ;
 - (void) drawHighlightInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b owner:(id)c userInfo:(id)d context:(^{CGContext=})e ;
 - (void) drawMaskInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b owner:(id)c userInfo:(id)d context:(^{CGContext=})e ;
 - (void) _updateSpecificRenditionKey:(id)a isFocused:(^B)b owner:(id)c userInfo:(id)d ;
 - (BOOL) _canGetRenditionForKey:(id)a withDrawingLayer:(long long)b ;
 - (id) _imageForRenditionFromKey:(id)a withSize:({CGSize=dd})b isMask:(BOOL)c ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c owner:(id)d userInfo:(id)e context:(^{CGContext=})f ;
 - (void) drawHighlightInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c owner:(id)d userInfo:(id)e context:(^{CGContext=})f ;
 - (void) _drawMaskFromSpecificRenditionKey:(id)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b alpha:(double)c operation:(int)d isFocused:(int)e context:(^{CGContext=})f ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c isFocused:(int)d keyAdjustment:(id)e context:(^{CGContext=})f ;
 - (void) drawHighlightInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c keyAdjustment:(id)d context:(^{CGContext=})e ;
 - (void) drawMaskInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b operation:(int)c isFocused:(int)d keyAdjustment:(id)e context:(^{CGContext=})f ;
 - (id) renditionForSpecificKeyWrapper:(id)a ;
 - (void) _drawSpecificRenditionKey:(id)a rendition:(id)b inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})c context:(^{CGContext=})d alpha:(double)e operation:(int)f isFocused:(int)g isFlipped:(BOOL)h ;
 - (void) drawGradientInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a angle:(double)b alpha:(double)c operation:(int)d isFocused:(int)e keyAdjustment:(id)f context:(^{CGContext=})g ;
 - (long long) _sliceIndexForSlice:(long long)a ofRendition:(id)b ;
 - (id) _approximateRenditionForRenditionKey:(id)a ;
 - (id) imageForState:(long long)a value:(long long)b ;
 - (BOOL) isValidButtonImageSourceForSize:(unsigned long long)a ;
 - (id) imageForState:(long long)a value:(long long)b size:(unsigned long long)c ;
 - (id) renditionKey;
 - (double) alphaWithKeyAdjustment:(id)a ;
 - (int) blendModeWithKeyAdjustment:(id)a ;
 - (id) blendModeAsCAFilterStringWithKeyAjustment:(id)a ;
 - ({CGSize=dd}) _thumbnailSizeForRendition:(id)a ;
 - (id) thumbnail;
 - (id) imageForState:(long long)a withValue:(long long)b ;
 - (BOOL) hasValueSlices;
 - ({CGPoint=dd}) _hotSpot;
 - (void) _setHasCheckedButtonGlyph:(BOOL)a ;
 - (void) _setIsButtonGlyph:(BOOL)a ;
 - (id) makeLayer;
 - (void) updateLayer:(id)a ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a isFocused:(int)b context:(^{CGContext=})c ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b isFocused:(int)c context:(^{CGContext=})d ;
 - (void) drawAsOnePartWithSlice:(int)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b isFocused:(int)c context:(^{CGContext=})d ;
 - (void) drawAbsoluteAnimationFrame:(double)a destinationFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b isFocused:(int)c context:(^{CGContext=})d ;
 - (void) drawAnimationFrameMappedFrom0_1RangedValue:(double)a destinationFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b isFocused:(int)c context:(^{CGContext=})d ;
 - (void) drawSegmentInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a isFocused:(int)b segmentType:(int)c context:(^{CGContext=})d ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a owner:(id)b userInfo:(id)c context:(^{CGContext=})d ;
 - (void) drawHighlightInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a owner:(id)b userInfo:(id)c context:(^{CGContext=})d ;
 - (void) drawMaskInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a owner:(id)b userInfo:(id)c context:(^{CGContext=})d ;
 - (BOOL) hitTestAtPoint:({CGPoint=dd})a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b owner:(id)c userInfo:(id)d ;
 - (void) drawPulseInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a pulseValue:(double)b owner:(id)c userInfo:(id)d context:(^{CGContext=})e ;
 - (void) drawInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b isFocused:(int)c keyAdjustment:(id)d context:(^{CGContext=})e ;
 - (void) drawHighlightInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b keyAdjustment:(id)c context:(^{CGContext=})d ;
 - (void) drawMaskInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a alpha:(double)b isFocused:(int)c keyAdjustment:(id)d context:(^{CGContext=})e ;
 - (void) drawPulseInFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a pulseValue:(double)b isFocused:(int)c keyAdjustment:(id)d context:(^{CGContext=})e ;
 - (void) _drawSlice:(long long)a inFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b withKeyAdjustment:(id)c context:(^{CGContext=})d ;
 - (id) renditionMetricsWithKeyAdjustment:(id)a ;
 - (id) renditionSliceInformationForRect:({CGRect={CGPoint=dd}{CGSize=dd}})a keyAdjustment:(id)b ;
 - (BOOL) isValidButtonImageSource;
 - (id) imageWithKeyAdjustment:(id)a ;
 - (void) _setThemeIndex:(unsigned long long)a ;
 - (long long) renditionType;
 - ({CGSize=dd}) topLeftCapSize;
 - (id) maskForSlice:(long long)a withKeyAdjustment:(id)b ;
 - (id) imageForSlice:(long long)a withKeyAdjustment:(id)b ;
 - (id) imageWithSize:({CGSize=dd})a keyAdjustment:(id)b ;
 - (id) highlightWithSize:({CGSize=dd})a keyAdjustment:(id)b ;
 - (id) maskWithSize:({CGSize=dd})a keyAdjustment:(id)b ;
 - (id) image;


@end
