
@interface _NSXPCConnectionExpectedReplies : NSObject {

    ^{__CFDictionary=} _replyTable;
    i _lock;
    Q _sequence;
}

 - (void) removeSequence:(Q)a;
 - (Q) sequenceWithProgress:(id)a;
 - (id) progressForSequence:(Q)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
