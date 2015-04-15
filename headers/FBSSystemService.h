
@interface FBSSystemService : NSObject {

}
 + (id) sharedService;

 - (void) openURL:(id)a application:(id)b options:(id)c clientPort:(unsigned int)d withResult:(@?)e ;
 - (void) cleanupClientPort:(unsigned int)a ;
 - (unsigned int) createClientPort;
 - (void) openApplication:(id)a options:(id)b clientPort:(unsigned int)c withResult:(@?)d ;
 - (void) dealloc;
 - (id) init;
 - (void) setBadgeValue:(id)a forBundleID:(id)b ;
 - (void) sendActions:(id)a withResult:(@?)b ;
 - (id) _badArgumentError;
 - (void) reboot;
 - (void) shutdown;
 - (id) systemApplicationBundleIdentifier;
 - (int) pidForApplication:(id)a ;
 - (BOOL) canOpenApplication:(id)a reason:(^q)b ;
 - (void) openDataActivationURL:(id)a withResult:(@?)b ;
 - (void) openApplication:(id)a options:(id)b withResult:(@?)c ;
 - (void) terminateApplication:(id)a forReason:(long long)b andReport:(BOOL)c withDescription:(id)d ;
 - (void) terminateApplicationGroup:(long long)a forReason:(long long)b andReport:(BOOL)c withDescription:(id)d ;
 - (void) fireCompletion:(@?)a error:(id)b ;
 - (id) clientCallbackQueue;


@end
