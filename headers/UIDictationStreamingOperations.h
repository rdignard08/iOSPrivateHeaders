
@interface UIDictationStreamingOperations : NSObject {

    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    <UITextInput>* _document;
    NSMutableArray* _operations;
}
@property (nonatomic, retain, readwrite) NSMutableArray* operations;

 - (void) popAndInvoke;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (id) pop;
 - (void) setOperations:(id)a ;
 - (id) operations;
 - (void) performSelectRangeForSpeech:(id)a ;
 - (BOOL) hasOperations;
 - (void) pushSpeechOperation:(id)a ;
 - (void) clearOperations;
 - (void) pushSpeechOperationWithTarget:(id)a selector:(SEL)b object:(id)c ;
 - (void) _performReplaceSelectedText:(id)a ;
 - (double) delayAfterSelector:(SEL)a ;
 - (void) dictationWillBeginInDocument:(id)a ;
 - (void) pushSelectRangeForSpeech:({_NSRange=QQ})a ;
 - (void) pushInsertTextForSpeech:(id)a ;
 - (void) pushReplaceSelectionWithText:(id)a ;
 - (void) willEndEditingInInputDelegate:(id)a ;
 - (BOOL) isNotEmpty;
 - (unsigned long long) selectionChangeDelta;
 - (id) init;
 - (void) setDocument:(id)a ;


@end
