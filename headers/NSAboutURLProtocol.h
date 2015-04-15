
@interface NSAboutURLProtocol : NSURLProtocol {

}
 + (id) canonicalRequestForRequest:(id)a;
 + (BOOL) canInitWithRequest:(id)a;

 - (void) startLoading;
 - (void) stopLoading;


@end
