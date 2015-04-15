
@interface _UIActivityBundleHelper : NSObject {

    LSBundleProxy* _bundleProxy;
}
@property (nonatomic, retain, readwrite) LSBundleProxy* bundleProxy;
 + (id) activityBundleHelperForExtension:(id)a;

 - (id) localizedName;
 - (void) dealloc;
 - (id) initWithBundleProxy:(id)a ;
 - (void) setBundleProxy:(id)a ;
 - (id) bundleProxy;
 - (id) activityImageForApplicationBundleURL:(id)a applicationIconFormat:(int)b activityCategory:(long long)c ;
 - (double) preferredImageScale;
 - (id) imageForApplicationIconFormat:(int)a activityCategory:(long long)b ;
 - (id) debugDescription;


@end
