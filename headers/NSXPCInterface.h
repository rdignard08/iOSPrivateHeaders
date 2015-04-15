
@interface NSXPCInterface : NSObject {

    @"Protocol" _protocol;
    ^{__CFDictionary=} _methods2;
    id _reserved1;
}
@property (atomic, assign, readwrite) Protocol* protocol;
 + (id) signatureForBlock:(id)a;
 + (id) interfaceWithProtocol:(id)a;

 - (id) _verifiedMethodSignatureForReplyBlockOfSelector:(SEL)a;
 - (id) _interfaceForArgument:(Q)aofSelector:(SEL)breply:(BOOL)c;
 - (id) _allowedClassesForSelector:(SEL)areply:(BOOL)b;
 - (id) _verifiedMethodSignatureForSelector:(SEL)a;
 - (void) setProtocol:(id)a;
 - (id) classesForSelector:(SEL)aargumentIndex:(Q)bofReply:(BOOL)c;
 - (id) interfaceForSelector:(SEL)aargumentIndex:(Q)bofReply:(BOOL)c;
 - (void) setClass:(Class)aforSelector:(SEL)bargumentIndex:(Q)cofReply:(BOOL)d;
 - (Class) classForSelector:(SEL)aargumentIndex:(Q)bofReply:(BOOL)c;
 - (void) setReplyBlockSignature:(id)aforSelector:(SEL)b;
 - (id) replyBlockSignatureForSelector:(SEL)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) debugDescription;
 - (id) init;
 - (void) setInterface:(id)aforSelector:(SEL)bargumentIndex:(Q)cofReply:(BOOL)d;
 - (void) setClasses:(id)aforSelector:(SEL)bargumentIndex:(Q)cofReply:(BOOL)d;
 - (id) protocol;


@end
