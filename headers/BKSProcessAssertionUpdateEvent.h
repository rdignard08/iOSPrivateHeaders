
@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {

    @"NSString" _name;
    unsigned int _flags;
}

 - (unsigned int) flags;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) setName:(id)a;
 - (void) setFlags:(unsigned int)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
