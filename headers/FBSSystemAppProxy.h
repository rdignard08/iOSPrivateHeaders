
@interface FBSSystemAppProxy : BSBaseXPCClient {

    BOOL _uiApplicationClient;
}
 + (id) sharedInstance;

 - (void) openURL:(id)a application:(id)b options:(id)c clientPort:(unsigned int)d withResult:(@?)e ;
 - (void) openApplication:(id)a options:(id)b clientPort:(unsigned int)c withResult:(@?)d ;
 - (void) invalidate;
 - (id) init;
 - (void) checkInUIApplication;
 - (void) setBadgeValue:(id)a forBundleID:(id)b ;
 - (void) badgeValueForBundleID:(id)a completion:(@?)b ;
 - (void) setNextWakeInterval:(double)a completion:(@?)b ;
 - (void) applicationBundleID:(id)a requestBrightness:(double)b completion:(@?)c ;
 - (void) systemApplicationBundleIdentifierWithResult:(@?)a ;
 - (void) pidForApplication:(id)a withResult:(@?)b ;
 - (void) canActivateApplication:(id)a withResult:(@?)b ;
 - (void) sendActions:(id)a withResult:(@?)b ;
 - (void) terminateApplication:(id)a forReason:(int)b andReport:(BOOL)c withDescription:(id)d withResult:(@?)e ;
 - (void) terminateApplicationGroup:(int)a forReason:(int)b andReport:(BOOL)c withDescription:(id)d withResult:(@?)e ;
 - (void) shutdownAndReboot:(BOOL)a ;
 - (void) setUIApplicationClient:(BOOL)a ;
 - (void) fireCompletion:(@?)a bundleIDResult:(id)b error:(id)c ;
 - (void) fireCompletion:(@?)a pidResult:(int)b error:(id)c ;
 - (void) fireCompletion:(@?)a openAppErrorCode:(long long)b ;
 - (BOOL) isClientLoggingEnabled;
 - (BOOL) isUIApplicationClient;
 - (void) queue_connectionWasCreated;
 - (id) initWithEndpoint:(id)a ;
 - (void) fireCompletion:(@?)a error:(id)b ;
 - (id) clientCallbackQueue;
 - (void) _sendMessageType:(long long)a withMessage:(@?)b withReplyHandler:(@?)c waitForReply:(BOOL)d ;


@end
