
@interface TIZephyrCandidate : TIKeyboardCandidateSingle {

    BOOL extensionCandidate;
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    NSString* _label;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setLabel:(id)a ;
 - (unsigned int) usageTrackingMask;
 - (BOOL) isAutocorrection;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithCandidateResultSetCoder:(id)a ;
 - (void) encodeWithCandidateResultSetCoder:(id)a ;
 - (id) label;
 - (unsigned long long) wordOriginFeedbackID;
 - (BOOL) isExtensionCandidate;
 - (id) initWithCandidate:(id)a forInput:(id)b wordOriginFeedbackID:(unsigned long long)c usageTrackingMask:(unsigned int)d ;
 - (BOOL) isFromPhraseDictionary;
 - (BOOL) isFromTextChecker;
 - (id) initWithCandidate:(id)a forInput:(id)b wordOriginFeedbackID:(unsigned long long)c ;
 - (void) setExtensionCandidate:(BOOL)a ;
 - (void) setIsFromPhraseDictionary:(BOOL)a ;
 - (void) setIsFromTextChecker:(BOOL)a ;


@end
