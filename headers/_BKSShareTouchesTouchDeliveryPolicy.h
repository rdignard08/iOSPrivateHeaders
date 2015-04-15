
@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    I _childContextId;
    I _hostContextId;
    @"NSObject<OS_xpc_object>" _assertionEndpoint;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithChildContextId:(I)ahostContextId:(I)b;
 - (id) matchSharingTouchesPolicy:(@?)aorCancelTouchesPolicy:(@?)borCombinedPolicy:(@?)c;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a;
 - (I) childContextId;
 - (I) hostContextId;


@end
