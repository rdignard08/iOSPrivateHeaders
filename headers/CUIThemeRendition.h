
@interface CUIThemeRendition : NSObject {

    [16{_renditionkeytoken="identifier"S"value"S}] _stackKey;
    ^{_renditionkeytoken=SS} _key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    {?="isHeaderFlaggedFPO"b1"isExcludedFromContrastFilter"b1"isVectorBased"b1"isOpaque"b1"reserved"b28} _renditionFlags;
    long long _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString* _name;
    NSData* _srcData;
    long long _validLookGradation;
    double _opacity;
    int _blendMode;
    NSString* _utiType;
    int _exifOrientation;
}
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
@property (nonatomic, assign, readwrite) NSNumber* exifOrientation;
 + (id) displayNameForRenditionType:(long long)a;
 + (id) filteredCSIDataFromBaseCSIData:(id)a;
 + (Class) renditionClassForRenditionType:(long long)aandPixelFormat:(unsigned int)b;

 - (double) scale;
 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) name;
 - (void) setExifOrientation:(int)a ;
 - (long long) type;
 - (r^{_renditionkeytoken=SS}) key;
 - (long long) templateRenderingMode;
 - (int) blendMode;
 - (unsigned int) gradientStyle;
 - (id) utiType;
 - (BOOL) isVectorBased;
 - (unsigned long long) colorSpaceID;
 - (id) gradient;
 - (id) effectPreset;
 - (void) setBlendMode:(int)a ;
 - (int) exifOrientation;
 - (void) _initializeRenditionKey:(r^{_renditionkeytoken=SS})a ;
 - (unsigned short) valueForTokenIdentifier:(unsigned short)a ;
 - (BOOL) isTiled;
 - (id) imageForSliceIndex:(long long)a ;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(long long)a ;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (double) gradientDrawingAngle;
 - (id) initWithCSIData:(id)a forKey:(r^{_renditionkeytoken=SS})b artworkStatus:(long long)c ;
 - (BOOL) isHeaderFlaggedFPO;
 - (long long) artworkStatus;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;
 - (id) _initWithCSIData:(id)a forKey:(r^{_renditionkeytoken=SS})b artworkStatus:(long long)c ;
 - (^{CGPDFDocument=}) pdfDocument;
 - (void) _initializeTypeIdentifiersWithLayout:(unsigned short)a ;
 - (void) _initializeCompositingOptionsFromCSIData:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;
 - (void) _initalizeMetadataFromCSIData:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a ;
 - (id) initWithCSIData:(id)a forKey:(r^{_renditionkeytoken=SS})b ;
 - (BOOL) isValidForLookGradation:(long long)a ;
 - (unsigned int) subtype;
 - (double) opacity;
 - (BOOL) isOpaque;
 - (void) setOpacity:(double)a ;


@end
