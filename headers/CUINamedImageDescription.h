
@interface CUINamedImageDescription : NSObject {

    d _scale;
    q _idiom;
    q _subtype;
    q _sizeClassHorizontal;
    q _sizeClassVertical;
    i _blendMode;
    q _templateRenderingMode;
    q _imageType;
    {?="top"d"left"d"bottom"d"right"d} _edgeInsets;
    {?="top"d"left"d"bottom"d"right"d} _alignmentEdgeInsets;
    q _resizingMode;
    i _exifOrientation;
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

 - (d) scale;
 - (id) description;
 - (void) setSizeClassHorizontal:(q)a;
 - (void) setSizeClassVertical:(q)a;
 - (void) setTemplateRenderingMode:(q)a;
 - (void) setAlignmentEdgeInsets:({?=dddd})a;
 - (void) setResizingMode:(q)a;
 - (void) setImageType:(q)a;
 - (void) setExifOrientation:(i)a;
 - (q) templateRenderingMode;
 - (i) blendMode;
 - (void) setBlendMode:(i)a;
 - (i) exifOrientation;
 - (void) setIdiom:(q)a;
 - (void) setSubtype:(q)a;
 - (q) idiom;
 - (q) sizeClassHorizontal;
 - (q) sizeClassVertical;
 - ({?=dddd}) edgeInsets;
 - (void) setEdgeInsets:({?=dddd})a;
 - (void) setIsTemplate:(BOOL)a;
 - (BOOL) isTemplate;
 - (q) imageType;
 - ({?=dddd}) alignmentEdgeInsets;
 - (q) resizingMode;
 - (q) subtype;
 - (void) setScale:(d)a;


@end
