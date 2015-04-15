
@protocol NSCopying, NSSecureCoding;
@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {

    NSIndexSet* _keyCodes;
    SEL _action;
    long long _buttonType;
    UIEvent* _triggeringEvent;
    NSString* _segueIdentifier;
    UIViewController* _controllerForSegue;
    NSString* _input;
    long long _modifierFlags;
}
@property (nonatomic, assign, readonly) NSString* input;
@property (nonatomic, assign, readonly) NSNumber* modifierFlags;
 + (BOOL) supportsSecureCoding;
 + (id) keyCommandWithInput:(id)amodifierFlags:(long long)baction:(SEL)c;
 + (id) keyCommandWithKeyCodes:(id)amodifierFlags:(long long)baction:(SEL)c;
 + (id) keyCommandWithKeyCodes:(id)amodifierFlags:(long long)bbuttonType:(long long)c;
 + (id) keyCommandWithInput:(id)amodifierFlags:(long long)bbuttonType:(long long)c;
 + (id) keyCommandWithInput:(id)amodifierFlags:(long long)bsegueIdentifier:(id)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (SEL) action;
 - (long long) _buttonType;
 - (BOOL) triggerSegueIfPossible;
 - (void) _setButtonType:(long long)a;
 - (void) setAction:(SEL)a;
 - (void) _setTriggeringEvent:(id)a;
 - (id) _segueIdentifier;
 - (void) _setViewControllerForSegue:(id)a;
 - (id) _keyCodes;
 - (id) initWithKeyCodes:(id)amodifierFlags:(long long)baction:(SEL)c;
 - (id) initWithInput:(id)amodifierFlags:(long long)bsegueIdentifier:(id)c;
 - (id) initWithInput:(id)amodifierFlags:(long long)baction:(SEL)c;
 - (id) initWithKeyCodes:(id)amodifierFlags:(long long)bbuttonType:(long long)c;
 - (id) initWithInput:(id)amodifierFlags:(long long)bbuttonType:(long long)c;
 - (id) _controllerForSegue;
 - (id) _triggeringEvent;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) input;
 - (long long) modifierFlags;


@end
