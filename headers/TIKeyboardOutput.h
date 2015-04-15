
@protocol NSSecureCoding;
@interface TIKeyboardOutput : NSObject <NSSecureCoding> {

    @"TIKeyboardCandidate" _acceptedCandidate;
    @"NSString" _textToCommit;
    Q _deletionCount;
    @"NSString" _insertionText;
    Q _forwardDeletionCount;
    @"NSString" _insertionTextAfterSelection;
    @"TIKeyboardCandidate" _shortcutConversion;
    @"NSIndexSet" _handwritingStrokesToDelete;
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
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) deleteBackward;
 - (void) insertTextAfterSelection:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (id) acceptedCandidate;
 - (void) setInsertionText:(id)a;
 - (void) setDeletionCount:(Q)a;
 - (id) textToCommit;
 - (Q) deletionCount;
 - (id) insertionText;
 - (Q) forwardDeletionCount;
 - (id) insertionTextAfterSelection;
 - (id) shortcutConversion;
 - (id) handwritingStrokesToDelete;
 - (void) deleteBackward:(Q)a;
 - (void) setInsertionTextAfterSelection:(id)a;
 - (void) deleteForward:(Q)a;
 - (void) deleteForward;
 - (void) setTextToCommit:(id)a;
 - (void) setForwardDeletionCount:(Q)a;
 - (void) setShortcutConversion:(id)a;
 - (void) setHandwritingStrokesToDelete:(id)a;
 - (void) insertText:(id)a;


@end
