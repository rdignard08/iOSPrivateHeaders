
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
 - (id) activityImageForApplicationBundleURL:(id)aapplicationIconFormat:(i)bactivityCategory:(q)c;
 - (d) preferredImageScale;
 - (id) imageForApplicationIconFormat:(i)aactivityCategory:(q)b;
 - (id) debugDescription;


@end
