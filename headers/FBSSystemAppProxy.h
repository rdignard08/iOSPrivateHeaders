
@interface FBSSystemAppProxy : BSBaseXPCClient {

    BOOL _uiApplicationClient;
}
 + (id) sharedInstance;

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(unsigned int)dwithResult:(@?)e;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(unsigned int)cwithResult:(@?)d;
 - (void) invalidate;
 - (id) init;
 - (void) checkInUIApplication;
 - (void) setBadgeValue:(id)aforBundleID:(id)b;
 - (void) badgeValueForBundleID:(id)acompletion:(@?)b;
 - (void) setNextWakeInterval:(double)acompletion:(@?)b;
 - (void) applicationBundleID:(id)arequestBrightness:(double)bcompletion:(@?)c;
 - (void) systemApplicationBundleIdentifierWithResult:(@?)a;
 - (void) pidForApplication:(id)awithResult:(@?)b;
 - (void) canActivateApplication:(id)awithResult:(@?)b;
 - (void) sendActions:(id)awithResult:(@?)b;
 - (void) terminateApplication:(id)aforReason:(int)bandReport:(BOOL)cwithDescription:(id)dwithResult:(@?)e;
 - (void) terminateApplicationGroup:(int)aforReason:(int)bandReport:(BOOL)cwithDescription:(id)dwithResult:(@?)e;
 - (void) shutdownAndReboot:(BOOL)a;
 - (void) setUIApplicationClient:(BOOL)a;
 - (void) fireCompletion:(@?)abundleIDResult:(id)berror:(id)c;
 - (void) fireCompletion:(@?)apidResult:(int)berror:(id)c;
 - (void) fireCompletion:(@?)aopenAppErrorCode:(long long)b;
 - (BOOL) isClientLoggingEnabled;
 - (BOOL) isUIApplicationClient;
 - (void) queue_connectionWasCreated;
 - (id) initWithEndpoint:(id)a;
 - (void) fireCompletion:(@?)aerror:(id)b;
 - (id) clientCallbackQueue;
 - (void) _sendMessageType:(long long)awithMessage:(@?)bwithReplyHandler:(@?)cwaitForReply:(BOOL)d;


@end
