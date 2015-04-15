
@interface UIDictationPhrase : NSObject {

    NSString* _text;
    NSArray* _alternativeInterpretations;
}
@property (nonatomic, assign, readonly) NSString* text;
@property (nonatomic, assign, readonly) NSArray* alternativeInterpretations;
 + (id) phraseWithText:(id)aalternativeInterpretations:(id)b;

 - (id) description;
 - (void) dealloc;
 - (id) initWithText:(id)aalternativeInterpretations:(id)b;
 - (id) alternativeInterpretations;
 - (id) text;


@end
