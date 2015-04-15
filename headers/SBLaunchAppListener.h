
@interface SBLaunchAppListener : NSObject {

    NSString* _bundleIdentifier;
    @? _block;
    NSLock* _lock;
    BOOL _launched;
    int _notifyToken;
    int _notifyAppExitedToken;
    unsigned int _notifyRegisterStatus;
    unsigned int _notifyAppExitedStatus;
}
 + (BOOL) waitForLaunchThatSpringBoardKnowsAbout:(id)atimeout:(double)b;

 - (void) dealloc;
 - (void) invalidate;
 - (void) _didLaunch;
 - (void) _didFailToLaunch;
 - (id) initWithBundleIdentifier:(id)ahandlerBlock:(@?)b;


@end
