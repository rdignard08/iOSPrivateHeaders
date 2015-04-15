
@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    unsigned int _contextId;
    NSObject<OS_xpc_object>* _assertionEndpoint;
    double _initialTouchTimestamp;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithContextId:(unsigned int)ainitialTouchTimestamp:(double)b;
 - (id) matchSharingTouchesPolicy:(@?)aorCancelTouchesPolicy:(@?)borCombinedPolicy:(@?)c;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a;
 - (double) initialTouchTimestamp;
 - (unsigned int) contextId;


@end
