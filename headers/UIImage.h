
@protocol NSSecureCoding;
@interface UIImage : NSObject <NSSecureCoding> {

    ^v _imageRef;
    double _scale;
    {?="named"b1"imageOrientation"b3"cached"b1"hasPattern"b1"isCIImage"b1"renderingMode"b2"suppressesAccessibilityHairlineThickening"b1"hasDecompressionInfo"b1} _imageFlags;
    UITraitCollection* _traitCollection;
    UIImageAsset* _imageAsset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _alignmentRectInsets;
}
@property (nonatomic, assign, readonly) NSNumber* leftCapWidth;
@property (nonatomic, assign, readonly) NSNumber* topCapHeight;
@property (nonatomic, assign, readonly) NSNumber* size;
@property (nonatomic, assign, readonly) NSNumber* CGImage;
@property (nonatomic, assign, readonly) CIImage* CIImage;
@property (nonatomic, assign, readonly) NSNumber* imageOrientation;
@property (nonatomic, assign, readonly) NSNumber* scale;
@property (nonatomic, assign, readonly) NSArray* images;
@property (nonatomic, assign, readonly) NSNumber* duration;
@property (nonatomic, assign, readonly) NSNumber* capInsets;
@property (nonatomic, assign, readonly) NSNumber* resizingMode;
@property (nonatomic, assign, readonly) NSNumber* alignmentRectInsets;
@property (nonatomic, assign, readonly) NSNumber* renderingMode;
@property (nonatomic, copy, readwrite) UITraitCollection* traitCollection;
@property (nonatomic, retain, readwrite) UIImageAsset* imageAsset;
 + (BOOL) supportsSecureCoding;
 + (void) initialize;
 + (id) kitImageNamed:(id)a;
 + (void) _flushSharedImageCache;
 + (id) imageWithCGImage:(^{CGImage=})ascale:(double)borientation:(long long)c;
 + (id) animatedImageWithImages:(id)aduration:(double)b;
 + (void) _flushCache:(id)a;
 + (id) imageNamed:(id)ainBundle:(id)bcompatibleWithTraitCollection:(id)c;
 + (id) imageNamed:(id)a;
 + (id) _animatedImageNamed:(id)ainBundle:(id)bcompatibleWithTraitCollection:(id)cduration:(double)d;
 + (id) animatedResizableImageNamed:(id)acapInsets:({UIEdgeInsets=dddd})bresizingMode:(long long)cduration:(double)d;
 + (id) _animatedResizableImageNamed:(id)ainBundle:(id)bcompatibleWithTraitCollection:(id)ccapInsets:({UIEdgeInsets=dddd})dresizingMode:(long long)eduration:(double)f;
 + (id) _imageNamed:(id)awithTrait:(id)b;
 + (id) imageWithData:(id)a;
 + (id) imageWithData:(id)ascale:(double)b;
 + (id) imageWithCIImage:(id)a;
 + (id) imageWithCIImage:(id)ascale:(double)borientation:(long long)c;
 + ({UIEdgeInsets=dddd}) _edgeInsetsForStylePresetNames:(id)ascale:(double)b;
 + (id) animatedImageNamed:(id)aduration:(double)b;
 + (id) animatedResizableImageNamed:(id)acapInsets:({UIEdgeInsets=dddd})bduration:(double)c;
 + (id) _kitImageNamed:(id)awithTrait:(id)b;
 + (id) _backgroundGradientWithStartColor:(id)aandEndColor:(id)b;
 + (id) imageNamed:(id)ainBundle:(id)b;
 + (id) _defaultBackgroundGradient;
 + (id) imageFromAlbumArtData:(id)aheight:(int)bwidth:(int)cbytesPerRow:(int)dcache:(BOOL)e;
 + (id) imageWithContentsOfCPBitmapFile:(id)aflags:(int)b;
 + (id) _deviceSpecificImageNamed:(id)a;
 + (id) _deviceSpecificImageNamed:(id)ainBundle:(id)b;
 + (id) imageAtPath:(id)a;
 + (unsigned long long) _scaleDefinedByPath:(id)a;
 + (long long) _idiomDefinedByPath:(id)a;
 + (int) _iconVariantForUIApplicationIconFormat:(int)ascale:(^d)b;
 + (id) _iconForResourceProxy:(id)avariant:(int)bvariantsScale:(double)c;
 + (id) _applicationIconImageForBundleIdentifier:(id)aformat:(int)b;
 + (id) _tintedImageForSize:({CGSize=dd})awithTint:(id)beffectsImage:(id)cmaskImage:(id)dstyle:(int)e;
 + (id) _cachedImageForKey:(id)afromBlock:(@?)b;
 + (id) _tintedImageForSize:({CGSize=dd})awithTint:(id)bmaskImage:(id)ceffectsImage:(id)dstyle:(int)e;
 + (id) _tintedImageForSize:({CGSize=dd})awithTint:(id)bmaskImage:(id)ceffectsImage:(id)dstyle:(int)eedgeInsets:({UIEdgeInsets=dddd})f;
 + ({CGSize=dd}) _legibilityImageSizeForSize:({CGSize=dd})astyle:(long long)b;
 + (id) _iconForResourceProxy:(id)aformat:(int)b;
 + (id) imageWithCGImage:(^{CGImage=})a;
 + (id) imageWithContentsOfFile:(id)a;
 + (id) _applicationIconImageForBundleIdentifier:(id)aformat:(int)bscale:(double)c;

 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bitmapRectFromImageRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) MP_flatImageWithLinearGradientFromTopColor:(id)a toBottomColor:(id)b ;
 - (id) MP_imageByOverlayingColor:(id)a ;
 - (id) imageWithEtchedBorderOfColor:(id)a radius:(double)b ;
 - (id) imageWithShadow:(id)a ;
 - (id) initWithContentsOfFile:(id)a ;
 - (double) scale;
 - (double) duration;
 - ({CGSize=dd}) size;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) draw3PartImageWithSliceRects:({?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b operation:(int)c fraction:(double)d ;
 - (void) draw1PartImageInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fraction:(double)b operation:(int)c ;
 - (id) patternColor;
 - (id) traitCollection;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) _canEncodeWithName:(id)a coder:(id)b ;
 - (void) _encodeDataWithCoder:(id)a imageName:(id)b ;
 - (void) _encodePropertiesWithCoder:(id)a ;
 - (void) _configureImage:(id)a ;
 - (BOOL) _isResizable;
 - ({UIEdgeInsets=dddd}) capInsets;
 - (void) _setAlwaysStretches:(BOOL)a ;
 - (id) _initWithOtherImage:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentStretchInPixels;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _contentRectInPixels;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (^{CGImage=}) CGImage;
 - (long long) imageOrientation;
 - (id) initWithCGImage:(^{CGImage=})a scale:(double)b orientation:(long long)c ;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})a ;
 - (id) imageWithAlignmentRectInsets:({UIEdgeInsets=dddd})a ;
 - (BOOL) _suppressesAccessibilityHairlineThickening;
 - (BOOL) _isSubimage;
 - (BOOL) _isTiledWhenStretchedToSize:({CGSize=dd})a ;
 - (id) _resizableImageWithCapMask:(int)a ;
 - (id) images;
 - (id) resizableImageWithCapInsets:({UIEdgeInsets=dddd})a resizingMode:(long long)b ;
 - (void) _setAlignmentRectInsets:({UIEdgeInsets=dddd})a ;
 - (id) _bezeledImageWithShadowRed:(double)a green:(double)b blue:(double)c alpha:(double)d fillRed:(double)e green:(double)f blue:(double)g alpha:(double)h drawShadow:(BOOL)i ;
 - (id) _doubleBezeledImageWithExteriorShadowRed:(double)a green:(double)b blue:(double)c alpha:(double)d interiorShadowRed:(double)e green:(double)f blue:(double)g alpha:(double)h fillRed:(double)i green:(double)j blue:(double)k alpha:(double)l ;
 - (id) _imageScaledToProportion:(double)a interpolationQuality:(int)b ;
 - (id) _imageWithStylePresets:(id)a withTintColor:(id)b ;
 - (void) _preheatBitmapData;
 - (id) _decompressionInfo;
 - (void) _decompressionComplete;
 - (id) initWithData:(id)a scale:(double)b ;
 - (void) _setDecompressionInfo:(id)a ;
 - (void) _decompressionFallbackImageCreation;
 - (void) _saveDecompressedImage:(^{CGImage=})a ;
 - (void) _startEagerDecompression;
 - (id) _initWithData:(id)a immediateLoadWithMaxSize:({CGSize=dd})b scale:(double)c renderingIntent:(int)d ;
 - (BOOL) _isDecompressing;
 - (id) initWithCIImage:(id)a ;
 - (id) initWithCIImage:(id)a scale:(double)b orientation:(long long)c ;
 - (id) initWithContentsOfFile:(id)a cache:(BOOL)b ;
 - (id) _initWithData:(id)a preserveScale:(BOOL)b cache:(BOOL)c ;
 - (void) _setSuppressesAccessibilityHairlineThickening:(BOOL)a ;
 - (void) setTraitCollection:(id)a ;
 - (id) CIImage;
 - (BOOL) _isNamed;
 - ({CGSize=dd}) _sizeInPixels;
 - (id) _cachedImageStyledWithPresets:(id)a forTintColor:(id)b ;
 - (void) drawAtPoint:({CGPoint=dd})a blendMode:(int)b alpha:(double)c ;
 - (id) _primitiveImageAsset;
 - (id) imageWithRenderingMode:(long long)a ;
 - (void) drawAtPoint:({CGPoint=dd})a ;
 - (void) drawAsPatternInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _automationID;
 - (id) imageAsset;
 - (void) setImageAsset:(id)a ;
 - (id) _initWithData:(id)a preserveScale:(BOOL)b ;
 - (id) _initWithData:(id)a scale:(double)b ;
 - (id) initWithCGImage:(^{CGImage=})a imageOrientation:(long long)b ;
 - (BOOL) writeToCPBitmapFile:(id)a flags:(int)b ;
 - (id) _stretchableImageWithCapInsets:({UIEdgeInsets=dddd})a ;
 - (id) _resizableImageWithSubimageInsets:({UIEdgeInsets=dddd})a resizeInsets:({UIEdgeInsets=dddd})b ;
 - ({?=ddddddddd}) _calculateStatistics;
 - (id) _flatImageWithColor:(id)a ;
 - (id) _imageThatSuppressesAccessibilityHairlineThickening;
 - (id) stretchableImageWithLeftCapWidth:(long long)a topCapHeight:(long long)b ;
 - (long long) leftCapWidth;
 - (long long) topCapHeight;
 - (void) compositeToPoint:({CGPoint=dd})a operation:(int)b fraction:(double)c ;
 - (void) draw9PartImageWithSliceRects:({?={?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fraction:(double)c ;
 - (void) draw9PartImageWithSliceRects:({?={?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b operation:(int)c fraction:(double)d ;
 - (void) compositeToPoint:({CGPoint=dd})a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b operation:(int)c fraction:(double)d ;
 - (void) compositeToRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b operation:(int)c fraction:(double)d ;
 - (void) draw3PartImageWithSliceRects:({?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b fraction:(double)c ;
 - (void) draw1PartImageInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fraction:(double)b ;
 - (^{CGColor=}) _tiledPatternColor;
 - (^{CGColor=}) _patternColor;
 - (^{CGImage=}) imageRef;
 - (void) compositeToPoint:({CGPoint=dd})a operation:(int)b ;
 - (void) draw9PartImageWithSliceRects:({?={?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}{?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) draw3PartImageWithSliceRects:({?={CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}{CGRect={CGPoint=dd}{CGSize=dd}}})a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) draw1PartImageInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) _setCached:(BOOL)a ;
 - (BOOL) _isCached;
 - (void) _setNamed:(BOOL)a ;
 - (BOOL) _isInvisibleAndGetIsTranslucent:(^B)a ;
 - (id) _flatImageWithWhite:(double)a alpha:(double)b ;
 - (id) _serializedData;
 - (id) _applicationIconImageForFormat:(int)a precomposed:(BOOL)b scale:(double)c ;
 - (id) _applicationIconImageForFormat:(int)a precomposed:(BOOL)b ;
 - (id) _applyBackdropViewSettings:(id)a allowImageResizing:(BOOL)b ;
 - (id) _applyBackdropViewSettings:(id)a includeTints:(BOOL)b includeBlur:(BOOL)c allowImageResizing:(BOOL)d ;
 - (id) _applyBackdropViewStyle:(long long)a includeTints:(BOOL)b includeBlur:(BOOL)c graphicsQuality:(long long)d ;
 - (id) _applyBackdropViewStyle:(long long)a includeTints:(BOOL)b includeBlur:(BOOL)c graphicsQuality:(long long)d allowImageResizing:(BOOL)e ;
 - (id) _applyBackdropViewSettings:(id)a ;
 - (id) _applyBackdropViewSettings:(id)a includeTints:(BOOL)b includeBlur:(BOOL)c ;
 - (id) _applyBackdropViewStyle:(long long)a includeTints:(BOOL)b includeBlur:(BOOL)c ;
 - (id) _subimageInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) _selectedTabBarItemImageWithTintColor:(id)a metrics:(long long)b style:(long long)c forScreenScale:(double)d ;
 - (id) _unselectedTabBarItemImageWithTintColor:(id)a metrics:(long long)b style:(long long)c forScreenScale:(double)d ;
 - (id) _tabBarItemImageWithTintColor:(id)a selected:(BOOL)b metrics:(long long)c style:(long long)d forScreenScale:(double)e ;
 - (id) _imageForLegibilitySettings:(id)a strength:(double)b ;
 - (void) _drawImageForLegibilitySettings:(id)a strength:(double)b size:({CGSize=dd})c ;
 - (id) _imageForLegibilityStyle:(long long)a ;
 - (void) _drawImageForLegibilityStyle:(long long)a size:({CGSize=dd})b ;
 - (id) _imageWithBrightnessModifiedForLegibilityStyle:(long long)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithData:(id)a ;
 - (void) drawInRect:({CGRect={CGPoint=dd}{CGSize=dd}})a blendMode:(int)b alpha:(double)c ;
 - (long long) renderingMode;
 - (long long) resizingMode;
 - (id) initWithCGImage:(^{CGImage=})a ;
 - (id) initWithData:(id)a cache:(BOOL)b ;


@end
