
@interface LSBestAppSuggestionManager : NSObject {

    <LSBestAppSuggestionManagerDelegate>* _delegate;
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    LSBestAppSuggestion* _lastBestAppSuggestion;
    NSXPCConnection* _connection;
}
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, retain, readwrite) NSXPCConnection* connection;

 - (void) startListeningForBestAppSuggestions;
 - (void) stopListeningForBestAppSuggestions;
 - (id) bestAppSuggestion;
 - (void) launchAppWithBundleIdentifier:(id)a userActivityUniqueIdentifier:(id)b userActivityTypeIdentifier:(id)c ;
 - (void) launchAppWithBundleIdentifier:(id)a userActivityUniqueIdentifier:(id)b userActivityTypeIdentifier:(id)c deviceName:(id)d deviceIdentifier:(id)e deviceType:(id)f ;
 - (void) removeBestApp:(id)a options:(id)b ;
 - (BOOL) determineBestAppWithDelay:(double)a withBlock:(@?)b ;
 - (id) bestAppSuggestions:(long long)a ;
 - (void) queueFetchOfPayloadForBestAppSuggestion:(id)a ;
 - (void) bestAppSuggestionWasLaunched:(id)a withInteractionType:(int)b ;
 - (void) bestAppSuggestionLaunchWasCancelled:(id)a ;
 - (void) notifyBestAppChanged:(id)a type:(unsigned long long)b options:(id)c bundleIdentifier:(id)d activityType:(id)e when:(id)f confidence:(double)g deviceName:(id)h deviceIdentifier:(id)i deviceType:(id)j ;
 - (void) launchAppWithBundleIdentifier:(id)a taskContinuationIdentifier:(id)b ;
 - (void) launchAppWithBestAppSuggestion:(id)a ;
 - (id) connection;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) init;
 - (void) setConnection:(id)a ;
 - (id) delegate;


@end
