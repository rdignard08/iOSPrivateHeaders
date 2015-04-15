
@protocol NSCopying, NSSecureCoding;
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

    BOOL _didBeginOutput;
    long long _positionOffset;
}
 + (BOOL) supportsSecureCoding;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isEqual:(id)a;
 - (BOOL) didBeginOutput;
 - (long long) positionOffset;
 - (void) setPositionOffset:(long long)a;
 - (void) setDidBeginOutput:(BOOL)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (void) setInsertionTextAfterSelection:(id)a;
 - (void) setTextToCommit:(id)a;
 - (void) setForwardDeletionCount:(unsigned long long)a;
 - (void) setShortcutConversion:(id)a;
 - (void) setHandwritingStrokesToDelete:(id)a;


@end
