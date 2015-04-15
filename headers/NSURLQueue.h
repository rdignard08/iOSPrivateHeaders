
@interface NSURLQueue : NSObject {

    unsigned long long count;
    NSURLQueueNode* head;
    NSURLQueueNode* tail;
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
 - (id) peekAt:(unsigned long long)a;
 - (BOOL) remove:(id)a;
 - (long long) indexOf:(id)a;
 - (BOOL) waitOnTake;
 - (void) setWaitOnTake:(BOOL)a;
 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (BOOL) isEmpty;
 - (id) init;


@end
