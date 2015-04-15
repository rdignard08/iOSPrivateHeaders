
@interface CAWindowServer : NSObject {

    ^{CAWindowServerImpl=^{__CFArray}I} _impl;
}
@property (atomic, assign, readonly) NSArray* displays;
@property (atomic, assign, readwrite, getter=isMirroringEnabled) NSNumber* mirroringEnabled;
@property (atomic, assign, readwrite) NSNumber* rendererFlags;
@property (atomic, assign, readwrite, getter=isSecure) NSNumber* secure;
 + (id) contextWithOptions:(id)a;
 + (id) server;
 + (id) serverIfRunning;
 + (id) context;

 - (id) _init;
 - (id) description;
 - (void) dealloc;
 - (void) setRendererFlags:(unsigned int)a;
 - (void) setSecure:(BOOL)a;
 - (id) init;
 - (BOOL) isSecure;
 - (id) displays;
 - (void) addDisplay:(id)a;
 - (void) removeDisplay:(id)a;
 - (void) removeAllDisplays;
 - (id) displayWithDisplayId:(unsigned int)a;
 - (id) displayWithUniqueId:(id)a;
 - (void) _detectDisplays;
 - (void) setMirroringEnabled:(BOOL)a;
 - (BOOL) isMirroringEnabled;
 - (unsigned int) rendererFlags;
 - (id) insecureProcessIds;
 - (unsigned int) clientPortOfContextId:(unsigned int)a;
 - (unsigned int) taskPortOfContextId:(unsigned int)a;
 - (unsigned int) contextIdHostingContextId:(unsigned int)a;
 - (id) displayWithName:(id)a;


@end
