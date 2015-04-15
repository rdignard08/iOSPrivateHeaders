
@interface WebNavigationData : NSObject {

    @"WebNavigationDataPrivate" _private;
}

 - (id) title;
 - (void) dealloc;
 - (id) response;
 - (id) originalRequest;
 - (id) url;
 - (id) initWithURLString:(id)atitle:(id)boriginalRequest:(id)cresponse:(id)dhasSubstituteData:(BOOL)eclientRedirectSource:(id)f;
 - (BOOL) hasSubstituteData;
 - (id) clientRedirectSource;


@end
