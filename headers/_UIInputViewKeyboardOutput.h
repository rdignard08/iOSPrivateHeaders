
@protocol NSCopying, NSSecureCoding;
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

    BOOL _didBeginOutput;
    q _positionOffset;
}
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (BOOL) didBeginOutput;
 - (q) positionOffset;
 - (void) setPositionOffset:(q)a;
 - (void) setDidBeginOutput:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (void) setInsertionTextAfterSelection:(id)a;
 - (void) setTextToCommit:(id)a;
 - (void) setForwardDeletionCount:(Q)a;
 - (void) setShortcutConversion:(id)a;
 - (void) setHandwritingStrokesToDelete:(id)a;


@end
