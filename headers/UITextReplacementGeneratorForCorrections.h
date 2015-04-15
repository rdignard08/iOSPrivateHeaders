
@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

    BOOL _forceHistoryReplacement;
    BOOL _forceAutocorrectionGuesses;
    BOOL _forceSpellingGuesses;
    UITextChecker* _textChecker;
    TIKeyboardCandidate* _autocorrectionRecord;
    unsigned long long _maxEditDistance;
    unsigned long long _maxCountAfterAutocorrectionGuesses;
    unsigned long long _maxCountAfterSpellingGuesses;
}

 - (void) dealloc;
 - (void) setTextChecker:(id)a;
 - (void) setAutocorrectionRecord:(id)a;
 - (void) setForceHistoryReplacement:(BOOL)a;
 - (void) setForceAutocorrectionGuesses:(BOOL)a;
 - (void) setForceSpellingGuesses:(BOOL)a;
 - (void) setMaxCountAfterAutocorrectionGuesses:(unsigned long long)a;
 - (void) setMaxCountAfterSpellingGuesses:(unsigned long long)a;
 - (id) replacements;
 - (void) setMaxEditDistance:(unsigned long long)a;
 - (id) textChecker;
 - (id) autocorrectionRecord;
 - (unsigned long long) maxCountAfterAutocorrectionGuesses;
 - (unsigned long long) maxEditDistance;
 - (unsigned long long) maxCountAfterSpellingGuesses;
 - (BOOL) isStringMisspelled:(id)a;
 - (BOOL) forceHistoryReplacement;
 - (id) addReplacementRevertingAutocorrectionToReplacements:(id)a;
 - (void) addPreviouslySuggestedAutocorrectionToReplacements:(id)a;
 - (BOOL) forceAutocorrectionGuesses;
 - (void) addAutocorrectionGuessesToReplacements:(id)a;
 - (BOOL) forceSpellingGuesses;
 - (void) addSpellingGuessesForString:(id)aToReplacements:(id)b;
 - (id) init;


@end
