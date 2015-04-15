
@protocol _UIViewServiceUIBehaviorInterface;
@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {

    i _remotePID;
    @"_UIViewServiceFencingControlProxy" _fencingControlProxy;
    i __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
 + (id) activeFencePort;
 + (id) proxyWrappingExportedObject:(id)aforCommunicationWithPID:(i)bexportedProtocol:(id)c;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (i) __automatic_invalidation_logic;


@end
