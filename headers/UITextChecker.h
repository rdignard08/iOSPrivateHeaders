
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
 - (id) _initWithAsynchronousLoading:(BOOL)a ;
 - (BOOL) _doneLoading;
 - ({_NSRange=QQ}) rangeOfMisspelledWordInString:(id)a range:({_NSRange=QQ})b startingAt:(long long)c wrap:(BOOL)d language:(id)e ;
 - (id) _nameOfDictionaryForDocumentTag:(long long)a ;
 - (void) initUserDictionaries;
 - (void) queryUpdateBundle;
 - (void) initGlobals;
 - (void) setIgnoredWords:(id)a ;
 - ({_NSRange=QQ}) checkSpellingOfString:(id)a startingAt:(long long)b language:(id)c wrap:(BOOL)d correction:(^@)e ;
 - (id) _checker;
 - (long long) adjustOffsetToNextWordBoundaryInString:(id)a startingAt:(long long)b ;
 - (void) _setLanguageDictionaryName:(id)a ;
 - (void) _setDocumentDictionaryName:(id)a ;
 - ({_NSRange=QQ}) _chunkAndFindMisspelledWordInString:(id)a language:(id)b learnedDictionaries:(id)c wordCount:(^q)d correction:(^@)e usingChecker:(id)f ;
 - ({_NSRange=QQ}) _chunkAndCheckGrammarInString:(id)a language:(id)b usingChecker:(id)c details:(^@)d ;
 - ({_NSRange=QQ}) checkGrammarOfString:(id)a startingAt:(long long)b language:(id)c wrap:(BOOL)d details:(^@)e ;
 - (id) correctionForWordRange:({_NSRange=QQ})a inString:(id)b language:(id)c ;
 - (id) guessesForWordRange:({_NSRange=QQ})a inString:(id)b language:(id)c ;
 - (id) completionsForPartialWordRange:({_NSRange=QQ})a inString:(id)b language:(id)c ;
 - (id) suggestWordInLanguage:(id)a ;
 - (BOOL) canChangeCaseOfFirstLetterInString:(id)a toUpperCase:(BOOL)b language:(id)c ;
 - (id) stringForInputString:(id)a language:(id)b ;
 - (id) alternativesForPinyinInputString:(id)a ;
 - (void) ignoreWord:(id)a ;
 - (id) ignoredWords;
 - (id) init;
 - (BOOL) isWordInUserDictionaries:(id)a caseSensitive:(BOOL)b ;


@end
