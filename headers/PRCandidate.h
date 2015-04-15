
@interface PRCandidate : NSObject {

    @"NSString" _string;
    double _errorScore;
    double _lmScore;
    BOOL _blacklisted;
}
 + (double) errorScoreForType:(unsigned long long)a;
 + (id) candidateWithString:(id)aerrorType:(unsigned long long)b;
 + (id) candidateWithBuffer:(char*)aencoding:(unsigned int)btransform:(unsigned long long)cerrorType:(unsigned long long)d;
 + (id) candidateWithString:(id)aerrorScore:(double)b;
 + (id) candidateWithBuffer:(char*)aencoding:(unsigned int)berrorType:(unsigned long long)c;

 - (double) score;
 - (id) description;
 - (void) dealloc;
 - (id) string;
 - (id) initWithString:(id)aerrorScore:(double)b;
 - (double) errorScore;
 - (double) languageModelScore;
 - (BOOL) isBlacklisted;
 - (void) setErrorScore:(double)a;
 - (void) setLanguageModelScore:(double)a;
 - (void) setBlacklisted:(BOOL)a;


@end
