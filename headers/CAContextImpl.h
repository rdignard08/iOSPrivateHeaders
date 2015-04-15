
@interface CAContextImpl : CAContext {

    ^{Context=I^{Context}{Mutex={_opaque_pthread_mutex_t=q[56c]}}@III@^{Context}^{CGColorSpace}^{__CFDictionary}III^{ObjectCache}@If^{Commit}{Generic=^^?^{Context}}b1b1b1b1b1} _impl;
}

 - (void) dealloc;
 - (void) invalidate;
 - (void) orderAbove:(I)a;
 - (void) setFencePort:(I)acommitHandler:(@?)b;
 - (void) setFencePort:(I)a;
 - (void) setFence:(I)acount:(I)b;
 - (void) setSecure:(BOOL)a;
 - (I) createFencePort;
 - (I) createImageSlot:({CGSize=dd})ahasAlpha:(BOOL)b;
 - (void) deleteSlot:(I)a;
 - (BOOL) isSecure;
 - (id) options;
 - (BOOL) valid;
 - (f) level;
 - (void) setLevel:(f)a;
 - (id) layer;
 - (id) initWithOptions:(id)alocalContext:(BOOL)b;
 - (id) initRemoteWithOptions:(id)a;
 - (void) orderBelow:(I)a;
 - (I) createSlot;
 - (void) setObject:(id)aforSlot:(I)b;
 - (I) contextId;
 - (void) setLayer:(id)a;
 - (^{Context=}) renderContext;
 - (void) setColorSpace:(^{CGColorSpace=})a;
 - (^{CGColorSpace=}) colorSpace;


@end
