
@protocol NSCoding;
@interface UITapRecognizer : NSObject <NSCoding> {

    Q _numberOfTouchesRequired;
    Q _numberOfTapsRequired;
    @"NSMutableSet" _activeTouches;
    i _currentNumberOfTouches;
    i _currentNumberOfTaps;
    {CGPoint="x"d"y"d} _location;
    {CGPoint="x"d"y"d} _startPoint;
    {CGPoint="x"d"y"d} _digitizerLocation;
    d _allowableMovement;
    d _maximumSingleTapDuration;
    d _maximumIntervalBetweenSuccessiveTaps;
    @"NSMutableArray" _touches;
    id _delegate;
    b1 _timerOn;
    b1 _noNewTouches;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* numberOfTapsRequired;
@property (nonatomic, assign, readwrite) NSNumber* numberOfTouchesRequired;
@property (nonatomic, assign, readwrite) NSNumber* allowableMovement;
@property (nonatomic, assign, readwrite) NSNumber* maximumSingleTapDuration;
@property (nonatomic, assign, readwrite) NSNumber* maximumIntervalBetweenSuccessiveTaps;
@property (nonatomic, assign, readonly) NSArray* touches;

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - ({CGPoint=dd}) locationInView:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _physicalButtonsBegan:(id)awithEvent:(id)b;
 - (void) _physicalButtonsEnded:(id)awithEvent:(id)b;
 - (void) _physicalButtonsCancelled:(id)awithEvent:(id)b;
 - ({CGPoint=dd}) _digitizerLocation;
 - (Q) numberOfTouchesRequired;
 - (Q) numberOfTapsRequired;
 - ({CGPoint=dd}) _locationInSceneReferenceSpace;
 - (void) setNumberOfTapsRequired:(Q)a;
 - (void) setNumberOfTouchesRequired:(Q)a;
 - (void) setAllowableMovement:(d)a;
 - (id) touches;
 - (void) _reset;
 - (d) maximumIntervalBetweenSuccessiveTaps;
 - (d) allowableMovement;
 - (void) clearTapTimer;
 - (void) tooSlow:(id)a;
 - (void) _updateDigitizerLocationForEvent:(id)a;
 - (void) _beginInteraction;
 - (d) _effectiveAllowableMovement;
 - (void) _interactionEndedTouch:(BOOL)a;
 - (void) startTapTimer:(d)a;
 - (d) maximumSingleTapDuration;
 - (void) setMaximumSingleTapDuration:(d)a;
 - (void) setMaximumIntervalBetweenSuccessiveTaps:(d)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;


@end
