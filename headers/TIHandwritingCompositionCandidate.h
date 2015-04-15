
@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle {

    Q _deleteCount;
}
 + (BOOL) supportsSecureCoding;
 + (i) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (Q) deleteCount;
 - (id) initWithCandidate:(id)adeleteCount:(Q)b;
 - (id) label;


@end
