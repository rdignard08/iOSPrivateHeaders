
@protocol NSCopying, NSSecureCoding;
@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {

    BOOL _shouldDismiss;
    BOOL _shouldAdvanceInputMode;
    BOOL _requiresInputManagerSync;
    BOOL _shouldAdvanceResponder;
    BOOL _shouldPostReturnKeyNotification;
    NSArray* _keyboardOutputs;
    NSString* _primaryLanguage;
}
@property (nonatomic, retain, readwrite) NSArray* keyboardOutputs;
@property (nonatomic, assign, readwrite) NSNumber* shouldDismiss;
@property (nonatomic, assign, readwrite) NSNumber* shouldAdvanceInputMode;
@property (nonatomic, copy, readwrite) NSString* primaryLanguage;
@property (nonatomic, assign, readwrite) NSNumber* requiresInputManagerSync;
@property (nonatomic, assign, readwrite) NSNumber* shouldAdvanceResponder;
@property (nonatomic, assign, readwrite) NSNumber* shouldPostReturnKeyNotification;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) deleteBackward;
 - (id) primaryLanguage;
 - (void) setShouldPostReturnKeyNotification:(BOOL)a ;
 - (BOOL) requiresInputManagerSync;
 - (void) setRequiresInputManagerSync:(BOOL)a ;
 - (void) setShouldAdvanceResponder:(BOOL)a ;
 - (id) keyboardOutputs;
 - (void) setKeyboardOutputs:(id)a ;
 - (BOOL) shouldAdvanceResponder;
 - (void) setPrimaryLanguage:(id)a ;
 - (BOOL) shouldPostReturnKeyNotification;
 - (BOOL) shouldAdvanceInputMode;
 - (BOOL) shouldDismiss;
 - (void) adjustTextPositionByCharacterOffset:(long long)a ;
 - (void) setShouldDismiss:(BOOL)a ;
 - (void) setShouldAdvanceInputMode:(BOOL)a ;
 - (void) _pushNewKeyboardOutput;
 - (id) _currentKeyboardOutput;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) insertText:(id)a ;


@end
