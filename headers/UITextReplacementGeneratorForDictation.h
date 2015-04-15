
@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

    NSTextAlternatives* _alternatives;
}

 - (void) dealloc;
 - (id) replacements;
 - (id) initWithAlternatives:(id)a stringToReplace:(id)b replacementRange:(id)c ;
 - (id) alternatives;


@end
