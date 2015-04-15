
@interface _NSXPCConnectionExpectedReplies : NSObject {

    ^{__CFDictionary=} _replyTable;
    int _lock;
    unsigned long long _sequence;
}

 - (void) removeSequence:(unsigned long long)a;
 - (unsigned long long) sequenceWithProgress:(id)a;
 - (id) progressForSequence:(unsigned long long)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
