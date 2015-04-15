
@protocol NSSecureCoding;
@interface _UIViewServiceXPCMachSendRight : NSObject <NSSecureCoding> {

    I _sendRight;
}
 + (BOOL) supportsSecureCoding;
 + (id) wrapSendRight:(I)a;

 - (void) dealloc;
 - (I) sendRight;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
