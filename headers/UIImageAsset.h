
@protocol NSSecureCoding;
@interface UIImageAsset : NSObject <NSSecureCoding> {

    _UIAssetManager* _assetManager;
    BOOL _cacheContents;
    UITraitCollection* _defaultTraitCollection;
    {?="hasRegisteredImages"b1"supportsBlockGeneration"b1} _assetFlags;
    NSString* _assetName;
    @? _creationBlock;
}
@property (nonatomic, copy, readwrite) NSString* assetName;
@property (nonatomic, assign, readonly) _UIAssetManager* _assetManager;
@property (nonatomic, copy, readwrite) NSNumber* creationBlock;
 + (BOOL) supportsSecureCoding;
 + (id) _assetGeneratingImagesWithDrawingBlock:(@?)a;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (id) imageWithTraitCollection:(id)a ;
 - (void) _registerImage:(id)a withTraitCollection:(id)b cache:(BOOL)c ;
 - (id) assetName;
 - (id) _defaultTraitCollection;
 - (id) _initWithAssetName:(id)a forManager:(id)b ;
 - (void) _clearResolvedImageResources;
 - (id) _assetManager;
 - (void) setCreationBlock:(@?)a ;
 - (id) _mutableCatalog;
 - (id) _updateAssetFromBlockGenerationWithTraitCollection:(id)a resolvedCatalogImage:(id)b ;
 - (@?) creationBlock;
 - (void) registerImage:(id)a withTraitCollection:(id)b ;
 - (void) unregisterImageWithTraitCollection:(id)a ;
 - (void) setAssetName:(id)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
