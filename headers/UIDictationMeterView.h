
@interface UIDictationMeterView : UIButton {

    @"UIImageView" _background;
    @"UIImageView" _overlay;
    @"NSMutableArray" _micListeningImages;
    @"CALayer" _micImageLayer;
    @"CALayer" _animatingLayer;
    @"NSTimer" _fillTimer;
    i _phase;
    i _state;
    [5f] _runningPowerLevels;
    I _powerPointer;
    @"CADisplayLink" _displayLink;
    d _releaseStart;
    f _releaseLevel;
    i _cachedViewMode;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _reset;
 - (id) _emptyMicImage;
 - (void) _startAttack;
 - (void) _clearDisplayLink;
 - (void) _removeAnimationsAndClearLayers;
 - (f) _updateMedianWithNewValue:(f)a;
 - (f) _powerLevelForMicPower:(f)a;
 - (d) _animationInterval;
 - (id) imageForMicLevel:(d)a;
 - (f) _adjustedDuration:(f)a;
 - (id) _keyframeAnimationForCGImages:(id)aduration:(d)b;
 - (id) _attackKeyFrameAnimation;
 - (id) _decayKeyFrameAnimation;
 - (id) _sustainKeyFrameAnimation;
 - (f) _currentMicPowerLevel;
 - (void) _resetRunningPowerLevels;
 - (void) _updateReleaseAnimation:(id)a;
 - (void) _updateListeningAnimation:(id)a;
 - (void) _startDecay;
 - (void) _startSustain;
 - (void) _startRelease;
 - (void) setState:(i)a;
 - (void) _startListening;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
