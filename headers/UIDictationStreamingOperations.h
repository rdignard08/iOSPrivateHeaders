
@interface UIDictationStreamingOperations : NSObject {

    d _timeAfterInsertion;
    d _timeAfterSelectRange;
    @"<UITextInput>" _document;
    @"NSMutableArray" _operations;
}
@property (nonatomic, retain, readwrite) NSMutableArray* operations;

 - (void) popAndInvoke;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (id) pop;
 - (void) setOperations:(id)a;
 - (id) operations;
 - (void) performSelectRangeForSpeech:(id)a;
 - (BOOL) hasOperations;
 - (void) pushSpeechOperation:(id)a;
 - (void) clearOperations;
 - (void) pushSpeechOperationWithTarget:(id)aselector:(SEL)bobject:(id)c;
 - (void) _performReplaceSelectedText:(id)a;
 - (d) delayAfterSelector:(SEL)a;
 - (void) dictationWillBeginInDocument:(id)a;
 - (void) pushSelectRangeForSpeech:({_NSRange=QQ})a;
 - (void) pushInsertTextForSpeech:(id)a;
 - (void) pushReplaceSelectionWithText:(id)a;
 - (void) willEndEditingInInputDelegate:(id)a;
 - (BOOL) isNotEmpty;
 - (Q) selectionChangeDelta;
 - (id) init;
 - (void) setDocument:(id)a;


@end
