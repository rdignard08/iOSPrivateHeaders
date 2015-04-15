
@interface BKSSystemService : NSObject {

    FBSSystemService* _fbsSystemService;
}

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(unsigned int)dwithResult:(@?)e;
 - (void) cleanupClientPort:(unsigned int)a;
 - (unsigned int) createClientPort;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(unsigned int)cwithResult:(@?)d;
 - (void) dealloc;
 - (id) init;
 - (id) systemApplicationBundleIdentifier;
 - (int) pidForApplication:(id)a;
 - (BOOL) canOpenApplication:(id)areason:(^i)b;
 - (void) openDataActivationURL:(id)awithResult:(@?)b;
 - (void) openApplication:(id)aoptions:(id)bwithResult:(@?)c;
 - (void) terminateApplication:(id)aforReason:(int)bandReport:(BOOL)cwithDescription:(id)d;
 - (void) terminateApplicationGroup:(int)aforReason:(int)bandReport:(BOOL)cwithDescription:(id)d;


@end
