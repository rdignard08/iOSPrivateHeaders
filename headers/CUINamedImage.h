
@interface CUINamedImage : NSObject {

    CUIRenditionKey* _key;
    unsigned long long _storageRef;
    NSString* _name;
    double _scale;
    {_cuiniproperties="isVectorBased"b1"hasSliceInformation"b1"hasAlignmentInformation"b1"resizingMode"b2"templateRenderingMode"b3"exifOrientation"b4"_reserved"b20} _imageProperties;
    NSString* _signature;
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
 - (double) scale;
 - ({CGSize=dd}) size;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (BOOL) hasSliceInformation;
 - (id) baseKey;
 - (void) setName:(id)a;
 - (long long) templateRenderingMode;
 - (int) blendMode;
 - (BOOL) isVectorBased;
 - (int) exifOrientation;
 - (id) _rendition;
 - (id) _themeStore;
 - (id) _renditionForSpecificKey:(id)a;
 - (id) initWithName:(id)ausingRenditionKey:(id)bfromTheme:(unsigned long long)c;
 - (long long) idiom;
 - (long long) sizeClassHorizontal;
 - (long long) sizeClassVertical;
 - (double) positionOfSliceBoundary:(unsigned int)a;
 - (id) renditionKey;
 - ({?=dddd}) edgeInsets;
 - (BOOL) isTemplate;
 - (long long) imageType;
 - ({?=dddd}) alignmentEdgeInsets;
 - (long long) resizingMode;
 - (void) _cacheRenditionProperties;
 - (long long) resizingModeWithSubtype:(long long)a;
 - (BOOL) hasAlignmentInformation;
 - (long long) memoryClass;
 - (long long) graphicsClass;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) alignmentRect;
 - (BOOL) isStructured;
 - (unsigned long long) subtype;
 - (void) setScale:(double)a;
 - (double) opacity;
 - (^{CGImage=}) image;


@end
