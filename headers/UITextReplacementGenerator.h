
@interface UITextReplacementGenerator : NSObject {

    UITextRange _replacementRange;
    NSString _stringToReplace;
}
@property (nonatomic, retain, readwrite) UITextRange* replacementRange;
@property (nonatomic, copy, readwrite) NSString* stringToReplace;

 - (void) dealloc;
 - (void) setReplacementRange:(id)a;
 - (id) replacementRange;
 - (void) setStringToReplace:(id)a;
 - (id) stringToReplace;
 - (id) replacements;
 - (BOOL) shouldAllowString:(id)aintoReplacements:(id)b;
 - (id) replacementWithText:(id)a;
 - (void) addPlaceholderForEmptyReplacements:(id)a;


@end
