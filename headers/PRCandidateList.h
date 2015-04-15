
@interface PRCandidateList : NSObject {

    @"NSMutableArray" _candidates;
    Q _maxCount;
}

 - (id) description;
 - (void) dealloc;
 - (Q) count;
 - (BOOL) isFull;
 - (void) addCandidate:(id)a;
 - (Q) maxCount;
 - (id) initWithMaxCount:(Q)a;
 - (void) addCandidateWithString:(id)aerrorType:(Q)b;
 - (void) addCandidateWithBuffer:(*)aencoding:(I)berrorType:(Q)c;
 - (void) addCandidateWithBuffer:(*)aencoding:(I)btransform:(Q)cerrorType:(Q)d;
 - (id) candidates;
 - (id) candidateStrings;


@end
