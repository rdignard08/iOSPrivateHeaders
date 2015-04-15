
@interface PRCandidateList : NSObject {

    NSMutableArray _candidates;
    unsigned long long _maxCount;
}

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (BOOL) isFull;
 - (void) addCandidate:(id)a;
 - (unsigned long long) maxCount;
 - (id) initWithMaxCount:(unsigned long long)a;
 - (void) addCandidateWithString:(id)aerrorType:(unsigned long long)b;
 - (void) addCandidateWithBuffer:(char*)aencoding:(unsigned int)berrorType:(unsigned long long)c;
 - (void) addCandidateWithBuffer:(char*)aencoding:(unsigned int)btransform:(unsigned long long)cerrorType:(unsigned long long)d;
 - (id) candidates;
 - (id) candidateStrings;


@end
