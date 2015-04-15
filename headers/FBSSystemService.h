
@interface FBSSystemService : NSObject {

}
 + (id) sharedService;

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(I)dwithResult:(@?)e;
 - (void) cleanupClientPort:(I)a;
 - (I) createClientPort;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(I)cwithResult:(@?)d;
 - (void) dealloc;
 - (id) init;
 - (void) setBadgeValue:(id)aforBundleID:(id)b;
 - (void) sendActions:(id)awithResult:(@?)b;
 - (id) _badArgumentError;
 - (void) reboot;
 - (void) shutdown;
 - (id) systemApplicationBundleIdentifier;
 - (i) pidForApplication:(id)a;
 - (BOOL) canOpenApplication:(id)areason:(^q)b;
 - (void) openDataActivationURL:(id)awithResult:(@?)b;
 - (void) openApplication:(id)aoptions:(id)bwithResult:(@?)c;
 - (void) terminateApplication:(id)aforReason:(q)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) terminateApplicationGroup:(q)aforReason:(q)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) fireCompletion:(@?)aerror:(id)b;
 - (id) clientCallbackQueue;


@end
