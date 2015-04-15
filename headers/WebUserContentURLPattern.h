
@interface WebUserContentURLPattern : NSObject {

    WebUserContentURLPatternPrivate _private;
}

 - (void) dealloc;
 - (BOOL) isValid;
 - (id) scheme;
 - (id) host;
 - (id) initWithPatternString:(id)a;
 - (BOOL) matchesSubdomains;
 - (BOOL) matchesURL:(id)a;


@end
