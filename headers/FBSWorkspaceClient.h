
@protocol FBSSceneUpdater;
@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater> {

    BSBasicServerClient* _client;
    NSMutableArray* _queuedMessages;
    NSMutableDictionary* _sceneIDToSceneHandlerMap;
    NSObject<OS_dispatch_queue>* _callOutQueue;
    BOOL _inTransaction;
    <FBSWorkspaceClientDelegate>* _delegate;
}

 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (id) delegate;
 - (void) registerDelegate:(id)a forSceneID:(id)b ;
 - (BOOL) willObserveContextsManually;
 - (void) unregisterDelegateForSceneID:(id)a ;
 - (void) scene:(id)a didUpdateClientSettings:(id)b withDiff:(id)c transitionContext:(id)d ;
 - (void) scene:(id)a didReceiveActions:(id)b ;
 - (void) scene:(id)a didAttachContext:(id)b ;
 - (void) scene:(id)a didDetachContext:(id)b ;
 - (void) scene:(id)a didReceiveUpdateToContext:(id)b ;
 - (id) initWithDelegate:(id)a ;
 - (void) sendCreateSceneRequestEvent:(id)a withCompletion:(@?)b ;
 - (void) sendDestroySceneRequestEvent:(id)a withCompletion:(@?)b ;
 - (void) _sendMessage:(long long)a withEvent:(id)b ;
 - (void) _debugLog:(id)a ;
 - (void) _queue_sendMessage:(long long)a withEvent:(id)b withResponseEvent:(@?)c ofType:(Class)d ;
 - (void) _queue_sendReplyForMessage:(id)a withEvent:(id)b ;
 - (void) _queue_sendMessage:(long long)a withEvent:(id)b ;
 - (id) _queue_workspaceEventFromMessage:(id)a ofType:(Class)b ;
 - (void) _queue_ensureTransaction;
 - (void) _sendReplyForMessage:(id)a withEvent:(id)b ;
 - (id) _handlerForSceneID:(id)a ;
 - (void) _queue_handleTransactionBookEnd;
 - (void) _queue_handleCreateScene:(id)a ;
 - (void) _queue_handleSceneUpdate:(id)a ;
 - (void) _queue_handleDestroyScene:(id)a ;
 - (void) _queue_handleActions:(id)a ;
 - (void) _queue_handleSceneActions:(id)a ;
 - (BOOL) queue_handleMessageWithType:(long long)a message:(id)b client:(id)c ;
 - (id) callOutQueue;
 - (void) queue_handleMessage:(id)a ;
 - (id) _loggingProem;
 - (id) initWithServiceName:(id)a endpoint:(id)b ;
 - (void) queue_connectionWasInterrupted;


@end
