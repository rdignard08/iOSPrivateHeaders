
@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor {

    I _page;
    I _usage;
}
 + (BOOL) supportsSecureCoding;
 + (id) descriptorWithPage:(I)ausage:(I)b;

 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) describes:(id)a;
 - (id) _initWithPage:(I)ausage:(I)beventType:(I)c;
 - (I) page;
 - (I) usage;


@end
