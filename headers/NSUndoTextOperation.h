
@interface NSUndoTextOperation : NSObject {

    {_NSRange="location"Q"length"Q} _affectedRange;
    @"UITextInputController" _inputController;
}
@property (nonatomic, assign, readwrite) NSNumber* affectedRange;
@property (nonatomic, assign, readwrite) UITextInputController* inputController;

 - (id) inputController;
 - (void) setInputController:(id)a;
 - (id) initWithAffectedRange:({_NSRange=QQ})ainputController:(id)b;
 - (void) undoRedo;
 - (BOOL) supportsCoalescing;
 - ({_NSRange=QQ}) affectedRange;
 - (void) setAffectedRange:({_NSRange=QQ})a;


@end
