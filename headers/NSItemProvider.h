
@protocol NSSecureCoding, NSCopying;
@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

    @? __previewImageHandler;
    @"NSDictionary" _userInfo;
    @"<_NSItemProviderLoading>" __loadOperator;
    @"NSMutableDictionary" __loadHandlers;
}
@property (nonatomic, copy, readwrite) NSNumber* previewImageHandler;
@property (nonatomic, copy, readonly) NSArray* registeredTypeIdentifiers;
@property (nonatomic, copy, readwrite) NSDictionary* userInfo;
@property (nonatomic, retain, readwrite) NSNumber* _loadOperator;
@property (nonatomic, retain, readwrite) NSMutableDictionary* _loadHandlers;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) userInfo;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithItem:(id)atypeIdentifier:(id)b;
 - (void) registerItemForTypeIdentifier:(id)aloadHandler:(@?)b;
 - (id) _loadHandlers;
 - (void) setUserInfo:(id)a;
 - (@?) previewImageHandler;
 - (void) setPreviewImageHandler:(@?)a;
 - (id) _loadOperator;
 - (void) set_loadOperator:(id)a;
 - (id) registeredTypeIdentifiers;
 - (void) _loadItemOfClass:(Class)aforTypeIdentifier:(id)boptions:(id)ccoerceForCoding:(BOOL)dcompletionHandler:(@?)e;
 - (BOOL) hasItemConformingToTypeIdentifier:(id)a;
 - (void) _loadItemOfClass:(Class)awithLoadHandler:(@?)boptions:(id)ccoerceForCoding:(BOOL)dcompletionHandler:(@?)e;
 - (id) initWithContentsOfURL:(id)a;
 - (void) loadItemForTypeIdentifier:(id)aoptions:(id)bcompletionHandler:(@?)c;
 - (void) _loadPreviewImageOfClass:(Class)aoptions:(id)bcoerceForCoding:(BOOL)ccompletionHandler:(@?)d;
 - (void) set_loadHandlers:(id)a;
 - (void) loadPreviewImageWithOptions:(id)acompletionHandler:(@?)b;


@end
