
@interface LSResourceProxy : NSObject {

    NSString* _localizedName;
    NSString* _boundApplicationIdentifier;
    NSURL* _boundContainerURL;
    NSURL* _boundDataContainerURL;
    NSURL* _boundResourcesDirURL;
    NSDictionary* _boundIconsDictionary;
    NSString* _boundIconCacheKey;
    NSArray* _boundIconFileNames;
    LSApplicationProxy* _typeOwner;
    BOOL _boundIconIsPrerendered;
    BOOL _boundIconIsBadge;
}
@property (nonatomic, assign, readonly) NSString* localizedName;
@property (nonatomic, assign, readonly) NSNumber* boundIconIsBadge;
@property (nonatomic, assign, readonly) NSDictionary* iconsDictionary;
 + (long long) _compareApplicationIconCanvasSize:({CGSize=dd})awithSize:({CGSize=dd})b;
 + ({CGSize=dd}) _applicationIconCanvasSize;

 - (^{?=i{CGSize=dd}}) _iconDefinitionForSize:({CGSize=dd})a style:(id)b ;
 - (^{?=i{CGSize=dd}}) _iconVariantDefinitions:(id)a ;
 - ({CGSize=dd}) _largestImageSize:(id)a ;
 - ({CGSize=dd}) _defaultStyleSize:(id)a ;
 - (id) _iconForStyle:(id)a size:({CGSize=dd})b ;
 - (id) _iconForStyle:(id)a ;
 - (id) localizedName;
 - (void) setBoundApplicationIdentifier:(id)a ;
 - (void) setBoundContainerURL:(id)a ;
 - (void) setBoundDataContainerURL:(id)a ;
 - (void) setBoundResourcesDirectoryURL:(id)a ;
 - (void) setBoundIconsDictionary:(id)a ;
 - (void) setBoundIconCacheKey:(id)a ;
 - (void) setBoundIconFileNames:(id)a ;
 - (void) setTypeOwner:(id)a ;
 - (void) setBoundIconIsPrerendered:(BOOL)a ;
 - (void) setBoundIconIsBadge:(BOOL)a ;
 - (id) _initWithLocalizedName:(id)a boundApplicationIdentifier:(id)b boundContainerURL:(id)c dataContainerURL:(id)d boundResourcesDirectoryURL:(id)e boundIconsDictionary:(id)f boundIconCacheKey:(id)g boundIconFileNames:(id)h typeOwner:(id)i boundIconIsPrerendered:(BOOL)j boundIconIsBadge:(BOOL)k ;
 - (id) boundIconsDictionary;
 - (id) typeOwner;
 - (id) boundResourcesDirectoryURL;
 - (id) boundApplicationIdentifier;
 - (id) boundContainerURL;
 - (id) iconStyleDomain;
 - (id) boundIconCacheKey;
 - (BOOL) boundIconIsPrerendered;
 - (id) boundIconFileNames;
 - (BOOL) boundIconIsBadge;
 - (id) boundDataContainerURL;
 - (id) _initWithLocalizedName:(id)a ;
 - (void) setLocalizedName:(id)a ;
 - (id) iconsDictionary;
 - (id) iconDataForVariant:(int)a ;
 - (void) dealloc;
 - (id) iconDataForStyle:(id)a width:(long long)b height:(long long)c options:(unsigned long long)d ;


@end
