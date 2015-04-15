
@interface TIKeyboardCandidateSingle : TIKeyboardCandidate {

    NSString _candidate;
    NSString _input;
}
 + (BOOL) supportsSecureCoding;
 + (id) candidateWithUnchangedInput:(id)a;
 + (id) candidateWithCandidate:(id)aforInput:(id)b;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidate:(id)a;
 - (id) candidate;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (id) input;
 - (id) initWithCandidate:(id)aforInput:(id)b;
 - (void) setCandidate:(id)a;
 - (void) setInput:(id)a;
 - (id) initWithUnchangedInput:(id)a;


@end
