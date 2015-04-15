
@interface TIHandwritingCandidate : TIKeyboardCandidateSingle {

    Q _uniqueID;
    Q _completionUniqueID;
}
 + (BOOL) supportsSecureCoding;
 + (i) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (BOOL) isInlineCompletionCandidate;
 - (Q) uniqueID;
 - (Q) completionUniqueID;
 - (id) initWithCandidate:(id)aforInput:(id)buniqueID:(Q)ccompletionUniqueID:(Q)d;


@end
