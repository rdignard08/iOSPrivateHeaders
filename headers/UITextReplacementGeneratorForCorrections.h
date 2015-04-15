
@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

    BOOL _forceHistoryReplacement;
    BOOL _forceAutocorrectionGuesses;
    BOOL _forceSpellingGuesses;
    @"UITextChecker" _textChecker;
    @"TIKeyboardCandidate" _autocorrectionRecord;
    Q _maxEditDistance;
    Q _maxCountAfterAutocorrectionGuesses;
    Q _maxCountAfterSpellingGuesses;
}

 - (void) dealloc;
 - (void) setTextChecker:(id)a;
 - (void) setAutocorrectionRecord:(id)a;
 - (void) setForceHistoryReplacement:(BOOL)a;
 - (void) setForceAutocorrectionGuesses:(BOOL)a;
 - (void) setForceSpellingGuesses:(BOOL)a;
 - (void) setMaxCountAfterAutocorrectionGuesses:(Q)a;
 - (void) setMaxCountAfterSpellingGuesses:(Q)a;
 - (id) replacements;
 - (void) setMaxEditDistance:(Q)a;
 - (id) textChecker;
 - (id) autocorrectionRecord;
 - (Q) maxCountAfterAutocorrectionGuesses;
 - (Q) maxEditDistance;
 - (Q) maxCountAfterSpellingGuesses;
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
