
@interface CUINamedImage : NSObject {

    @"CUIRenditionKey" _key;
    Q _storageRef;
    @"NSString" _name;
    d _scale;
    {_cuiniproperties="isVectorBased"b1"hasSliceInformation"b1"hasAlignmentInformation"b1"resizingMode"b2"templateRenderingMode"b3"exifOrientation"b4"_reserved"b20} _imageProperties;
    @"NSString" _signature;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, assign, readonly) NSNumber* image;
@property (nonatomic, assign, readonly) NSNumber* size;
@property (nonatomic, assign, readwrite) NSNumber* scale;
@property (nonatomic, assign, readonly) NSNumber* imageType;
@property (nonatomic, assign, readonly) NSNumber* edgeInsets;
@property (nonatomic, assign, readonly) NSNumber* resizingMode;
@property (nonatomic, assign, readonly) NSNumber* opacity;
@property (nonatomic, assign, readonly) NSNumber* alignmentEdgeInsets;
@property (nonatomic, assign, readonly) NSNumber* blendMode;
@property (nonatomic, assign, readonly) NSNumber* hasSliceInformation;
@property (nonatomic, assign, readonly) NSNumber* hasAlignmentInformation;
@property (nonatomic, assign, readonly) NSNumber* isVectorBased;
@property (nonatomic, assign, readonly) NSNumber* isTemplate;
@property (nonatomic, assign, readonly) NSNumber* templateRenderingMode;
@property (nonatomic, assign, readonly) NSNumber* isStructured;
@property (nonatomic, assign, readonly) NSNumber* exifOrientation;

 - (id) traitCollection;
 - (id) UIImage;
 - (d) scale;
 - ({CGSize=dd}) size;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (BOOL) hasSliceInformation;
 - (id) baseKey;
 - (void) setName:(id)a;
 - (q) templateRenderingMode;
 - (i) blendMode;
 - (BOOL) isVectorBased;
 - (i) exifOrientation;
 - (id) _rendition;
 - (id) _themeStore;
 - (id) _renditionForSpecificKey:(id)a;
 - (id) initWithName:(id)ausingRenditionKey:(id)bfromTheme:(Q)c;
 - (q) idiom;
 - (q) sizeClassHorizontal;
 - (q) sizeClassVertical;
 - (d) positionOfSliceBoundary:(I)a;
 - (id) renditionKey;
 - ({?=dddd}) edgeInsets;
 - (BOOL) isTemplate;
 - (q) imageType;
 - ({?=dddd}) alignmentEdgeInsets;
 - (q) resizingMode;
 - (void) _cacheRenditionProperties;
 - (q) resizingModeWithSubtype:(q)a;
 - (BOOL) hasAlignmentInformation;
 - (q) memoryClass;
 - (q) graphicsClass;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) alignmentRect;
 - (BOOL) isStructured;
 - (Q) subtype;
 - (void) setScale:(d)a;
 - (d) opacity;
 - (^{CGImage=}) image;


@end
