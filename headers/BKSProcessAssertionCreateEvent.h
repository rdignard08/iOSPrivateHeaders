
@protocol BSXPCCoding;
@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {

    I _reason;
    @"NSString" _targetBundleIdentifier;
    i _targetPID;
}

 - (id) description;
 - (void) dealloc;
 - (I) reason;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (void) setTargetBundleIdentifier:(id)a;
 - (void) setTargetPID:(i)a;
 - (void) setReason:(I)a;
 - (id) targetBundleIdentifier;
 - (i) targetPID;


@end
