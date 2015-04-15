
@interface _NSXPCConnectionRequestedReplies : NSObject {

    ^{__CFDictionary=} _replyTable;
    i _lock;
}

 - (void) addSequence:(Q)awithProgress:(id)bcleanupBlock:(@?)c;
 - (BOOL) removeSequence:(Q)a;
 - (id) progressForSequence:(Q)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (void) cleanup;


@end
