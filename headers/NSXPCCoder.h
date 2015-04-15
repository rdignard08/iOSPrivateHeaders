
@interface NSXPCCoder : NSCoder {

    @"<NSObject>" _userInfo;
    id _reserved1;
}

 - (id) decodeXPCObjectOfType:(^{_xpc_type_s=})aforKey:(id)b;
 - (void) encodeXPCObject:(id)aforKey:(id)b;
 - (id) decodeXPCObjectForKey:(id)a;
 - (void) dealloc;
 - (id) userInfo;
 - (id) init;
 - (BOOL) requiresSecureCoding;
 - (void) setUserInfo:(id)a;


@end
