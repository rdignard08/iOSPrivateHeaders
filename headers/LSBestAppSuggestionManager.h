
@interface LSBestAppSuggestionManager : NSObject {

    @"<LSBestAppSuggestionManagerDelegate>" _delegate;
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    @"LSBestAppSuggestion" _lastBestAppSuggestion;
    @"NSXPCConnection" _connection;
}
@property (atomic, weak, readwrite) NSNumber* delegate;
@property (atomic, retain, readwrite) NSXPCConnection* connection;

 - (void) startListeningForBestAppSuggestions;
 - (void) stopListeningForBestAppSuggestions;
 - (id) bestAppSuggestion;
 - (void) launchAppWithBundleIdentifier:(id)auserActivityUniqueIdentifier:(id)buserActivityTypeIdentifier:(id)c;
 - (void) launchAppWithBundleIdentifier:(id)auserActivityUniqueIdentifier:(id)buserActivityTypeIdentifier:(id)cdeviceName:(id)ddeviceIdentifier:(id)edeviceType:(id)f;
 - (void) removeBestApp:(id)aoptions:(id)b;
 - (BOOL) determineBestAppWithDelay:(double)awithBlock:(@?)b;
 - (id) bestAppSuggestions:(long long)a;
 - (void) queueFetchOfPayloadForBestAppSuggestion:(id)a;
 - (void) bestAppSuggestionWasLaunched:(id)awithInteractionType:(int)b;
 - (void) bestAppSuggestionLaunchWasCancelled:(id)a;
 - (void) notifyBestAppChanged:(id)atype:(unsigned long long)boptions:(id)cbundleIdentifier:(id)dactivityType:(id)ewhen:(id)fconfidence:(double)gdeviceName:(id)hdeviceIdentifier:(id)ideviceType:(id)j;
 - (void) launchAppWithBundleIdentifier:(id)ataskContinuationIdentifier:(id)b;
 - (void) launchAppWithBestAppSuggestion:(id)a;
 - (id) connection;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (void) setConnection:(id)a;
 - (id) delegate;


@end
