
@interface _UIAssetManager : NSObject {

    _UICache* _imageCache;
    CUICatalog* _catalog;
    NSString* _assetManagerName;
    long long _preferredIdiom;
    double _preferredScale;
    unsigned long long _preferredIdiomSubtype;
    NSBundle* _bundle;
    NSMapTable* _assetMap;
    CUIMutableCatalog* _runtimeCatalog;
    long long onceToken_runtimeCatalog;
    UITraitCollection* _preferredTraitCollection;
    _UIAssetManager* _starkAssetManager;
    long long _starkAssetManagerOnceToken;
    BOOL _isStarkAssetManager;
    BOOL _managingUIKitAssets;
    _UIAssetManager* _nextAssetManager;
}
@property (nonatomic, retain, readwrite) _UIAssetManager* nextAssetManager;
@property (nonatomic, assign, readwrite) NSNumber* preferredScale;
@property (nonatomic, retain, readwrite) UITraitCollection* preferredTraitCollection;
@property (nonatomic, assign, readonly) NSString* carFileName;
@property (nonatomic, assign, readonly) CUIMutableCatalog* runtimeCatalog;
@property (nonatomic, assign, readonly) NSBundle* bundle;
@property (nonatomic, assign, readonly, getter=_managingUIKitAssets) NSNumber* managingUIKitAssets;
 + (id) assetManagerForBundle:(id)a;
 + (id) createAssetNamed:(id)afromBundle:(id)b;
 + (long long) _userInterfaceIdiomForDeviceClass:(unsigned long long)a;
 + (void) _convertTraitCollection:(id)atoCUIScale:(^d)bCUIIdiom:(^q)cUIKitIdiom:(^q)dsubtype:(^q)e;
 + (id) sharedRuntimeAssetMap;
 + (id) sharedRuntimeCatalog;

 - (id) description;
 - (void) dealloc;
 - (id) initWithName:(id)a inBundle:(id)b idiom:(long long)c ;
 - (id) imageNamed:(id)a withTrait:(id)b ;
 - (id) imageNamed:(id)a ;
 - (id) dataNamed:(id)a ;
 - (void) setPreferredScale:(double)a ;
 - (void) setPreferredTraitCollection:(id)a ;
 - (BOOL) _imageBelongsToUIKit:(id)a ;
 - (void) setNextAssetManager:(id)a ;
 - (void) _clearCachedResources:(id)a ;
 - (void) disableCacheFlushing;
 - (id) imageNamed:(id)a scale:(double)b idiom:(long long)c subtype:(unsigned long long)d cachingOptions:(unsigned long long)e sizeClassPair:({?=qq})f attachCatalogImage:(BOOL)g ;
 - (BOOL) _starkAssetManager;
 - (double) preferredScale;
 - (id) preferredTraitCollection;
 - (id) _assetFromMapForName:(id)a ;
 - (void) _insertAssetIntoMap:(id)a forName:(id)b ;
 - (id) imageNamed:(id)a scale:(double)b idiom:(long long)c subtype:(unsigned long long)d ;
 - (id) imageNamed:(id)a idiom:(long long)b subtype:(unsigned long long)c ;
 - (id) imageNamed:(id)a idiom:(long long)b ;
 - (id) _catalog;
 - (id) carFileName;
 - (void) _removeAssetFromMap:(id)a ;
 - (id) runtimeCatalog;
 - (id) nextAssetManager;
 - (BOOL) _managingUIKitAssets;
 - (id) bundle;


@end
