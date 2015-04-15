
@protocol BSXPCCoding;
@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {

    unsigned int _reason;
    @"NSString" _targetBundleIdentifier;
    int _targetPID;
}

 - (id) description;
 - (void) dealloc;
 - (unsigned int) reason;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (void) setTargetBundleIdentifier:(id)a;
 - (void) setTargetPID:(int)a;
 - (void) setReason:(unsigned int)a;
 - (id) targetBundleIdentifier;
 - (int) targetPID;


@end
