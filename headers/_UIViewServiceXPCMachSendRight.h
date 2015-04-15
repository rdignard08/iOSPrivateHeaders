
@protocol NSSecureCoding;
@interface _UIViewServiceXPCMachSendRight : NSObject <NSSecureCoding> {

    unsigned int _sendRight;
}
 + (BOOL) supportsSecureCoding;
 + (id) wrapSendRight:(unsigned int)a;

 - (void) dealloc;
 - (unsigned int) sendRight;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
