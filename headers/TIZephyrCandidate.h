
@interface TIZephyrCandidate : TIKeyboardCandidateSingle {

    BOOL extensionCandidate;
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    I _usageTrackingMask;
    Q _wordOriginFeedbackID;
    @"NSString" _label;
}
 + (BOOL) supportsSecureCoding;
 + (i) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (void) setLabel:(id)a;
 - (I) usageTrackingMask;
 - (BOOL) isAutocorrection;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (id) label;
 - (Q) wordOriginFeedbackID;
 - (BOOL) isExtensionCandidate;
 - (id) initWithCandidate:(id)aforInput:(id)bwordOriginFeedbackID:(Q)cusageTrackingMask:(I)d;
 - (BOOL) isFromPhraseDictionary;
 - (BOOL) isFromTextChecker;
 - (id) initWithCandidate:(id)aforInput:(id)bwordOriginFeedbackID:(Q)c;
 - (void) setExtensionCandidate:(BOOL)a;
 - (void) setIsFromPhraseDictionary:(BOOL)a;
 - (void) setIsFromTextChecker:(BOOL)a;


@end
