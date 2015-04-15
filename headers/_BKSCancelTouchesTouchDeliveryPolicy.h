
@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    I _contextId;
    @"NSObject<OS_xpc_object>" _assertionEndpoint;
    d _initialTouchTimestamp;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithContextId:(I)ainitialTouchTimestamp:(d)b;
 - (id) matchSharingTouchesPolicy:(@?)aorCancelTouchesPolicy:(@?)borCombinedPolicy:(@?)c;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a;
 - (d) initialTouchTimestamp;
 - (I) contextId;


@end
