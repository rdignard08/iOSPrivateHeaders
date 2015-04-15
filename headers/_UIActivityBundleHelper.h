
@interface _UIActivityBundleHelper : NSObject {

    @"LSBundleProxy" _bundleProxy;
}
@property (nonatomic, retain, readwrite) LSBundleProxy* bundleProxy;
 + (id) activityBundleHelperForExtension:(id)a;

 - (id) localizedName;
 - (void) dealloc;
 - (id) initWithBundleProxy:(id)a;
 - (void) setBundleProxy:(id)a;
 - (id) bundleProxy;
 - (id) activityImageForApplicationBundleURL:(id)aapplicationIconFormat:(int)bactivityCategory:(long long)c;
 - (double) preferredImageScale;
 - (id) imageForApplicationIconFormat:(int)aactivityCategory:(long long)b;
 - (id) debugDescription;


@end
