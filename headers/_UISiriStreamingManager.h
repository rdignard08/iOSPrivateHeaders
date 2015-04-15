
@interface _UISiriStreamingManager : NSObject {

    UITextView _textView;
    UIView _siriItemView;
    NSLayoutManager _streamingLayoutManager;
    NSTextStorage _streamingTextStorage;
    NSTextContainer _streamingTextContainer;
    NSMutableArray _words;
    NSMutableArray _wordTokens;
    NSArray _wordsToSetAfterAnimations;
    unsigned long long _firstIndexToRemoveAfterLineChangeClearingAnimation;
    BOOL _isPerformingLineChangeClearingAnimation;
    BOOL _commitResultsAfterDynamicsFinish;
    BOOL _waitingForDynamicsBehaviorToStop;
}
@property (nonatomic, copy, readwrite) NSArray* words;
@property (nonatomic, assign, readonly) NSLayoutManager* streamingLayoutManager;
@property (nonatomic, assign, readonly) NSTextContainer* streamingTextContainer;
@property (nonatomic, assign, readonly) NSTextStorage* streamingTextStorage;

 - (void) dealloc;
 - (id) initWithTextView:(id)a;
 - (void) commitFinalResults;
 - (void) setWords:(id)a;
 - (void) _commitFinalResults;
 - (void) animateText;
 - (id) words;
 - (id) streamingLayoutManager;
 - (id) streamingTextContainer;
 - (id) streamingTextStorage;
 - (void) behaviorDidStop:(id)a;


@end
