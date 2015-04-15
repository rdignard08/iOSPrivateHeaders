
@interface UINib : NSObject {

    id storage;
}
 + (id) nibWithNibName:(id)abundle:(id)b;
 + (id) nibWithData:(id)abundle:(id)b;

 - (id) initWithContentsOfFile:(id)a ;
 - (void) dealloc;
 - (id) instantiateWithOwner:(id)a options:(id)b ;
 - (id) initWithNibName:(id)a directory:(id)b bundle:(id)c ;
 - (id) identifierForStringsFile;
 - (void) setIdentifierForStringsFile:(id)a ;
 - (BOOL) instantiatingForSimulator;
 - (void) setInstantiatingForSimulator:(BOOL)a ;
 - (BOOL) captureImplicitLoadingContextOnDecode;
 - (void) setCaptureImplicitLoadingContextOnDecode:(BOOL)a ;
 - (id) initWithBundle:(id)a ;
 - (void) _registerForMemoryWarningIfNeeded;
 - (id) nibDataForPath:(id)a ;
 - (id) initWithData:(id)a bundle:(id)b ;
 - (void) didReceiveMemoryWarning:(id)a ;
 - (id) effectiveBundle;
 - (id) bundleResourcePath;
 - (id) lazyArchiveData;
 - (id) unarchiverForInstantiatingReturningError:(^@)a ;
 - (BOOL) captureEnclosingNIBBundleOnDecode;
 - (void) setCaptureEnclosingNIBBundleOnDecode:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
