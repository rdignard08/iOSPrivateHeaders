
@protocol NSCopying, NSSecureCoding, TIKeyboardCandidateCoding;
@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {

    @"NSString" _alternativeText;
}
@property (nonatomic, assign, readonly) NSString* candidate;
@property (nonatomic, assign, readonly) NSString* input;
@property (nonatomic, assign, readonly) NSString* label;
@property (nonatomic, copy, readwrite) NSString* alternativeText;
@property (nonatomic, assign, readonly) NSNumber* wordOriginFeedbackID;
@property (nonatomic, assign, readonly) NSNumber* deleteCount;
@property (nonatomic, assign, readonly) NSNumber* isForShortcutConversion;
@property (nonatomic, assign, readonly) NSNumber* isAutocorrection;
@property (nonatomic, assign, readonly, isExtensionCandidate) NSNumber* extensionCandidate;
@property (nonatomic, assign, readonly, isEmojiCandidate) NSNumber* emojiCandidate;
@property (nonatomic, assign, readonly, isCompletionCandidate) NSNumber* completionCandidate;
@property (nonatomic, assign, readonly, isInlineCompletionCandidate) NSNumber* inlineCompletionCandidate;
@property (nonatomic, assign, readonly, isFullwidthCandidate) NSNumber* fullwidthCandidate;
@property (nonatomic, assign, readonly) NSNumber* usageTrackingMask;
 + (BOOL) supportsSecureCoding;
 + (int) type;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setAlternativeText:(id)a;
 - (BOOL) isCompletionCandidate;
 - (BOOL) isFullwidthCandidate;
 - (unsigned int) usageTrackingMask;
 - (BOOL) isAutocorrection;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) candidate;
 - (id) initWithCandidateResultSetCoder:(id)a;
 - (void) encodeWithCandidateResultSetCoder:(id)a;
 - (unsigned long long) deleteCount;
 - (id) label;
 - (id) alternativeText;
 - (id) input;
 - (BOOL) isInlineCompletionCandidate;
 - (unsigned long long) wordOriginFeedbackID;
 - (BOOL) isForShortcutConversion;
 - (BOOL) isExtensionCandidate;
 - (BOOL) isEmojiCandidate;


@end
