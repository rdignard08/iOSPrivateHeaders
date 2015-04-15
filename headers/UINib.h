
@interface UINib : NSObject {

    id storage;
}
 + (id) nibWithNibName:(id)abundle:(id)b;
 + (id) nibWithData:(id)abundle:(id)b;

 - (id) initWithContentsOfFile:(id)a;
 - (void) dealloc;
 - (id) instantiateWithOwner:(id)aoptions:(id)b;
 - (id) initWithNibName:(id)adirectory:(id)bbundle:(id)c;
 - (id) identifierForStringsFile;
 - (void) setIdentifierForStringsFile:(id)a;
 - (BOOL) instantiatingForSimulator;
 - (void) setInstantiatingForSimulator:(BOOL)a;
 - (BOOL) captureImplicitLoadingContextOnDecode;
 - (void) setCaptureImplicitLoadingContextOnDecode:(BOOL)a;
 - (id) initWithBundle:(id)a;
 - (void) _registerForMemoryWarningIfNeeded;
 - (id) nibDataForPath:(id)a;
 - (id) initWithData:(id)abundle:(id)b;
 - (void) didReceiveMemoryWarning:(id)a;
 - (id) effectiveBundle;
 - (id) bundleResourcePath;
 - (id) lazyArchiveData;
 - (id) unarchiverForInstantiatingReturningError:(^@)a;
 - (BOOL) captureEnclosingNIBBundleOnDecode;
 - (void) setCaptureEnclosingNIBBundleOnDecode:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
