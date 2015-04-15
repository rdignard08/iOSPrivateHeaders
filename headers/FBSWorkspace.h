
@protocol FBSWorkspaceClientDelegate;
@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {

    NSObject<OS_dispatch_queue>* _queue;
    <FBSWorkspaceDelegate>* _delegate;
    FBSWorkspaceClient* _client;
    FBSSerialQueue* _callOutQueue;
    NSObject<OS_dispatch_queue>* _scenesQueue;
    NSMutableDictionary* _scenesByIdentifier;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readonly) FBSSerialQueue* queue;
@property (nonatomic, copy, readonly) NSArray* scenes;

 - (id) initWithQueue:(id)a ;
 - (id) description;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) scenes;
 - (id) init;
 - (id) delegate;
 - (void) _performDelegateCallOut:(@?)a ;
 - (void) clientSystemApplicationTerminated:(id)a ;
 - (void) clientBeginTransaction:(id)a ;
 - (void) clientEndTransaction:(id)a ;
 - (void) client:(id)a handleCreateScene:(id)b withCompletion:(@?)c ;
 - (void) client:(id)a handleDestroyScene:(id)b withCompletion:(@?)c ;
 - (void) client:(id)a handleActions:(id)b ;
 - (Class) _clientClass;
 - (BOOL) isUIApplicationWorkspace;
 - (id) _internalQueue;
 - (id) initWithSerialQueue:(id)a ;
 - (id) _sceneWithIdentifier:(id)a ;
 - (id) sceneWithIdentifier:(id)a ;
 - (void) enumerateScenesWithBlock:(@?)a ;
 - (void) requestSceneCreationWithInitialClientSettings:(id)a completion:(@?)b ;
 - (void) requestDestructionOfScene:(id)a withCompletion:(@?)b ;
 - (id) _client;
 - (id) queue;


@end
