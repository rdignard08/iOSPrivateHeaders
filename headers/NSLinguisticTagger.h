
@interface NSLinguisticTagger : NSObject {

    NSArray* _schemes;
    unsigned long long _options;
    NSString* _string;
    id _orthographyArray;
    id _tokenArray;
    id _reserved;
}
@property (atomic, copy, readonly) NSArray* tagSchemes;
@property (atomic, retain, readwrite) NSString* string;
 + (BOOL) supportsLanguage:(id)a;
 + (id) availableTagSchemesForLanguage:(id)a;

 - (id) initWithTagSchemes:(id)a options:(unsigned long long)b ;
 - (void) setOrthography:(id)a range:({_NSRange=QQ})b ;
 - (id) tagsInRange:({_NSRange=QQ})a scheme:(id)b options:(unsigned long long)c tokenRanges:(^@)d ;
 - (void) enumerateTagsInRange:({_NSRange=QQ})a scheme:(id)b options:(unsigned long long)c usingBlock:(@?)d ;
 - (id) _tokenDataForParagraphAtIndex:(unsigned long long)a paragraphRange:(^{_NSRange=QQ})b tagScheme:(id)c ;
 - (id) orthographyAtIndex:(unsigned long long)a effectiveRange:(^{_NSRange=QQ})b ;
 - (id) _rankedCandidatesForMisspelledRange:({_NSRange=QQ})a candidates:(id)b contextualFrequencies:(^@)c baseFrequencies:(^@)d ;
 - (id) _tagSchemeForScheme:(id)a ;
 - (BOOL) _acceptSentenceTerminatorRange:({_NSRange=QQ})a paragraphRange:({_NSRange=QQ})b tokens:(^{_NSLTToken=SCCI(?=^v{?=CC})})c count:(unsigned long long)d tokenIndex:(unsigned long long)e ;
 - (void) _analyzePunctuationTokensInRange:({_NSRange=QQ})a paragraphRange:({_NSRange=QQ})b ;
 - (void) _analyzeTokensInWordRange:({_NSRange=QQ})a paragraphRange:({_NSRange=QQ})b ;
 - (void) _analyzeTokensInInterwordRange:({_NSRange=QQ})a paragraphRange:({_NSRange=QQ})b ;
 - (void) _acceptSentencesForParagraphRange:({_NSRange=QQ})a ;
 - (void) _calculateSentenceRangesForParagraphRange:({_NSRange=QQ})a ;
 - (id) _tokenDataForParagraphRange:({_NSRange=QQ})a requireLemmas:(BOOL)b requirePartsOfSpeech:(BOOL)c requireNamedEntities:(BOOL)d ;
 - (void) _tokenizeParagraphAtIndex:(unsigned long long)a requireLemmas:(BOOL)b requirePartsOfSpeech:(BOOL)c requireNamedEntities:(BOOL)d ;
 - (id) _tokenDataForParagraphAtIndex:(unsigned long long)a paragraphRange:(^{_NSRange=QQ})b requireLemmas:(BOOL)c requirePartsOfSpeech:(BOOL)d requireNamedEntities:(BOOL)e ;
 - (id) tagSchemes;
 - (void) stringEditedInRange:({_NSRange=QQ})a changeInLength:(long long)b ;
 - ({_NSRange=QQ}) sentenceRangeForRange:({_NSRange=QQ})a ;
 - (id) _rankedCandidatesForMisspelledRange:({_NSRange=QQ})a candidates:(id)b ;
 - (BOOL) _ngramTagsAndFrequenciesForMisspelledRange:({_NSRange=QQ})a word:(id)b tags:(^@)c frequencies:(^@)d ;
 - (id) possibleTagsAtIndex:(unsigned long long)a scheme:(id)b tokenRange:(^{_NSRange=QQ})c sentenceRange:(^{_NSRange=QQ})d scores:(^@)e ;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a ;
 - (id) tagAtIndex:(unsigned long long)a scheme:(id)b tokenRange:(^{_NSRange=QQ})c sentenceRange:(^{_NSRange=QQ})d ;


@end
