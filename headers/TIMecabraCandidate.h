
@interface TIMecabraCandidate : TIKeyboardCandidate {

    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    NSString _candidate;
    NSString _input;
    NSNumber _mecabraCandidatePointerValue;
}
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isFullwidthCandidate;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) candidate;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (id) input;
 - (BOOL) isForShortcutConversion;
 - (BOOL) isExtensionCandidate;
 - (BOOL) isEmojiCandidate;
 - (id) initWithCandidate:(id)aforInput:(id)bmecabraCandidatePointerValue:(id)cisExtension:(BOOL)disEmoji:(BOOL)eisShortcut:(BOOL)f;
 - (id) mecabraCandidatePointerValue;
 - (id) initWithSurface:(id)ainput:(id)bmecabraCandidatePointerValue:(id)c;
 - (void) setMecabraCandidatePointerValue:(id)a;


@end
