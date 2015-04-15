
@interface NSURLQueue : NSObject {

    Q count;
    @"NSURLQueueNode" head;
    @"NSURLQueueNode" tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}
 + (id) newNode;

 - (void) clear;
 - (void) put:(id)a;
 - (id) take;
 - (id) peek;
 - (id) peekAt:(Q)a;
 - (BOOL) remove:(id)a;
 - (q) indexOf:(id)a;
 - (BOOL) waitOnTake;
 - (void) setWaitOnTake:(BOOL)a;
 - (void) dealloc;
 - (void) finalize;
 - (Q) count;
 - (BOOL) isEmpty;
 - (id) init;


@end
