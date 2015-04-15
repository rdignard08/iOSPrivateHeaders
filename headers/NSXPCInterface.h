
@interface NSXPCInterface : NSObject {

    Protocol* _protocol;
    ^{__CFDictionary=} _methods2;
    id _reserved1;
}
@property (atomic, assign, readwrite) Protocol* protocol;
 + (id) signatureForBlock:(id)a;
 + (id) interfaceWithProtocol:(id)a;

 - (id) _verifiedMethodSignatureForReplyBlockOfSelector:(SEL)a ;
 - (id) _interfaceForArgument:(unsigned long long)a ofSelector:(SEL)b reply:(BOOL)c ;
 - (id) _allowedClassesForSelector:(SEL)a reply:(BOOL)b ;
 - (id) _verifiedMethodSignatureForSelector:(SEL)a ;
 - (void) setProtocol:(id)a ;
 - (id) classesForSelector:(SEL)a argumentIndex:(unsigned long long)b ofReply:(BOOL)c ;
 - (id) interfaceForSelector:(SEL)a argumentIndex:(unsigned long long)b ofReply:(BOOL)c ;
 - (void) setClass:(Class)a forSelector:(SEL)b argumentIndex:(unsigned long long)c ofReply:(BOOL)d ;
 - (Class) classForSelector:(SEL)a argumentIndex:(unsigned long long)b ofReply:(BOOL)c ;
 - (void) setReplyBlockSignature:(id)a forSelector:(SEL)b ;
 - (id) replyBlockSignatureForSelector:(SEL)a ;
 - (void) dealloc;
 - (void) finalize;
 - (id) debugDescription;
 - (id) init;
 - (void) setInterface:(id)a forSelector:(SEL)b argumentIndex:(unsigned long long)c ofReply:(BOOL)d ;
 - (void) setClasses:(id)a forSelector:(SEL)b argumentIndex:(unsigned long long)c ofReply:(BOOL)d ;
 - (id) protocol;


@end
