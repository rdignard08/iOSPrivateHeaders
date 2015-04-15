
@interface NSHTTPURLRequestParameters : NSObject {

    @"NSString" method;
    @"NSMutableDictionary" fields;
    @"NSArray" extraCookies;
    @"NSData" data;
    unsigned long long pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

 - (void) dealloc;
 - (id) init;
 - (id) initWithCoder:(id)a;


@end
