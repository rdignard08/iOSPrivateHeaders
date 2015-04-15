
@interface BKSHIDEventVendorDefinedDescriptor : BKSHIDEventKeyboardDescriptor {

}
 + (id) descriptorWithPage:(unsigned int)ausage:(unsigned int)b;

 - (id) _initWithPage:(unsigned int)ausage:(unsigned int)b;


@end
