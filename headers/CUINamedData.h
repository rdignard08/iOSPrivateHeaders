
@interface CUINamedData : NSObject {

    CUIRenditionKey _key;
    unsigned long long _storageRef;
    NSString _name;
}
@property (nonatomic, copy, readwrite) NSString* name;
@property (nonatomic, assign, readonly) NSString* utiType;
@property (nonatomic, assign, readonly) NSData* data;

 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) name;
 - (void) setName:(id)a;
 - (id) utiType;
 - (id) _rendition;
 - (id) _themeStore;
 - (id) _renditionForSpecificKey:(id)a;
 - (id) _renditionName;
 - (id) initWithName:(id)ausingRenditionKey:(id)bfromTheme:(unsigned long long)c;


@end
