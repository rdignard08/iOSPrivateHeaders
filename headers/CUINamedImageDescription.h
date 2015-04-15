
@interface CUINamedImageDescription : NSObject {

    double _scale;
    long long _idiom;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    int _blendMode;
    long long _templateRenderingMode;
    long long _imageType;
    {?="top"d"left"d"bottom"d"right"d} _edgeInsets;
    {?="top"d"left"d"bottom"d"right"d} _alignmentEdgeInsets;
    long long _resizingMode;
    int _exifOrientation;
}
@property (nonatomic, assign, readwrite) NSNumber* scale;
@property (nonatomic, assign, readwrite) NSNumber* idiom;
@property (nonatomic, assign, readwrite) NSNumber* subtype;
@property (nonatomic, assign, readwrite) NSNumber* sizeClassHorizontal;
@property (nonatomic, assign, readwrite) NSNumber* sizeClassVertical;
@property (nonatomic, assign, readwrite) NSNumber* blendMode;
@property (nonatomic, assign, readwrite) NSNumber* isTemplate;
@property (nonatomic, assign, readwrite) NSNumber* templateRenderingMode;
@property (nonatomic, assign, readwrite) NSNumber* imageType;
@property (nonatomic, assign, readwrite) NSNumber* edgeInsets;
@property (nonatomic, assign, readwrite) NSNumber* alignmentEdgeInsets;
@property (nonatomic, assign, readwrite) NSNumber* resizingMode;
@property (nonatomic, assign, readwrite) NSNumber* exifOrientation;

 - (double) scale;
 - (id) description;
 - (void) setSizeClassHorizontal:(long long)a;
 - (void) setSizeClassVertical:(long long)a;
 - (void) setTemplateRenderingMode:(long long)a;
 - (void) setAlignmentEdgeInsets:({?=dddd})a;
 - (void) setResizingMode:(long long)a;
 - (void) setImageType:(long long)a;
 - (void) setExifOrientation:(int)a;
 - (long long) templateRenderingMode;
 - (int) blendMode;
 - (void) setBlendMode:(int)a;
 - (int) exifOrientation;
 - (void) setIdiom:(long long)a;
 - (void) setSubtype:(long long)a;
 - (long long) idiom;
 - (long long) sizeClassHorizontal;
 - (long long) sizeClassVertical;
 - ({?=dddd}) edgeInsets;
 - (void) setEdgeInsets:({?=dddd})a;
 - (void) setIsTemplate:(BOOL)a;
 - (BOOL) isTemplate;
 - (long long) imageType;
 - ({?=dddd}) alignmentEdgeInsets;
 - (long long) resizingMode;
 - (long long) subtype;
 - (void) setScale:(double)a;


@end
