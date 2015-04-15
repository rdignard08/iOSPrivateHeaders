
@protocol NSCopying, NSSecureCoding;
@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {

    (?="integerValue"q"fields"{?="autocapitalizationType"b2"autocorrectionType"b2"spellCheckingType"b2"keyboardType"b4"keyboardAppearance"b2"returnKeyType"b4"enablesReturnKeyAutomatically"b1"secureTextEntry"b1}) _mask;
}
@property (nonatomic, assign, readwrite) NSNumber* autocapitalizationType;
@property (nonatomic, assign, readwrite) NSNumber* autocorrectionType;
@property (nonatomic, assign, readwrite) NSNumber* spellCheckingType;
@property (nonatomic, assign, readwrite) NSNumber* keyboardType;
@property (nonatomic, assign, readwrite) NSNumber* keyboardAppearance;
@property (nonatomic, assign, readwrite) NSNumber* returnKeyType;
@property (nonatomic, assign, readwrite) NSNumber* enablesReturnKeyAutomatically;
@property (nonatomic, assign, readwrite) NSNumber* secureTextEntry;
 + (id) traitsForUITextInputTraits:(id)a;
 + (Q) translateToTextInputAutocapitalizationType:(q)a;
 + (Q) translateToTextInputAutocorrectionType:(q)a;
 + (Q) translateToTextInputSpellCheckingType:(q)a;
 + (Q) translateToTextInputKeyboardType:(q)a;
 + (Q) translateToTextInputKeyboardAppearance:(q)a;
 + (Q) translateToTextInputReturnKeyType:(q)a;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (BOOL) isEqual:(id)a;
 - (void) setAutocorrectionType:(Q)a;
 - (void) setSpellCheckingType:(Q)a;
 - (void) setKeyboardAppearance:(Q)a;
 - (void) setReturnKeyType:(Q)a;
 - (void) setEnablesReturnKeyAutomatically:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) keyboardType;
 - (Q) autocapitalizationType;
 - (void) setAutocapitalizationType:(Q)a;
 - (void) setKeyboardType:(Q)a;
 - (BOOL) secureTextEntry;
 - (void) setSecureTextEntry:(BOOL)a;
 - (Q) autocorrectionType;
 - (Q) spellCheckingType;
 - (Q) keyboardAppearance;
 - (Q) returnKeyType;
 - (BOOL) enablesReturnKeyAutomatically;


@end
