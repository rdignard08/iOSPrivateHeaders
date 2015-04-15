
@interface PRCandidateList : NSObject {

    NSMutableArray* _candidates;
    unsigned long long _maxCount;
}

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) count;
 - (BOOL) isFull;
 - (void) addCandidate:(id)a ;
 - (unsigned long long) maxCount;
 - (id) initWithMaxCount:(unsigned long long)a ;
 - (void) addCandidateWithString:(id)a errorType:(unsigned long long)b ;
 - (void) addCandidateWithBuffer:(char*)a encoding:(unsigned int)b errorType:(unsigned long long)c ;
 - (void) addCandidateWithBuffer:(char*)a encoding:(unsigned int)b transform:(unsigned long long)c errorType:(unsigned long long)d ;
 - (id) candidates;
 - (id) candidateStrings;


@end
