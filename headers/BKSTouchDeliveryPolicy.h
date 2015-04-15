
@protocol NSSecureCoding;
@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding> {

}
@property (nonatomic, retain, readwrite) NSNumber* assertionEndpoint;
 + (BOOL) supportsSecureCoding;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)awithHostContextId:(unsigned int)b;
 + (id) policyCancelingTouchesDeliveredToContextId:(unsigned int)awithInitialTouchTimestamp:(double)b;
 + (id) policyByCombiningPolicies:(id)a;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) matchSharingTouchesPolicy:(@?)a orCancelTouchesPolicy:(@?)b orCombinedPolicy:(@?)c ;
 - (id) reducePolicyToObjectWithBlock:(@?)a ;
 - (id) policyByMappingContainedPoliciesWithBlock:(@?)a ;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a ;
 - (id) policyIncludingPolicy:(id)a ;
 - (id) policyExcludingPolicy:(id)a ;


@end
