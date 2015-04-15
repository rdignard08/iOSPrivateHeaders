
@protocol NSCopying;
@interface DOMObject : WebScriptObject <NSCopying> {

    ^{DOMObjectInternal=} _internal;
}

 - (Vv) release;
 - (Vv) _webcore_releaseOnWebThread;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) init;
 - (id) sheet;


@end
