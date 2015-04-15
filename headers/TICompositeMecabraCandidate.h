
@interface TICompositeMecabraCandidate : TIMecabraCandidate {

    NSString* _remainderCandidateString;
    NSArray* _autoconvertedCandidatePointerValues;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithCandidateResultSetCoder:(id)a ;
 - (void) encodeWithCandidateResultSetCoder:(id)a ;
 - (id) label;
 - (id) remainderCandidateString;
 - (id) autoconvertedCandidatePointerValues;
 - (void) setRemainderCandidateString:(id)a ;
 - (void) setAutoconvertedCandidatePointerValues:(id)a ;


@end
