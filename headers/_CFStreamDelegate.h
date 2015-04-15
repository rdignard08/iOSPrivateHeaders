
@protocol NSStreamDelegate;
@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

    unsigned long long _flags;
    {?="version"q"info"^v"retain"^?"release"^?"copyDescription"^?} _client;
    (?="_rcb"^?"_wcb"^?"genericCallback"^?"genericPointer"^v) _cb;
}

 - (void) dealloc;
 - (void) stream:(id)a handleEvent:(unsigned long long)b ;
 - (id) initWithStreamEvents:(unsigned long long)a callback:(^v)b context:(^{?=q^v^?^?^?})c ;


@end
