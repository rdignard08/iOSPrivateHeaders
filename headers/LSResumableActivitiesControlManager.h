
@interface LSResumableActivitiesControlManager : NSObject {

    NSXPCConnection connection;
    id _delegate;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, retain, readwrite) NSXPCConnection* connection;
 + (id) resumableActivitiesControlManager;

 - (void) terminateServer;
 - (id) matchingUUIDForString:(id)a;
 - (id) advertisedItemUUID;
 - (id) allUUIDsOfType:(unsigned long long)a;
 - (id) enabledUUIDs;
 - (id) currentAdvertisedItemUUID;
 - (id) debuggingInfo;
 - (void) restartServer;
 - (void) injectBTLEItem:(id)atype:(unsigned long long)bidentifier:(id)ctitle:(id)dactivityPayload:(id)eframeworkPayload:(id)fpayloadDelay:(double)g;
 - (void) callWillSaveDelegate:(id)a;
 - (void) callWillSaveDelegate:(id)acompletionHandler:(@?)b;
 - (void) callDidSaveDelegate:(id)a;
 - (id) connection;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) init;
 - (void) setConnection:(id)a;
 - (id) delegate;
 - (id) status;


@end
