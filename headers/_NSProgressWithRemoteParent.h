
@interface _NSProgressWithRemoteParent : NSProgress {

    NSXPCConnection* _parentConnection;
    unsigned long long _sequence;
}

 - (unsigned long long) sequence;
 - (void) setSequence:(unsigned long long)a;
 - (void) setParentConnection:(id)a;
 - (void) _updateFractionCompletedFromOldFraction:(id)atoNewFraction:(id)b;
 - (id) parentConnection;
 - (void) dealloc;


@end
