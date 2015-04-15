
@interface CAWindowServer : NSObject {

    ^{CAWindowServerImpl=^{__CFArray}I} _impl;
}
@property (atomic, assign, readonly) NSArray* displays;
@property (atomic, assign, readwrite, isMirroringEnabled) NSNumber* mirroringEnabled;
@property (atomic, assign, readwrite) NSNumber* rendererFlags;
@property (atomic, assign, readwrite, isSecure) NSNumber* secure;
 + (id) contextWithOptions:(id)a;
 + (id) server;
 + (id) serverIfRunning;
 + (id) context;

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (void) setRendererFlags:(I)a;
 - (void) setSecure:(BOOL)a;
 - (id) init;
 - (BOOL) isSecure;
 - (id) displays;
 - (void) addDisplay:(id)a;
 - (void) removeDisplay:(id)a;
 - (void) removeAllDisplays;
 - (id) displayWithDisplayId:(I)a;
 - (id) displayWithUniqueId:(id)a;
 - (void) _detectDisplays;
 - (void) setMirroringEnabled:(BOOL)a;
 - (BOOL) isMirroringEnabled;
 - (I) rendererFlags;
 - (id) insecureProcessIds;
 - (I) clientPortOfContextId:(I)a;
 - (I) taskPortOfContextId:(I)a;
 - (I) contextIdHostingContextId:(I)a;
 - (id) displayWithName:(id)a;


@end
