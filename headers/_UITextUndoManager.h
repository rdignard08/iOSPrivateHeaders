
@interface _UITextUndoManager : NSUndoManager {

    @"UITextInputController" _inputController;
}

 - (id) inputController;
 - (void) setInputController:(id)a;
 - (void) removeAllActions;


@end
