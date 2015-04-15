
@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy {

    NSArray* _policies;
}
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithPolicies:(id)a ;
 - (id) matchSharingTouchesPolicy:(@?)a orCancelTouchesPolicy:(@?)b orCombinedPolicy:(@?)c ;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a ;
 - (id) policies;


@end
