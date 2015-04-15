
@interface FBSSystemService : NSObject {

}
 + (id) sharedService;

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(unsigned int)dwithResult:(@?)e;
 - (void) cleanupClientPort:(unsigned int)a;
 - (unsigned int) createClientPort;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(unsigned int)cwithResult:(@?)d;
 - (void) dealloc;
 - (id) init;
 - (void) setBadgeValue:(id)aforBundleID:(id)b;
 - (void) sendActions:(id)awithResult:(@?)b;
 - (id) _badArgumentError;
 - (void) reboot;
 - (void) shutdown;
 - (id) systemApplicationBundleIdentifier;
 - (int) pidForApplication:(id)a;
 - (BOOL) canOpenApplication:(id)areason:(^q)b;
 - (void) openDataActivationURL:(id)awithResult:(@?)b;
 - (void) openApplication:(id)aoptions:(id)bwithResult:(@?)c;
 - (void) terminateApplication:(id)aforReason:(long long)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) terminateApplicationGroup:(long long)aforReason:(long long)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) fireCompletion:(@?)aerror:(id)b;
 - (id) clientCallbackQueue;


@end
