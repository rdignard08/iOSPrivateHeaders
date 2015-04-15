
@protocol NSCopying, NSSecureCoding;
@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding> {

    @"NSIndexSet" _keyCodes;
    SEL _action;
    q _buttonType;
    @"UIEvent" _triggeringEvent;
    @"NSString" _segueIdentifier;
    @"UIViewController" _controllerForSegue;
    @"NSString" _input;
    q _modifierFlags;
}
@property (nonatomic, assign, readonly) NSString* input;
@property (nonatomic, assign, readonly) NSNumber* modifierFlags;
 + (BOOL) supportsSecureCoding;
 + (id) keyCommandWithInput:(id)amodifierFlags:(q)baction:(SEL)c;
 + (id) keyCommandWithKeyCodes:(id)amodifierFlags:(q)baction:(SEL)c;
 + (id) keyCommandWithKeyCodes:(id)amodifierFlags:(q)bbuttonType:(q)c;
 + (id) keyCommandWithInput:(id)amodifierFlags:(q)bbuttonType:(q)c;
 + (id) keyCommandWithInput:(id)amodifierFlags:(q)bsegueIdentifier:(id)c;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (SEL) action;
 - (q) _buttonType;
 - (BOOL) triggerSegueIfPossible;
 - (void) _setButtonType:(q)a;
 - (void) setAction:(SEL)a;
 - (void) _setTriggeringEvent:(id)a;
 - (id) _segueIdentifier;
 - (void) _setViewControllerForSegue:(id)a;
 - (id) _keyCodes;
 - (id) initWithKeyCodes:(id)amodifierFlags:(q)baction:(SEL)c;
 - (id) initWithInput:(id)amodifierFlags:(q)bsegueIdentifier:(id)c;
 - (id) initWithInput:(id)amodifierFlags:(q)baction:(SEL)c;
 - (id) initWithKeyCodes:(id)amodifierFlags:(q)bbuttonType:(q)c;
 - (id) initWithInput:(id)amodifierFlags:(q)bbuttonType:(q)c;
 - (id) _controllerForSegue;
 - (id) _triggeringEvent;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) input;
 - (q) modifierFlags;


@end
