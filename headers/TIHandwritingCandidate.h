
@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

    unsigned long long _uniqueID;
    unsigned long long _completionUniqueID;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithCandidateResultSetCoder:(id)a ;
 - (void) encodeWithCandidateResultSetCoder:(id)a ;
 - (BOOL) isInlineCompletionCandidate;
 - (unsigned long long) uniqueID;
 - (unsigned long long) completionUniqueID;
 - (id) initWithCandidate:(id)a forInput:(id)b uniqueID:(unsigned long long)c completionUniqueID:(unsigned long long)d ;


@end
