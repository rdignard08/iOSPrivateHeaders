
@interface CUIThemeRendition : NSObject {

    [16{_renditionkeytoken="identifier"S"value"S}] _stackKey;
    ^{_renditionkeytoken=SS} _key;
    q _type;
    I _subtype;
    I _scale;
    {?="isHeaderFlaggedFPO"b1"isExcludedFromContrastFilter"b1"isVectorBased"b1"isOpaque"b1"reserved"b28} _renditionFlags;
    q _templateRenderingMode;
    q _artworkStatus;
    Q _colorSpaceID;
    @"NSString" _name;
    @"NSData" _srcData;
    q _validLookGradation;
    d _opacity;
    i _blendMode;
    @"NSString" _utiType;
    i _exifOrientation;
}
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
@property (nonatomic, assign, readwrite) NSNumber* exifOrientation;
 + (id) displayNameForRenditionType:(q)a;
 + (id) filteredCSIDataFromBaseCSIData:(id)a;
 + (Class) renditionClassForRenditionType:(q)aandPixelFormat:(I)b;

 - (d) scale;
 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) name;
 - (void) setExifOrientation:(i)a;
 - (q) type;
 - (r^{_renditionkeytoken=SS}) key;
 - (q) templateRenderingMode;
 - (i) blendMode;
 - (I) gradientStyle;
 - (id) utiType;
 - (BOOL) isVectorBased;
 - (Q) colorSpaceID;
 - (id) gradient;
 - (id) effectPreset;
 - (void) setBlendMode:(i)a;
 - (i) exifOrientation;
 - (void) _initializeRenditionKey:(r^{_renditionkeytoken=SS})a;
 - (S) valueForTokenIdentifier:(S)a;
 - (BOOL) isTiled;
 - (id) imageForSliceIndex:(q)a;
 - (BOOL) isScaled;
 - (id) maskForSliceIndex:(q)a;
 - (^{CGImage=}) unslicedImage;
 - (id) metrics;
 - (id) sliceInformation;
 - (d) gradientDrawingAngle;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (BOOL) isHeaderFlaggedFPO;
 - (q) artworkStatus;
 - (id) _initWithCSIHeader:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (id) _initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})bartworkStatus:(q)c;
 - (^{CGPDFDocument=}) pdfDocument;
 - (void) _initializeTypeIdentifiersWithLayout:(S)a;
 - (void) _initializeCompositingOptionsFromCSIData:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (void) _initalizeMetadataFromCSIData:(r^{_csiheader=IIIIIIIb4b28{_csimetadata=ISS[128c]}I{_csibitmaplist=I[0I]}})a;
 - (id) initWithCSIData:(id)aforKey:(r^{_renditionkeytoken=SS})b;
 - (BOOL) isValidForLookGradation:(q)a;
 - (I) subtype;
 - (d) opacity;
 - (BOOL) isOpaque;
 - (void) setOpacity:(d)a;


@end
