
@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSObject<OS_xpc_object>* _assertionEndpoint;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithChildContextId:(unsigned int)a hostContextId:(unsigned int)b ;
 - (id) matchSharingTouchesPolicy:(@?)a orCancelTouchesPolicy:(@?)b orCombinedPolicy:(@?)c ;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a ;
 - (unsigned int) childContextId;
 - (unsigned int) hostContextId;


@end
