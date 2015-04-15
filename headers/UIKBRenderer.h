
@interface UIKBRenderer : NSObject {

    ^{CGContext=} _cachingContext;
    @? _cachingContextCompletion;
    BOOL _opaque;
    BOOL _containsRGBContent;
    ^{CGContext=} _ctx;
    double _scale;
    long long _renderFlags;
    NSString* _cacheKey;
    UIImage* _renderedImage;
    {CGSize="width"d"height"d} _size;
}
@property (nonatomic, assign, readonly) NSNumber* context;
@property (nonatomic, assign, readonly) NSData* contextData;
@property (nonatomic, assign, readonly) NSNumber* size;
@property (nonatomic, assign, readonly) NSNumber* scale;
@property (nonatomic, assign, readonly) NSNumber* opaque;
@property (nonatomic, assign, readonly) NSNumber* renderFlags;
@property (nonatomic, assign, readonly) UIImage* renderedImage;
@property (nonatomic, assign, readonly) NSNumber* containsRGBContent;
@property (nonatomic, retain, readwrite) NSString* cacheKey;
 + (id) rendererWithContext:(^{CGContext=})awithSize:({CGSize=dd})bwithScale:(double)copaque:(BOOL)drenderFlags:(long long)e;
 + (void) clearInternalCaches;
 + (^{CGContext=}) imageContextWithSize:({CGSize=dd})ascale:(double)bopaque:(BOOL)cinvert:(BOOL)d;

 - (double) scale;
 - ({CGSize=dd}) size;
 - (void) dealloc;
 - (void) renderKeyContents:(id)awithTraits:(id)b;
 - (BOOL) opaque;
 - (void) renderBackgroundTraits:(id)a;
 - (id) cacheKey;
 - (id) renderedImage;
 - (BOOL) loadCachedImageForHashString:(id)a;
 - (id) contextData;
 - (void) setCacheKey:(id)a;
 - (long long) renderFlags;
 - (BOOL) containsRGBContent;
 - (void) renderEdgeEffect:(id)awithTraits:(id)b;
 - (void) renderShadowEffect:(id)awithTraits:(id)b;
 - (id) initWithContext:(^{CGContext=})awithSize:({CGSize=dd})bwithScale:(double)copaque:(BOOL)drenderFlags:(long long)e;
 - (void) ensureContext;
 - (^{CGColor=}) _validColorForColor:(^{CGColor=})a;
 - (void) addPathForTraits:(id)adisplayRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) addRoundRect:({CGRect={CGPoint=dd}{CGSize=dd}})aradius:(double)bcorners:(unsigned long long)c;
 - (void) addPathForRenderGeometry:(id)a;
 - (void) _drawLinearGradient:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (^{CGContext=}) _contextForCacheImageSize:({CGSize=dd})a;
 - (void) _completeCacheImageWithTraitsIfNecessary:(id)a;
 - (void) renderBackgroundTraits:(id)aallowCaching:(BOOL)b;
 - (BOOL) renderKeyStringContents:(id)awithTraits:(id)b;
 - (BOOL) renderKeyImageContents:(id)awithTraits:(id)b;
 - (BOOL) renderKeyPathContents:(id)awithTraits:(id)b;
 - (void) _renderVariantsFromKeyContents:(id)awithTraits:(id)b;
 - (void) _drawKeyImage:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithStyle:(id)cforce1xImages:(BOOL)d;
 - (BOOL) _drawSingleSymbol:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithStyle:(id)c;
 - (BOOL) _drawKeyString:(id)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})bwithStyle:(id)c;
 - (^{CGPath=}) _thickShiftGlyphPath;
 - (^{CGPath=}) _thinShiftGlyphPath;
 - (^{CGPath=}) _deleteGlyphPaths;
 - (void) drawPath:(^{CGPath=})aweight:(double)btransform:({CGAffineTransform=dddddd})ccolor:(^{CGColor=})dfill:(BOOL)e;
 - (void) drawShiftPath:(BOOL)aweight:(double)btransform:({CGAffineTransform=dddddd})ccolor:(^{CGColor=})d;
 - (void) addPathForFlickPopupGeometries:(id)a;
 - (void) addPathForFlickGeometry:(id)a;
 - (void) addPathForSplitGeometry:(id)a;
 - (id) pathForRenderGeometry:(id)a;
 - (id) pathForFlickGeometry:(id)a;
 - (id) pathForFlickPopupGeometries:(id)a;
 - (id) pathForSplitGeometry:(id)a;
 - (^{CGContext=}) context;


@end
