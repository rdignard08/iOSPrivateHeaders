
@interface BKSSystemService : NSObject {

    FBSSystemService* _fbsSystemService;
}

 - (void) openURL:(id)a application:(id)b options:(id)c clientPort:(unsigned int)d withResult:(@?)e ;
 - (void) cleanupClientPort:(unsigned int)a ;
 - (unsigned int) createClientPort;
 - (void) openApplication:(id)a options:(id)b clientPort:(unsigned int)c withResult:(@?)d ;
 - (void) dealloc;
 - (id) init;
 - (id) systemApplicationBundleIdentifier;
 - (int) pidForApplication:(id)a ;
 - (BOOL) canOpenApplication:(id)a reason:(^i)b ;
 - (void) openDataActivationURL:(id)a withResult:(@?)b ;
 - (void) openApplication:(id)a options:(id)b withResult:(@?)c ;
 - (void) terminateApplication:(id)a forReason:(int)b andReport:(BOOL)c withDescription:(id)d ;
 - (void) terminateApplicationGroup:(int)a forReason:(int)b andReport:(BOOL)c withDescription:(id)d ;


@end
