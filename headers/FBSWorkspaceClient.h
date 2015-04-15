
@protocol FBSSceneUpdater;
@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater> {

    @"BSBasicServerClient" _client;
    @"NSMutableArray" _queuedMessages;
    @"NSMutableDictionary" _sceneIDToSceneHandlerMap;
    @"NSObject<OS_dispatch_queue>" _callOutQueue;
    BOOL _inTransaction;
    @"<FBSWorkspaceClientDelegate>" _delegate;
}

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (id) delegate;
 - (void) registerDelegate:(id)aforSceneID:(id)b;
 - (BOOL) willObserveContextsManually;
 - (void) unregisterDelegateForSceneID:(id)a;
 - (void) scene:(id)adidUpdateClientSettings:(id)bwithDiff:(id)ctransitionContext:(id)d;
 - (void) scene:(id)adidReceiveActions:(id)b;
 - (void) scene:(id)adidAttachContext:(id)b;
 - (void) scene:(id)adidDetachContext:(id)b;
 - (void) scene:(id)adidReceiveUpdateToContext:(id)b;
 - (id) initWithDelegate:(id)a;
 - (void) sendCreateSceneRequestEvent:(id)awithCompletion:(@?)b;
 - (void) sendDestroySceneRequestEvent:(id)awithCompletion:(@?)b;
 - (void) _sendMessage:(long long)awithEvent:(id)b;
 - (void) _debugLog:(id)a;
 - (void) _queue_sendMessage:(long long)awithEvent:(id)bwithResponseEvent:(@?)cofType:(Class)d;
 - (void) _queue_sendReplyForMessage:(id)awithEvent:(id)b;
 - (void) _queue_sendMessage:(long long)awithEvent:(id)b;
 - (id) _queue_workspaceEventFromMessage:(id)aofType:(Class)b;
 - (void) _queue_ensureTransaction;
 - (void) _sendReplyForMessage:(id)awithEvent:(id)b;
 - (id) _handlerForSceneID:(id)a;
 - (void) _queue_handleTransactionBookEnd;
 - (void) _queue_handleCreateScene:(id)a;
 - (void) _queue_handleSceneUpdate:(id)a;
 - (void) _queue_handleDestroyScene:(id)a;
 - (void) _queue_handleActions:(id)a;
 - (void) _queue_handleSceneActions:(id)a;
 - (BOOL) queue_handleMessageWithType:(long long)amessage:(id)bclient:(id)c;
 - (id) callOutQueue;
 - (void) queue_handleMessage:(id)a;
 - (id) _loggingProem;
 - (id) initWithServiceName:(id)aendpoint:(id)b;
 - (void) queue_connectionWasInterrupted;


@end
