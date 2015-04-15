
@interface CAContext : NSObject {

}
@property (atomic, assign, readonly) NSNumber* contextId;
@property (atomic, retain, readwrite) CALayer* layer;
@property (atomic, assign, readwrite) NSNumber* colorSpace;
@property (atomic, assign, readonly) NSDictionary* options;
@property (atomic, assign, readwrite) NSNumber* level;
@property (atomic, assign, readwrite, getter=isSecure) NSNumber* secure;
@property (atomic, assign, readonly) NSNumber* valid;
 + (void) setClientPort:(unsigned int)a;
 + (id) objectForSlot:(unsigned int)a;
 + (id) localContextWithOptions:(id)a;
 + (id) remoteContextWithOptions:(id)a;
 + (id) allContexts;
 + (id) localContext;
 + (id) remoteContext;
 + (id) currentContext;

 - (void) _setAssociatedScreen:(id)a ;
 - (id) _associatedScreen;
 - (void) invalidate;
 - (void) orderAbove:(unsigned int)a ;
 - (void) setFencePort:(unsigned int)a commitHandler:(@?)b ;
 - (void) setFencePort:(unsigned int)a ;
 - (void) setFence:(unsigned int)a count:(unsigned int)b ;
 - (unsigned int) createFencePort;
 - (unsigned int) createImageSlot:({CGSize=dd})a hasAlpha:(BOOL)b ;
 - (void) deleteSlot:(unsigned int)a ;
 - (void) orderBelow:(unsigned int)a ;
 - (unsigned int) createSlot;
 - (void) setObject:(id)a forSlot:(unsigned int)b ;


@end
