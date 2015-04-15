
@interface _NSProgressWithRemoteParent : NSProgress {

    @"NSXPCConnection" _parentConnection;
    Q _sequence;
}

 - (Q) sequence;
 - (void) setSequence:(Q)a;
 - (void) setParentConnection:(id)a;
 - (void) _updateFractionCompletedFromOldFraction:(id)atoNewFraction:(id)b;
 - (id) parentConnection;
 - (void) dealloc;


@end
