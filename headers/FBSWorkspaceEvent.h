
@protocol BSXPCCoding;
@interface FBSWorkspaceEvent : NSObject <BSXPCCoding> {

}

 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;


@end
