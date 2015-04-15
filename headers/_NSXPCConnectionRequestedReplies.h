
@interface _NSXPCConnectionRequestedReplies : NSObject {

    ^{__CFDictionary=} _replyTable;
    int _lock;
}

 - (void) addSequence:(unsigned long long)awithProgress:(id)bcleanupBlock:(@?)c;
 - (BOOL) removeSequence:(unsigned long long)a;
 - (id) progressForSequence:(unsigned long long)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (void) cleanup;


@end
