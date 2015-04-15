
@protocol NSStreamDelegate;
@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

    Q _flags;
    {?="version"q"info"^v"retain"^?"release"^?"copyDescription"^?} _client;
    (?="_rcb"^?"_wcb"^?"genericCallback"^?"genericPointer"^v) _cb;
}

 - (void) dealloc;
 - (void) stream:(id)ahandleEvent:(Q)b;
 - (id) initWithStreamEvents:(Q)acallback:(^v)bcontext:(^{?=q^v^?^?^?})c;


@end
