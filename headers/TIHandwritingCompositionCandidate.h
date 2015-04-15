
@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle {

    unsigned long long _deleteCount;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (unsigned long long) deleteCount;
 - (id) initWithCandidate:(id)adeleteCount:(unsigned long long)b;
 - (id) label;


@end
