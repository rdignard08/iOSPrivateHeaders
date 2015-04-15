
@protocol NSSecureCoding;
@interface UITextInputMode : NSObject <NSSecureCoding> {

}
@property (nonatomic, retain, readonly) NSString* primaryLanguage;
 + (BOOL) supportsSecureCoding;
 + (id) currentInputMode;
 + (id) activeInputModes;

 - (id) primaryLanguage;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
