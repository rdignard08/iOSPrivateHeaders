
@interface UITextChecker : NSObject {

    id _reserved;
    long long _usdt;
}
 + (void) setString:(id)aisExemptFromChecker:(BOOL)b;
 + (void) queryLocalUpdateAssets:(@?)a;
 + (long long) uniqueSpellDocumentTag;
 + (id) bestLanguageForString:(id)afromAlternatives:(id)bcurrentLanguage:(id)cinsertionPointIndex:(unsigned long long)dscriptForBestLanguage:(^@)e;
 + (^{__CFSet=}) createDictHashTable:(BOOL)a;
 + (id) openUserDictionary:(id)a;
 + (id) dictionaryInfo:(id)a;
 + (BOOL) _learnWord:(id)ainDictionary:(id)b;
 + (id) _wordsInDictionary:(id)a;
 + (void) _setWords:(id)ainDictionary:(id)b;
 + (BOOL) _isWord:(id)ainDictionary:(id)b;
 + (BOOL) _forgetWord:(id)ainDictionary:(id)b;
 + (id) _textCheckerBackgroundQueue;
 + (id) availableLanguages;
 + (id) bestLanguageForString:(id)afromAlternatives:(id)bcurrentLanguage:(id)c;
 + (void) learnWord:(id)a;
 + (BOOL) hasLearnedWord:(id)a;
 + (void) unlearnWord:(id)a;

 - (void) dealloc;
 - (id) _initWithAsynchronousLoading:(BOOL)a;
 - (BOOL) _doneLoading;
 - ({_NSRange=QQ}) rangeOfMisspelledWordInString:(id)arange:({_NSRange=QQ})bstartingAt:(long long)cwrap:(BOOL)dlanguage:(id)e;
 - (id) _nameOfDictionaryForDocumentTag:(long long)a;
 - (void) initUserDictionaries;
 - (void) queryUpdateBundle;
 - (void) initGlobals;
 - (void) setIgnoredWords:(id)a;
 - ({_NSRange=QQ}) checkSpellingOfString:(id)astartingAt:(long long)blanguage:(id)cwrap:(BOOL)dcorrection:(^@)e;
 - (id) _checker;
 - (long long) adjustOffsetToNextWordBoundaryInString:(id)astartingAt:(long long)b;
 - (void) _setLanguageDictionaryName:(id)a;
 - (void) _setDocumentDictionaryName:(id)a;
 - ({_NSRange=QQ}) _chunkAndFindMisspelledWordInString:(id)alanguage:(id)blearnedDictionaries:(id)cwordCount:(^q)dcorrection:(^@)eusingChecker:(id)f;
 - ({_NSRange=QQ}) _chunkAndCheckGrammarInString:(id)alanguage:(id)busingChecker:(id)cdetails:(^@)d;
 - ({_NSRange=QQ}) checkGrammarOfString:(id)astartingAt:(long long)blanguage:(id)cwrap:(BOOL)ddetails:(^@)e;
 - (id) correctionForWordRange:({_NSRange=QQ})ainString:(id)blanguage:(id)c;
 - (id) guessesForWordRange:({_NSRange=QQ})ainString:(id)blanguage:(id)c;
 - (id) completionsForPartialWordRange:({_NSRange=QQ})ainString:(id)blanguage:(id)c;
 - (id) suggestWordInLanguage:(id)a;
 - (BOOL) canChangeCaseOfFirstLetterInString:(id)atoUpperCase:(BOOL)blanguage:(id)c;
 - (id) stringForInputString:(id)alanguage:(id)b;
 - (id) alternativesForPinyinInputString:(id)a;
 - (void) ignoreWord:(id)a;
 - (id) ignoredWords;
 - (id) init;
 - (BOOL) isWordInUserDictionaries:(id)acaseSensitive:(BOOL)b;


@end
