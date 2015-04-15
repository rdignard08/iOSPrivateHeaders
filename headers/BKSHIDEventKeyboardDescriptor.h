
@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor {

    unsigned int _page;
    unsigned int _usage;
}
 + (BOOL) supportsSecureCoding;
 + (id) descriptorWithPage:(unsigned int)ausage:(unsigned int)b;

 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) describes:(id)a;
 - (id) _initWithPage:(unsigned int)ausage:(unsigned int)beventType:(unsigned int)c;
 - (unsigned int) page;
 - (unsigned int) usage;


@end
