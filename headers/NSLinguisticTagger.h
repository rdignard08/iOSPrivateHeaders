
@interface NSLinguisticTagger : NSObject {

    @"NSArray" _schemes;
    Q _options;
    @"NSString" _string;
    id _orthographyArray;
    id _tokenArray;
    id _reserved;
}
@property (atomic, copy, readonly) NSArray* tagSchemes;
@property (atomic, retain, readwrite) NSString* string;
 + (BOOL) supportsLanguage:(id)a;
 + (id) availableTagSchemesForLanguage:(id)a;

 - (id) initWithTagSchemes:(id)aoptions:(Q)b;
 - (void) setOrthography:(id)arange:({_NSRange=QQ})b;
 - (id) tagsInRange:({_NSRange=QQ})ascheme:(id)boptions:(Q)ctokenRanges:(^@)d;
 - (void) enumerateTagsInRange:({_NSRange=QQ})ascheme:(id)boptions:(Q)cusingBlock:(@?)d;
 - (id) _tokenDataForParagraphAtIndex:(Q)aparagraphRange:(^{_NSRange=QQ})btagScheme:(id)c;
 - (id) orthographyAtIndex:(Q)aeffectiveRange:(^{_NSRange=QQ})b;
 - (id) _rankedCandidatesForMisspelledRange:({_NSRange=QQ})acandidates:(id)bcontextualFrequencies:(^@)cbaseFrequencies:(^@)d;
 - (id) _tagSchemeForScheme:(id)a;
 - (BOOL) _acceptSentenceTerminatorRange:({_NSRange=QQ})aparagraphRange:({_NSRange=QQ})btokens:(^{_NSLTToken=SCCI(?=^v{?=CC})})ccount:(Q)dtokenIndex:(Q)e;
 - (void) _analyzePunctuationTokensInRange:({_NSRange=QQ})aparagraphRange:({_NSRange=QQ})b;
 - (void) _analyzeTokensInWordRange:({_NSRange=QQ})aparagraphRange:({_NSRange=QQ})b;
 - (void) _analyzeTokensInInterwordRange:({_NSRange=QQ})aparagraphRange:({_NSRange=QQ})b;
 - (void) _acceptSentencesForParagraphRange:({_NSRange=QQ})a;
 - (void) _calculateSentenceRangesForParagraphRange:({_NSRange=QQ})a;
 - (id) _tokenDataForParagraphRange:({_NSRange=QQ})arequireLemmas:(BOOL)brequirePartsOfSpeech:(BOOL)crequireNamedEntities:(BOOL)d;
 - (void) _tokenizeParagraphAtIndex:(Q)arequireLemmas:(BOOL)brequirePartsOfSpeech:(BOOL)crequireNamedEntities:(BOOL)d;
 - (id) _tokenDataForParagraphAtIndex:(Q)aparagraphRange:(^{_NSRange=QQ})brequireLemmas:(BOOL)crequirePartsOfSpeech:(BOOL)drequireNamedEntities:(BOOL)e;
 - (id) tagSchemes;
 - (void) stringEditedInRange:({_NSRange=QQ})achangeInLength:(q)b;
 - ({_NSRange=QQ}) sentenceRangeForRange:({_NSRange=QQ})a;
 - (id) _rankedCandidatesForMisspelledRange:({_NSRange=QQ})acandidates:(id)b;
 - (BOOL) _ngramTagsAndFrequenciesForMisspelledRange:({_NSRange=QQ})aword:(id)btags:(^@)cfrequencies:(^@)d;
 - (id) possibleTagsAtIndex:(Q)ascheme:(id)btokenRange:(^{_NSRange=QQ})csentenceRange:(^{_NSRange=QQ})dscores:(^@)e;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a;
 - (id) tagAtIndex:(Q)ascheme:(id)btokenRange:(^{_NSRange=QQ})csentenceRange:(^{_NSRange=QQ})d;


@end
