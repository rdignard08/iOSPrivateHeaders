
@protocol NSSecureCoding;
@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {

    BOOL _assertDefaultKeyPlane;
    @"TIKeyboardInputManagerState" _inputManagerState;
    @"TIKeyboardIntermediateText" _intermediateText;
    @"NSString" _layoutTag;
    @"NSString" _accentKeyString;
}
@property (nonatomic, copy, readwrite) TIKeyboardInputManagerState* inputManagerState;
@property (nonatomic, retain, readwrite) TIKeyboardIntermediateText* intermediateText;
@property (nonatomic, copy, readwrite) NSString* layoutTag;
@property (nonatomic, copy, readwrite) NSString* accentKeyString;
@property (nonatomic, assign, readwrite) NSNumber* assertDefaultKeyPlane;
 + (BOOL) supportsSecureCoding;

 - (void) dealloc;
 - (void) setLayoutTag:(id)a;
 - (id) inputManagerState;
 - (id) intermediateText;
 - (BOOL) assertDefaultKeyPlane;
 - (id) accentKeyString;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setInputManagerState:(id)a;
 - (void) setIntermediateText:(id)a;
 - (id) layoutTag;
 - (void) setAccentKeyString:(id)a;
 - (void) setAssertDefaultKeyPlane:(BOOL)a;


@end
