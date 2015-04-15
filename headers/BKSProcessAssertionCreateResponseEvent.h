
@interface BKSProcessAssertionCreateResponseEvent : BKSProcessAssertionEvent {

    BOOL _success;
}

 - (id) description;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (BOOL) success;
 - (void) setSuccess:(BOOL)a;


@end
