
@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {

    NSString* _label;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;
 + (id) candidateWithPinyinSyllable:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (id) label;
 - (id) initWithPinyinSyllable:(id)a;


@end
