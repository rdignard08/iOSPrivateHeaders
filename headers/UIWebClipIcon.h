
@interface UIWebClipIcon : NSObject {

    BOOL _precomposed;
    BOOL _siteWide;
    {CGSize="width"d"height"d} _bestSize;
    NSURL* _url;
}
@property (nonatomic, assign, readwrite, getter=isPrecomposed) NSNumber* precomposed;
@property (nonatomic, assign, readwrite, getter=isSiteWide) NSNumber* siteWide;
@property (nonatomic, assign, readwrite) NSNumber* bestSize;
@property (nonatomic, retain, readwrite) NSURL* url;

 - (void) dealloc;
 - (void) setUrl:(id)a ;
 - (BOOL) isSiteWide;
 - ({CGSize=dd}) bestSize;
 - (BOOL) isPrecomposed;
 - (long long) compare:(id)a preferringDeviceIconSizes:(BOOL)b ;
 - (void) setPrecomposed:(BOOL)a ;
 - (void) setSiteWide:(BOOL)a ;
 - (void) setBestSize:({CGSize=dd})a ;
 - (id) url;


@end
