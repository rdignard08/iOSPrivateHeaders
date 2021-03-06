
@interface CAContextImpl : CAContext {

    ^{Context=I^{Context}{Mutex={_opaque_pthread_mutex_t=q[56c]}}@III@^{Context}^{CGColorSpace}^{__CFDictionary}III^{ObjectCache}@If^{Commit}{Generic=^^?^{Context}}b1b1b1b1b1} _impl;
}

 - (void) dealloc;
 - (void) invalidate;
 - (void) orderAbove:(unsigned int)a ;
 - (void) setFencePort:(unsigned int)a commitHandler:(@?)b ;
 - (void) setFencePort:(unsigned int)a ;
 - (void) setFence:(unsigned int)a count:(unsigned int)b ;
 - (void) setSecure:(BOOL)a ;
 - (unsigned int) createFencePort;
 - (unsigned int) createImageSlot:({CGSize=dd})a hasAlpha:(BOOL)b ;
 - (void) deleteSlot:(unsigned int)a ;
 - (BOOL) isSecure;
 - (id) options;
 - (BOOL) valid;
 - (float) level;
 - (void) setLevel:(float)a ;
 - (id) layer;
 - (id) initWithOptions:(id)a localContext:(BOOL)b ;
 - (id) initRemoteWithOptions:(id)a ;
 - (void) orderBelow:(unsigned int)a ;
 - (unsigned int) createSlot;
 - (void) setObject:(id)a forSlot:(unsigned int)b ;
 - (unsigned int) contextId;
 - (void) setLayer:(id)a ;
 - (^{Context=}) renderContext;
 - (void) setColorSpace:(^{CGColorSpace=})a ;
 - (^{CGColorSpace=}) colorSpace;


@end
