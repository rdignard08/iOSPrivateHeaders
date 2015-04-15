
@protocol NSSecureCoding;
@interface _UIKeyboardChangedInformation : NSObject <NSSecureCoding> {

    unsigned int _animationFencingPort;
    BOOL _keyboardOnScreen;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _keyboardPosition;
}
@property (atomic, assign, readonly) NSNumber* animationFencingPort;
@property (atomic, assign, readonly) NSNumber* keyboardPosition;
@property (atomic, assign, readonly) NSNumber* keyboardOnScreen;
 + (BOOL) supportsSecureCoding;
 + (id) informationForKeyboardDown;
 + (id) informationForKeyboardUp:({CGRect={CGPoint=dd}{CGSize=dd}})a;

 - (id) description;
 - (void) dealloc;
 - (id) initWithKeyboardRect:({CGRect={CGPoint=dd}{CGSize=dd}})aonScreen:(BOOL)b;
 - (unsigned int) animationFencingPort;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) keyboardPosition;
 - (BOOL) keyboardOnScreen;
 - (void) insertPermissions;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
