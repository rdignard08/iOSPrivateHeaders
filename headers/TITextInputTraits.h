
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
 + (unsigned long long) translateToTextInputAutocapitalizationType:(long long)a;
 + (unsigned long long) translateToTextInputAutocorrectionType:(long long)a;
 + (unsigned long long) translateToTextInputSpellCheckingType:(long long)a;
 + (unsigned long long) translateToTextInputKeyboardType:(long long)a;
 + (unsigned long long) translateToTextInputKeyboardAppearance:(long long)a;
 + (unsigned long long) translateToTextInputReturnKeyType:(long long)a;
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (BOOL) isEqual:(id)a ;
 - (void) setAutocorrectionType:(unsigned long long)a ;
 - (void) setSpellCheckingType:(unsigned long long)a ;
 - (void) setKeyboardAppearance:(unsigned long long)a ;
 - (void) setReturnKeyType:(unsigned long long)a ;
 - (void) setEnablesReturnKeyAutomatically:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned long long) keyboardType;
 - (unsigned long long) autocapitalizationType;
 - (void) setAutocapitalizationType:(unsigned long long)a ;
 - (void) setKeyboardType:(unsigned long long)a ;
 - (BOOL) secureTextEntry;
 - (void) setSecureTextEntry:(BOOL)a ;
 - (unsigned long long) autocorrectionType;
 - (unsigned long long) spellCheckingType;
 - (unsigned long long) keyboardAppearance;
 - (unsigned long long) returnKeyType;
 - (BOOL) enablesReturnKeyAutomatically;


@end
