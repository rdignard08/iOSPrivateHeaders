
@interface UINibStorage : NSObject {

    NSString bundleResourceName;
    NSString bundleDirectoryName;
    NSBundle bundle;
    NSString identifierForStringsFile;
    NSData archiveData;
    UINibDecoder nibDecoder;
    BOOL instantiatingForSimulator;
    BOOL captureImplicitLoadingContextOnDecode;
}
@property (nonatomic, copy, readwrite) NSString* bundleResourceName;
@property (nonatomic, copy, readwrite) NSString* bundleDirectoryName;
@property (nonatomic, retain, readwrite) NSBundle* bundle;
@property (nonatomic, copy, readwrite) NSString* identifierForStringsFile;
@property (nonatomic, copy, readwrite) NSData* archiveData;
@property (nonatomic, retain, readwrite) UINibDecoder* nibDecoder;
@property (nonatomic, assign, readwrite) NSNumber* instantiatingForSimulator;
@property (atomic, assign, readwrite) NSNumber* captureImplicitLoadingContextOnDecode;

 - (void) dealloc;
 - (id) bundleResourceName;
 - (void) setBundleResourceName:(id)a;
 - (id) bundleDirectoryName;
 - (void) setBundleDirectoryName:(id)a;
 - (void) setBundle:(id)a;
 - (id) identifierForStringsFile;
 - (void) setIdentifierForStringsFile:(id)a;
 - (id) archiveData;
 - (void) setArchiveData:(id)a;
 - (id) nibDecoder;
 - (void) setNibDecoder:(id)a;
 - (BOOL) instantiatingForSimulator;
 - (void) setInstantiatingForSimulator:(BOOL)a;
 - (BOOL) captureImplicitLoadingContextOnDecode;
 - (void) setCaptureImplicitLoadingContextOnDecode:(BOOL)a;
 - (id) bundle;


@end
