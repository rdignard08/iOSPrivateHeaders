
@protocol NSCoding;
@interface UITapRecognizer : NSObject <NSCoding> {

    unsigned long long _numberOfTouchesRequired;
    unsigned long long _numberOfTapsRequired;
    NSMutableSet* _activeTouches;
    int _currentNumberOfTouches;
    int _currentNumberOfTaps;
    {CGPoint="x"d"y"d} _location;
    {CGPoint="x"d"y"d} _startPoint;
    {CGPoint="x"d"y"d} _digitizerLocation;
    double _allowableMovement;
    double _maximumSingleTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray* _touches;
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
 - (unsigned long long) numberOfTouchesRequired;
 - (unsigned long long) numberOfTapsRequired;
 - ({CGPoint=dd}) _locationInSceneReferenceSpace;
 - (void) setNumberOfTapsRequired:(unsigned long long)a;
 - (void) setNumberOfTouchesRequired:(unsigned long long)a;
 - (void) setAllowableMovement:(double)a;
 - (id) touches;
 - (void) _reset;
 - (double) maximumIntervalBetweenSuccessiveTaps;
 - (double) allowableMovement;
 - (void) clearTapTimer;
 - (void) tooSlow:(id)a;
 - (void) _updateDigitizerLocationForEvent:(id)a;
 - (void) _beginInteraction;
 - (double) _effectiveAllowableMovement;
 - (void) _interactionEndedTouch:(BOOL)a;
 - (void) startTapTimer:(double)a;
 - (double) maximumSingleTapDuration;
 - (void) setMaximumSingleTapDuration:(double)a;
 - (void) setMaximumIntervalBetweenSuccessiveTaps:(double)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;


@end
