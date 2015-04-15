
@interface CAContext : NSObject {

}
@property (atomic, assign, readonly) NSNumber* contextId;
@property (atomic, retain, readwrite) CALayer* layer;
@property (atomic, assign, readwrite) NSNumber* colorSpace;
@property (atomic, assign, readonly) NSDictionary* options;
@property (atomic, assign, readwrite) NSNumber* level;
@property (atomic, assign, readwrite, isSecure) NSNumber* secure;
@property (atomic, assign, readonly) NSNumber* valid;
 + (void) setClientPort:(unsigned int)a;
 + (id) objectForSlot:(unsigned int)a;
 + (id) localContextWithOptions:(id)a;
 + (id) remoteContextWithOptions:(id)a;
 + (id) allContexts;
 + (id) localContext;
 + (id) remoteContext;
 + (id) currentContext;

 - (void) _setAssociatedScreen:(id)a;
 - (id) _associatedScreen;
 - (void) invalidate;
 - (void) orderAbove:(unsigned int)a;
 - (void) setFencePort:(unsigned int)acommitHandler:(@?)b;
 - (void) setFencePort:(unsigned int)a;
 - (void) setFence:(unsigned int)acount:(unsigned int)b;
 - (unsigned int) createFencePort;
 - (unsigned int) createImageSlot:({CGSize=dd})ahasAlpha:(BOOL)b;
 - (void) deleteSlot:(unsigned int)a;
 - (void) orderBelow:(unsigned int)a;
 - (unsigned int) createSlot;
 - (void) setObject:(id)aforSlot:(unsigned int)b;


@end
