
@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator {

    @"NSTextAlternatives" _alternatives;
}

 - (void) dealloc;
 - (id) replacements;
 - (id) initWithAlternatives:(id)astringToReplace:(id)breplacementRange:(id)c;
 - (id) alternatives;


@end
