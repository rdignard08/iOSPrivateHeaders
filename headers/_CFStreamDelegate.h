
@protocol NSStreamDelegate;
@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

    unsigned long long _flags;
    {?="version"q"info"^v"retain"^?"release"^?"copyDescription"^?} _client;
    (?="_rcb"^?"_wcb"^?"genericCallback"^?"genericPointer"^v) _cb;
}

 - (void) dealloc;
 - (void) stream:(id)ahandleEvent:(unsigned long long)b;
 - (id) initWithStreamEvents:(unsigned long long)acallback:(^v)bcontext:(^{?=q^v^?^?^?})c;


@end
