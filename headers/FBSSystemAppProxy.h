
@interface FBSSystemAppProxy : BSBaseXPCClient {

    BOOL _uiApplicationClient;
}
 + (id) sharedInstance;

 - (void) openURL:(id)aapplication:(id)boptions:(id)cclientPort:(I)dwithResult:(@?)e;
 - (void) openApplication:(id)aoptions:(id)bclientPort:(I)cwithResult:(@?)d;
 - (void) invalidate;
 - (id) init;
 - (void) checkInUIApplication;
 - (void) setBadgeValue:(id)aforBundleID:(id)b;
 - (void) badgeValueForBundleID:(id)acompletion:(@?)b;
 - (void) setNextWakeInterval:(d)acompletion:(@?)b;
 - (void) applicationBundleID:(id)arequestBrightness:(d)bcompletion:(@?)c;
 - (void) systemApplicationBundleIdentifierWithResult:(@?)a;
 - (void) pidForApplication:(id)awithResult:(@?)b;
 - (void) canActivateApplication:(id)awithResult:(@?)b;
 - (void) sendActions:(id)awithResult:(@?)b;
 - (void) terminateApplication:(id)aforReason:(i)bandReport:(BOOL)cwithDescription:(id)dwithResult:(@?)e;
 - (void) terminateApplicationGroup:(i)aforReason:(i)bandReport:(BOOL)cwithDescription:(id)dwithResult:(@?)e;
 - (void) shutdownAndReboot:(BOOL)a;
 - (void) setUIApplicationClient:(BOOL)a;
 - (void) fireCompletion:(@?)abundleIDResult:(id)berror:(id)c;
 - (void) fireCompletion:(@?)apidResult:(i)berror:(id)c;
 - (void) fireCompletion:(@?)aopenAppErrorCode:(q)b;
 - (BOOL) isClientLoggingEnabled;
 - (BOOL) isUIApplicationClient;
 - (void) queue_connectionWasCreated;
 - (id) initWithEndpoint:(id)a;
 - (void) fireCompletion:(@?)aerror:(id)b;
 - (id) clientCallbackQueue;
 - (void) _sendMessageType:(q)awithMessage:(@?)bwithReplyHandler:(@?)cwaitForReply:(BOOL)d;


@end
