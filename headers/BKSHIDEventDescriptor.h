
@protocol NSSecureCoding;
@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding> {

    unsigned int _hidEventType;
}
@property (atomic, assign, readonly) NSNumber* hidEventType;
 + (BOOL) supportsSecureCoding;
 + (id) descriptorWithEventType:(unsigned int)a;
 + (id) reusableDescriptorWithEventType:(unsigned int)a;
 + (id) reusableVendorDefinedDescriptorWithPage:(unsigned int)ausage:(unsigned int)b;
 + (id) reusableKeyboardDescriptorWithPage:(unsigned int)ausage:(unsigned int)b;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithEventType:(unsigned int)a ;
 - (unsigned int) hidEventType;
 - (BOOL) describes:(id)a ;


@end
