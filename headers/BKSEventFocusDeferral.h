
@protocol NSSecureCoding;
@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {

    BKSEventFocusDeferralProperties _properties;
    BKSEventFocusDeferralProperties _deferredProperties;
}
@property (nonatomic, assign, readonly) BKSEventFocusDeferralProperties* properties;
@property (nonatomic, assign, readonly) BKSEventFocusDeferralProperties* deferredProperties;
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) properties;
 - (id) initWithProperties:(id)adeferredProperties:(id)b;
 - (BOOL) defersProperties:(id)a;
 - (id) deferredProperties;
 - (id) deferredPropertiesForProperties:(id)a;


@end
