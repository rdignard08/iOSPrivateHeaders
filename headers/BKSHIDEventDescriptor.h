
@protocol NSSecureCoding;
@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding> {

    I _hidEventType;
}
@property (atomic, assign, readonly) NSNumber* hidEventType;
 + (BOOL) supportsSecureCoding;
 + (id) descriptorWithEventType:(I)a;
 + (id) reusableDescriptorWithEventType:(I)a;
 + (id) reusableVendorDefinedDescriptorWithPage:(I)ausage:(I)b;
 + (id) reusableKeyboardDescriptorWithPage:(I)ausage:(I)b;

 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithEventType:(I)a;
 - (I) hidEventType;
 - (BOOL) describes:(id)a;


@end
