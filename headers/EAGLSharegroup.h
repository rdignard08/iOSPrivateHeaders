
@interface EAGLSharegroup : NSObject {

    ^{_EAGLSharegroupPrivate=QiB{__GLDPixelFormatRec=^{__GLDPixelFormatRec}IIIIIIIssssICCCCI}^{__GLISharedRec}} _private;
    NSString* debugLabel;
}
@property (nonatomic, copy, readwrite) NSString* debugLabel;

 - (void) dealloc;
 - (id) init;
 - (id) initWithAPI:(unsigned long long)a sharedWithCompute:(BOOL)b ;
 - (unsigned long long) APIs;
 - (void) setDebugLabel:(id)a ;
 - (id) debugLabel;
 - (void) loadGLIPlugin:(^{__GLDPixelFormatRec=^{__GLDPixelFormatRec}IIIIIIIssssICCCCI})a sharedWithCompute:(BOOL)b ;
 - (^{__GLISharedRec=}) getGLIShared;
 - (id) initWithAPI:(unsigned long long)a ;


@end
