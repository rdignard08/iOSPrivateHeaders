
@interface _UICharacterStreamingManager : NSObject {

    UITextView* _textView;
    CADisplayLink* _streamingAnimationDisplayLink;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    BOOL _committingFinalResults;
    BOOL _discardNextHypothesis;
    NSString* _previousHypothesis;
    NSString* _lastHypothesis;
    NSString* _targetHypothesis;
    NSMutableArray* _pendingEdits;
    double _streamingCharacterInsertionRate;
    double _minDurationBetweenHypotheses;
}
@property (nonatomic, copy, readwrite) NSString* previousHypothesis;
@property (nonatomic, copy, readwrite) NSString* lastHypothesis;
@property (nonatomic, copy, readwrite) NSString* targetHypothesis;
@property (nonatomic, retain, readwrite) NSMutableArray* pendingEdits;
@property (nonatomic, assign, readwrite) NSNumber* streamingCharacterInsertionRate;
@property (nonatomic, assign, readwrite) NSNumber* minDurationBetweenHypotheses;
@property (nonatomic, assign, readwrite) NSNumber* discardNextHypothesis;

 - (void) dealloc;
 - (void) setDiscardNextHypothesis:(BOOL)a;
 - (void) _stopStreamingAnimation;
 - (void) setPendingEdits:(id)a;
 - (void) setLastHypothesis:(id)a;
 - (void) setTargetHypothesis:(id)a;
 - (void) setPreviousHypothesis:(id)a;
 - (id) lastHypothesis;
 - (id) targetHypothesis;
 - (void) _startStreamingAnimations;
 - (void) _displayLinkFired:(id)a;
 - (id) pendingEdits;
 - (BOOL) discardNextHypothesis;
 - (id) previousHypothesis;
 - (void) setupToInsertResultForNewHypothesis:(id)a;
 - (id) initWithTextView:(id)a;
 - (void) commitFinalResults;
 - (void) setWords:(id)a;
 - (double) streamingCharacterInsertionRate;
 - (void) setStreamingCharacterInsertionRate:(double)a;
 - (double) minDurationBetweenHypotheses;
 - (void) setMinDurationBetweenHypotheses:(double)a;


@end
