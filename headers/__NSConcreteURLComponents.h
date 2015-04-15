
@protocol NSCopying;
@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

    int _lock;
    NSString _urlString;
    {_URIParseInfo="userinfoNameOffset"q"userinfoPasswordOffset"q"hostOffset"q"portOffset"q"pathOffset"q"paramOffset"q"queryOffset"q"fragmentOffset"q"endOffset"q"schemeExists"b1"authorityExists"b1"userinfoNameExists"b1"userinfoPasswordExists"b1"hostExists"b1"portExists"b1"paramExists"b1"queryExists"b1"fragmentExists"b1} _parseInfo;
    b1 _schemeComponentValid;
    b1 _userComponentValid;
    b1 _passwordComponentValid;
    b1 _hostComponentValid;
    b1 _portComponentValid;
    b1 _pathComponentValid;
    b1 _queryComponentValid;
    b1 _fragmentComponentValid;
    NSString _schemeComponent;
    NSString _userComponent;
    NSString _passwordComponent;
    NSString _hostComponent;
    NSNumber _portComponent;
    NSString _pathComponent;
    NSString _queryComponent;
    NSString _fragmentComponent;
}
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;

 - (void) setScheme:(id)a;
 - (void) setQueryItems:(id)a;
 - (id) queryItems;
 - (void) setPort:(id)a;
 - (id) percentEncodedPath;
 - (id) percentEncodedHost;
 - (id) percentEncodedQuery;
 - (id) percentEncodedFragment;
 - (id) percentEncodedUser;
 - (id) percentEncodedPassword;
 - (void) freeIvars;
 - (id) URLRelativeToURL:(id)a;
 - (void) setPercentEncodedQuery:(id)a;
 - (id) initWithURL:(id)aresolvingAgainstBaseURL:(BOOL)b;
 - (void) setUser:(id)a;
 - (void) setPassword:(id)a;
 - (void) setHost:(id)a;
 - (void) setFragment:(id)a;
 - (void) setPercentEncodedUser:(id)a;
 - (void) setPercentEncodedPassword:(id)a;
 - (void) setPercentEncodedHost:(id)a;
 - (void) setPercentEncodedPath:(id)a;
 - (void) setPercentEncodedFragment:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) string;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) scheme;
 - (id) host;
 - (id) port;
 - (id) user;
 - (id) password;
 - (id) fragment;
 - (id) query;
 - (id) initWithString:(id)a;
 - (void) setQuery:(id)a;
 - (id) init;
 - (id) URL;
 - (void) setPath:(id)a;
 - (id) path;


@end
