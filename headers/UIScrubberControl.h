
@interface UIScrubberControl : UIOldSliderControl {

    (?="image"@"UIImage""view"@"UIView") _sliderAvailableFill;
    double _duration;
    float _lastDisplayedWidth;
    float _maxTrackWidth;
    UIView* _elapsedTimeView;
    UIView* _remainingTimeView;
    id _delegate;
    double _trackingStartTime;
    {CGPoint="x"d"y"d} _lastUpdatedPoint;
    float _valueAvailable;
    b1 _didDrag;
    b1 _sentScrubbingStart;
    b1 _autoSizesToFitDuration;
    b2 _layoutTimeParts;
    b1 _remainingIsDuration;
    b1 _delegateDidEnterScrubbingState;
    b1 _delegateDidChangeScrubValue;
    b1 _delegateShouldBeginScrubbing;
    b1 _endingTracking;
    b1 _showKnob;
    b1 _largeKnob;
    b1 _rightCapIsDownloadCap;
    b1 _requireMomentaryDelay;
    b1 _showFullWidthComponents;
    b1 _alwaysShowAllComponentsForDuration;
    b7 _timeLayoutDisabledCount;
    b1 _timeLayoutSkippedLayout;
    b1 _timeLayoutSkippedForcedLayout;
    b1 _showTimeCentered;
    b1 _leftCapIsDownloadCap;
    b1 _allowsAnyValue;
    b3 _unused;
}
 + (BOOL) allowLayeredFillForKnob;

 - (double) duration;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hitRect;
 - (void) sizeToFit;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _setValue:(float)a andSendAction:(BOOL)b ;
 - (void) setTimeColor:(id)a ;
 - (void) setTimeShadowColor:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a maxTrackWidth:(float)b showTimes:(BOOL)c knobStyle:(int)d ;
 - (id) createSliderKnobView;
 - (void) _resetTimeFrames;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectOfTrack;
 - (id) imageForSliderPiece:(int)a ;
 - (void) _updateTimes:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fillBounds;
 - (void) drawSliderPiece:(int)a inRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (BOOL) _notAllValueAvailable;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sliderBounds;
 - (void) _updateAvailableFill;
 - (void) setValue:(float)a animated:(BOOL)b animationCurve:(int)c ;
 - (BOOL) pointInsideKnob:({CGPoint=dd})a withEvent:(id)b ;
 - (void) _sendDelegateDidEnterScrubbingState:(BOOL)a ;
 - (float) scrubValue;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a maxTrackWidth:(float)b showTimes:(BOOL)c showKnob:(BOOL)d ;
 - (void) setPinTimeToOutsideEdges:(BOOL)a ;
 - (void) setShowTimeCenteredInAvailableArea:(BOOL)a ;
 - (double) requiredAutoUpdateDurationForDuration:(double)a ;
 - (BOOL) pointInsideKnob:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) setAllowsAnyValue:(BOOL)a ;
 - (void) disableTimesLayout;
 - (void) enableTimesLayout;
 - (void) setShowFullWidthComponents:(BOOL)a ;
 - (void) setShowDuration:(BOOL)a ;
 - (void) setScrubbingRequiresMomentaryDelay:(BOOL)a ;
 - (void) setValueAvailable:(float)a ;
 - (r^{?=fff}) metrics;
 - (void) setDuration:(double)a ;


@end
