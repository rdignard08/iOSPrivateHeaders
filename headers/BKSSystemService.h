
@interface BKSSystemService : NSObject {

    @"FBSSystemService" _fbsSystemService;
}

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(I)dwithResult:(@?)e;
 - (void) cleanupClientPort:(I)a;
 - (I) createClientPort;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(I)cwithResult:(@?)d;
 - (void) dealloc;
 - (id) init;
 - (id) systemApplicationBundleIdentifier;
 - (i) pidForApplication:(id)a;
 - (BOOL) canOpenApplication:(id)areason:(^i)b;
 - (void) openDataActivationURL:(id)awithResult:(@?)b;
 - (void) openApplication:(id)aoptions:(id)bwithResult:(@?)c;
 - (void) terminateApplication:(id)aforReason:(i)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) terminateApplicationGroup:(i)aforReason:(i)bandReport:(BOOL)cwithDescription:(id)d;


@end
