
@interface UIDictationMeterView : UIButton {

    UIImageView _background;
    UIImageView _overlay;
    NSMutableArray _micListeningImages;
    CALayer _micImageLayer;
    CALayer _animatingLayer;
    NSTimer _fillTimer;
    int _phase;
    int _state;
    [5f] _runningPowerLevels;
    unsigned int _powerPointer;
    CADisplayLink _displayLink;
    double _releaseStart;
    float _releaseLevel;
    int _cachedViewMode;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _reset;
 - (id) _emptyMicImage;
 - (void) _startAttack;
 - (void) _clearDisplayLink;
 - (void) _removeAnimationsAndClearLayers;
 - (float) _updateMedianWithNewValue:(float)a;
 - (float) _powerLevelForMicPower:(float)a;
 - (double) _animationInterval;
 - (id) imageForMicLevel:(double)a;
 - (float) _adjustedDuration:(float)a;
 - (id) _keyframeAnimationForCGImages:(id)aduration:(double)b;
 - (id) _attackKeyFrameAnimation;
 - (id) _decayKeyFrameAnimation;
 - (id) _sustainKeyFrameAnimation;
 - (float) _currentMicPowerLevel;
 - (void) _resetRunningPowerLevels;
 - (void) _updateReleaseAnimation:(id)a;
 - (void) _updateListeningAnimation:(id)a;
 - (void) _startDecay;
 - (void) _startSustain;
 - (void) _startRelease;
 - (void) setState:(int)a;
 - (void) _startListening;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) animationDidStop:(id)afinished:(BOOL)b;


@end
