
@interface UIWebClipLinkTag : NSObject {

    BOOL _mediaMatchesPortraitOrientation;
    BOOL _mediaMatchesLandscapeOrientation;
    @"NSString" _href;
    @"NSString" _rel;
    @"NSString" _sizes;
}
@property (nonatomic, copy, readwrite) NSString* href;
@property (nonatomic, assign, readonly) NSURL* hrefURL;
@property (nonatomic, copy, readwrite) NSString* rel;
@property (nonatomic, copy, readwrite) NSString* sizes;
@property (nonatomic, assign, readwrite) NSNumber* mediaMatchesPortraitOrientation;
@property (nonatomic, assign, readwrite) NSNumber* mediaMatchesLandscapeOrientation;

 - (void) dealloc;
 - (id) hrefURL;
 - (id) href;
 - (void) setHref:(id)a;
 - (id) rel;
 - (void) setRel:(id)a;
 - (id) sizes;
 - (void) setSizes:(id)a;
 - (BOOL) mediaMatchesPortraitOrientation;
 - (void) setMediaMatchesPortraitOrientation:(BOOL)a;
 - (BOOL) mediaMatchesLandscapeOrientation;
 - (void) setMediaMatchesLandscapeOrientation:(BOOL)a;


@end
