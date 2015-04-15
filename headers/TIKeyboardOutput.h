
@protocol NSSecureCoding;
@interface TIKeyboardOutput : NSObject <NSSecureCoding> {

    TIKeyboardCandidate _acceptedCandidate;
    NSString _textToCommit;
    unsigned long long _deletionCount;
    NSString _insertionText;
    unsigned long long _forwardDeletionCount;
    NSString _insertionTextAfterSelection;
    TIKeyboardCandidate _shortcutConversion;
    NSIndexSet _handwritingStrokesToDelete;
}
@property (nonatomic, retain, readwrite) TIKeyboardCandidate* acceptedCandidate;
@property (nonatomic, copy, readwrite) NSString* textToCommit;
@property (nonatomic, assign, readwrite) NSNumber* deletionCount;
@property (nonatomic, copy, readwrite) NSString* insertionText;
@property (nonatomic, assign, readwrite) NSNumber* forwardDeletionCount;
@property (nonatomic, copy, readwrite) NSString* insertionTextAfterSelection;
@property (nonatomic, retain, readwrite) TIKeyboardCandidate* shortcutConversion;
@property (nonatomic, copy, readwrite) NSIndexSet* handwritingStrokesToDelete;
 + (BOOL) supportsSecureCoding;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) deleteBackward;
 - (void) insertTextAfterSelection:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (id) acceptedCandidate;
 - (void) setInsertionText:(id)a;
 - (void) setDeletionCount:(unsigned long long)a;
 - (id) textToCommit;
 - (unsigned long long) deletionCount;
 - (id) insertionText;
 - (unsigned long long) forwardDeletionCount;
 - (id) insertionTextAfterSelection;
 - (id) shortcutConversion;
 - (id) handwritingStrokesToDelete;
 - (void) deleteBackward:(unsigned long long)a;
 - (void) setInsertionTextAfterSelection:(id)a;
 - (void) deleteForward:(unsigned long long)a;
 - (void) deleteForward;
 - (void) setTextToCommit:(id)a;
 - (void) setForwardDeletionCount:(unsigned long long)a;
 - (void) setShortcutConversion:(id)a;
 - (void) setHandwritingStrokesToDelete:(id)a;
 - (void) insertText:(id)a;


@end
