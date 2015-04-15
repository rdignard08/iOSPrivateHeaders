
@interface NSHost : NSObject {

    NSArray* names;
    NSArray* addresses;
    id reserved;
}
@property (atomic, copy, readonly) NSString* name;
@property (atomic, copy, readonly) NSArray* names;
@property (atomic, copy, readonly) NSString* address;
@property (atomic, copy, readonly) NSArray* addresses;
@property (atomic, copy, readonly) NSString* localizedName;
@property (nonatomic, retain, readwrite) __NSHostExtraIvars* reserved;
 + (id) currentHost;
 + (id) hostWithName:(id)a;
 + (id) hostWithAddress:(id)a;
 + (BOOL) isHostCacheEnabled;
 + (void) setHostCacheEnabled:(BOOL)a;
 + (void) flushHostCache;

 - (id) localizedName;
 - (id) address;
 - (id) _thingToResolve;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) setReserved:(id)a;
 - (id) reserved;
 - (id) initToResolve:(id)aas:(int)b;
 - (void) __resolveWithFlags:(int)aresultArray:(id)bhandler:(@?)c;
 - (void) resolveCurrentHostWithHandler:(@?)a;
 - (void) resolve:(@?)a;
 - (id) addresses;
 - (void) blockingResolveUntil:(int)a;
 - (id) names;
 - (BOOL) isEqualToHost:(id)a;


@end
