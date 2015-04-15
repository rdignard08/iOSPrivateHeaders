
@interface PRCandidate : NSObject {

    @"NSString" _string;
    d _errorScore;
    d _lmScore;
    BOOL _blacklisted;
}
 + (d) errorScoreForType:(Q)a;
 + (id) candidateWithString:(id)aerrorType:(Q)b;
 + (id) candidateWithBuffer:(*)aencoding:(I)btransform:(Q)cerrorType:(Q)d;
 + (id) candidateWithString:(id)aerrorScore:(d)b;
 + (id) candidateWithBuffer:(*)aencoding:(I)berrorType:(Q)c;

 - (d) score;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (id) initWithString:(id)aerrorScore:(d)b;
 - (d) errorScore;
 - (d) languageModelScore;
 - (BOOL) isBlacklisted;
 - (void) setErrorScore:(d)a;
 - (void) setLanguageModelScore:(d)a;
 - (void) setBlacklisted:(BOOL)a;


@end
