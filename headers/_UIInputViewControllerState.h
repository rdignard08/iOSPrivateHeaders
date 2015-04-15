
@protocol NSCopying, NSSecureCoding;
@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

    TIDocumentState _documentState;
    TITextInputTraits _textInputTraits;
}
@property (nonatomic, retain, readwrite) TIDocumentState* documentState;
@property (nonatomic, retain, readwrite) TITextInputTraits* textInputTraits;
 + (BOOL) supportsSecureCoding;
 + (id) stateForKeyboardState:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) setTextInputTraits:(id)a;
 - (void) setDocumentState:(id)a;
 - (void) createDocumentStateIfNecessary;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) documentState;
 - (id) textInputTraits;


@end
