
@protocol NSSecureCoding;
@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding> {

}
@property (nonatomic, retain, readwrite) NSNumber* assertionEndpoint;
 + (BOOL) supportsSecureCoding;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) policyRequiringSharingOfTouchesDeliveredToChildContextId:(I)awithHostContextId:(I)b;
 + (id) policyCancelingTouchesDeliveredToContextId:(I)awithInitialTouchTimestamp:(d)b;
 + (id) policyByCombiningPolicies:(id)a;

 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) matchSharingTouchesPolicy:(@?)aorCancelTouchesPolicy:(@?)borCombinedPolicy:(@?)c;
 - (id) reducePolicyToObjectWithBlock:(@?)a;
 - (id) policyByMappingContainedPoliciesWithBlock:(@?)a;
 - (id) assertionEndpoint;
 - (void) setAssertionEndpoint:(id)a;
 - (id) policyIncludingPolicy:(id)a;
 - (id) policyExcludingPolicy:(id)a;


@end
