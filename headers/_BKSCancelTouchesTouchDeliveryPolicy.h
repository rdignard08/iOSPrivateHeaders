
@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    unsigned int _contextId;
    NSObject<OS_xpc_object>* _assertionEndpoint;
    double _initialTouchTimestamp;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithContextId:(unsigned int)a initialTouchTimestamp:(double)b ;
 - (id) matchSharingTouchesPolicy:(@?)a orCancelTouchesPolicy:(@?)b orCombinedPolicy:(@?)c ;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a ;
 - (double) initialTouchTimestamp;
 - (unsigned int) contextId;


@end
