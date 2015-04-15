
@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {

    @"NSString" _name;
    I _flags;
}

 - (I) flags;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) setName:(id)a;
 - (void) setFlags:(I)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
