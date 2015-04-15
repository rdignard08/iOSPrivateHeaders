
@interface CAContext : NSObject {

}
@property (atomic, assign, readonly) NSNumber* contextId;
@property (atomic, retain, readwrite) CALayer* layer;
@property (atomic, assign, readwrite) NSNumber* colorSpace;
@property (atomic, assign, readonly) NSDictionary* options;
@property (atomic, assign, readwrite) NSNumber* level;
@property (atomic, assign, readwrite, isSecure) NSNumber* secure;
@property (atomic, assign, readonly) NSNumber* valid;
 + (void) setClientPort:(I)a;
 + (id) objectForSlot:(I)a;
 + (id) localContextWithOptions:(id)a;
 + (id) remoteContextWithOptions:(id)a;
 + (id) allContexts;
 + (id) localContext;
 + (id) remoteContext;
 + (id) currentContext;

 - (void) _setAssociatedScreen:(id)a;
 - (id) _associatedScreen;
 - (void) invalidate;
 - (void) orderAbove:(I)a;
 - (void) setFencePort:(I)acommitHandler:(@?)b;
 - (void) setFencePort:(I)a;
 - (void) setFence:(I)acount:(I)b;
 - (I) createFencePort;
 - (I) createImageSlot:({CGSize=dd})ahasAlpha:(BOOL)b;
 - (void) deleteSlot:(I)a;
 - (void) orderBelow:(I)a;
 - (I) createSlot;
 - (void) setObject:(id)aforSlot:(I)b;


@end
