
@interface SBLaunchAppListener : NSObject {

    @"NSString" _bundleIdentifier;
    @? _block;
    @"NSLock" _lock;
    BOOL _launched;
    i _notifyToken;
    i _notifyAppExitedToken;
    I _notifyRegisterStatus;
    I _notifyAppExitedStatus;
}
 + (BOOL) waitForLaunchThatSpringBoardKnowsAbout:(id)atimeout:(d)b;

 - (void) dealloc;
 - (void) invalidate;
 - (void) _didLaunch;
 - (void) _didFailToLaunch;
 - (id) initWithBundleIdentifier:(id)ahandlerBlock:(@?)b;


@end
