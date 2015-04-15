
@protocol NSSecureCoding, NSCopying;
@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

    @? __previewImageHandler;
    NSDictionary* _userInfo;
    <_NSItemProviderLoading>* __loadOperator;
    NSMutableDictionary* __loadHandlers;
}
@property (nonatomic, copy, readwrite) NSNumber* previewImageHandler;
@property (nonatomic, copy, readonly) NSArray* registeredTypeIdentifiers;
@property (nonatomic, copy, readwrite) NSDictionary* userInfo;
@property (nonatomic, retain, readwrite) NSNumber* _loadOperator;
@property (nonatomic, retain, readwrite) NSMutableDictionary* _loadHandlers;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithItem:(id)a typeIdentifier:(id)b ;
 - (void) registerItemForTypeIdentifier:(id)a loadHandler:(@?)b ;
 - (id) _loadHandlers;
 - (void) setUserInfo:(id)a ;
 - (@?) previewImageHandler;
 - (void) setPreviewImageHandler:(@?)a ;
 - (id) _loadOperator;
 - (void) set_loadOperator:(id)a ;
 - (id) registeredTypeIdentifiers;
 - (void) _loadItemOfClass:(Class)a forTypeIdentifier:(id)b options:(id)c coerceForCoding:(BOOL)d completionHandler:(@?)e ;
 - (BOOL) hasItemConformingToTypeIdentifier:(id)a ;
 - (void) _loadItemOfClass:(Class)a withLoadHandler:(@?)b options:(id)c coerceForCoding:(BOOL)d completionHandler:(@?)e ;
 - (id) initWithContentsOfURL:(id)a ;
 - (void) loadItemForTypeIdentifier:(id)a options:(id)b completionHandler:(@?)c ;
 - (void) _loadPreviewImageOfClass:(Class)a options:(id)b coerceForCoding:(BOOL)c completionHandler:(@?)d ;
 - (void) set_loadHandlers:(id)a ;
 - (void) loadPreviewImageWithOptions:(id)a completionHandler:(@?)b ;


@end
