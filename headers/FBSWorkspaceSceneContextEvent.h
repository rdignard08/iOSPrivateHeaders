
@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent {

    FBSContext _context;
    BOOL _orderOut;
}

 - (id) description;
 - (void) dealloc;
 - (void) setContext:(id)a;
 - (void) setOrderOut:(BOOL)a;
 - (BOOL) orderOut;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) context;


@end
