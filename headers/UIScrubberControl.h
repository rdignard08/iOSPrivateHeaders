
@interface UIScrubberControl : UIOldSliderControl {

    (?="image"@"UIImage""view"@"UIView") _sliderAvailableFill;
    d _duration;
    f _lastDisplayedWidth;
    f _maxTrackWidth;
    @"UIView" _elapsedTimeView;
    @"UIView" _remainingTimeView;
    id _delegate;
    d _trackingStartTime;
    {CGPoint="x"d"y"d} _lastUpdatedPoint;
    f _valueAvailable;
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

 - (d) duration;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hitRect;
 - (void) sizeToFit;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _setValue:(f)aandSendAction:(BOOL)b;
 - (void) setTimeColor:(id)a;
 - (void) setTimeShadowColor:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})amaxTrackWidth:(f)bshowTimes:(BOOL)cknobStyle:(i)d;
 - (id) createSliderKnobView;
 - (void) _resetTimeFrames;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _rectOfTrack;
 - (id) imageForSliderPiece:(i)a;
 - (void) _updateTimes:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fillBounds;
 - (void) drawSliderPiece:(i)ainRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (BOOL) _notAllValueAvailable;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) sliderBounds;
 - (void) _updateAvailableFill;
 - (void) setValue:(f)aanimated:(BOOL)banimationCurve:(i)c;
 - (BOOL) pointInsideKnob:({CGPoint=dd})awithEvent:(id)b;
 - (void) _sendDelegateDidEnterScrubbingState:(BOOL)a;
 - (f) scrubValue;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})amaxTrackWidth:(f)bshowTimes:(BOOL)cshowKnob:(BOOL)d;
 - (void) setPinTimeToOutsideEdges:(BOOL)a;
 - (void) setShowTimeCenteredInAvailableArea:(BOOL)a;
 - (d) requiredAutoUpdateDurationForDuration:(d)a;
 - (BOOL) pointInsideKnob:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) setAllowsAnyValue:(BOOL)a;
 - (void) disableTimesLayout;
 - (void) enableTimesLayout;
 - (void) setShowFullWidthComponents:(BOOL)a;
 - (void) setShowDuration:(BOOL)a;
 - (void) setScrubbingRequiresMomentaryDelay:(BOOL)a;
 - (void) setValueAvailable:(f)a;
 - (r^{?=fff}) metrics;
 - (void) setDuration:(d)a;


@end
