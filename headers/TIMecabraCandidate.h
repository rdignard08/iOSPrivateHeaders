
@interface TIMecabraCandidate : TIKeyboardCandidate {

    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    NSString* _candidate;
    NSString* _input;
    NSNumber* _mecabraCandidatePointerValue;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isFullwidthCandidate;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) candidate;
 - (id) initWithCandidateResultSetCoder:(id)a ;
 - (void) encodeWithCandidateResultSetCoder:(id)a ;
 - (id) input;
 - (BOOL) isForShortcutConversion;
 - (BOOL) isExtensionCandidate;
 - (BOOL) isEmojiCandidate;
 - (id) initWithCandidate:(id)a forInput:(id)b mecabraCandidatePointerValue:(id)c isExtension:(BOOL)d isEmoji:(BOOL)e isShortcut:(BOOL)f ;
 - (id) mecabraCandidatePointerValue;
 - (id) initWithSurface:(id)a input:(id)b mecabraCandidatePointerValue:(id)c ;
 - (void) setMecabraCandidatePointerValue:(id)a ;


@end
