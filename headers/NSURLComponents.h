
@protocol NSCopying;
@interface NSURLComponents : NSObject <NSCopying> {

}
@property (atomic, copy, readonly) NSURL* URL;
@property (atomic, copy, readonly) NSString* string;
@property (atomic, copy, readwrite) NSString* scheme;
@property (atomic, copy, readwrite) NSString* user;
@property (atomic, copy, readwrite) NSString* password;
@property (atomic, copy, readwrite) NSString* host;
@property (atomic, copy, readwrite) NSNumber* port;
@property (atomic, copy, readwrite) NSString* path;
@property (atomic, copy, readwrite) NSString* query;
@property (atomic, copy, readwrite) NSString* fragment;
@property (atomic, copy, readwrite) NSString* percentEncodedUser;
@property (atomic, copy, readwrite) NSString* percentEncodedPassword;
@property (atomic, copy, readwrite) NSString* percentEncodedHost;
@property (atomic, copy, readwrite) NSString* percentEncodedPath;
@property (atomic, copy, readwrite) NSString* percentEncodedQuery;
@property (atomic, copy, readwrite) NSString* percentEncodedFragment;
@property (atomic, copy, readwrite) NSArray* queryItems;
 + (id) componentsWithURL:(id)aresolvingAgainstBaseURL:(BOOL)b;
 + (id) componentsWithString:(id)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) setScheme:(id)a ;
 - (void) setQueryItems:(id)a ;
 - (id) queryItems;
 - (void) setPort:(id)a ;
 - (id) percentEncodedPath;
 - (id) percentEncodedHost;
 - (id) percentEncodedQuery;
 - (id) percentEncodedFragment;
 - (id) percentEncodedUser;
 - (id) percentEncodedPassword;
 - (id) URLRelativeToURL:(id)a ;
 - (void) setPercentEncodedQuery:(id)a ;
 - (id) initWithURL:(id)a resolvingAgainstBaseURL:(BOOL)b ;
 - (void) setUser:(id)a ;
 - (void) setPassword:(id)a ;
 - (void) setHost:(id)a ;
 - (void) setFragment:(id)a ;
 - (void) setPercentEncodedUser:(id)a ;
 - (void) setPercentEncodedPassword:(id)a ;
 - (void) setPercentEncodedHost:(id)a ;
 - (void) setPercentEncodedPath:(id)a ;
 - (void) setPercentEncodedFragment:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) string;
 - (id) scheme;
 - (id) host;
 - (id) port;
 - (id) user;
 - (id) password;
 - (id) fragment;
 - (id) query;
 - (id) initWithString:(id)a ;
 - (void) setQuery:(id)a ;
 - (id) init;
 - (id) URL;
 - (void) setPath:(id)a ;
 - (id) path;


@end
