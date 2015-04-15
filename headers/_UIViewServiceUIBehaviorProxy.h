
@protocol _UIViewServiceUIBehaviorInterface;
@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {

    int _remotePID;
    _UIViewServiceFencingControlProxy* _fencingControlProxy;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
 + (id) activeFencePort;
 + (id) proxyWrappingExportedObject:(id)aforCommunicationWithPID:(int)bexportedProtocol:(id)c;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (int) __automatic_invalidation_logic;


@end
