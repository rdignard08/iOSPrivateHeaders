
@interface WebNavigationData : NSObject {

    WebNavigationDataPrivate* _private;
}

 - (id) title;
 - (void) dealloc;
 - (id) response;
 - (id) originalRequest;
 - (id) url;
 - (id) initWithURLString:(id)a title:(id)b originalRequest:(id)c response:(id)d hasSubstituteData:(BOOL)e clientRedirectSource:(id)f ;
 - (BOOL) hasSubstituteData;
 - (id) clientRedirectSource;


@end
