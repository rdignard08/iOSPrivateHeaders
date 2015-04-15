
@interface UIDictationLandingViewSettings : NSObject {

    BOOL _useBlackWave;
    d _fadeInDuration;
    d _fadeOutDuration;
    d _shrinkDuration;
    d _colorTransitionInDuration;
    d _colorTransitionOutDuration;
    d _circleRPM;
}
@property (nonatomic, assign, readwrite) NSNumber* fadeInDuration;
@property (nonatomic, assign, readwrite) NSNumber* fadeOutDuration;
@property (nonatomic, assign, readwrite) NSNumber* shrinkDuration;
@property (nonatomic, assign, readwrite) NSNumber* colorTransitionInDuration;
@property (nonatomic, assign, readwrite) NSNumber* colorTransitionOutDuration;
@property (nonatomic, assign, readwrite) NSNumber* circleRPM;
@property (nonatomic, assign, readwrite) NSNumber* useBlackWave;
 + (id) sharedInstance;

 - (d) fadeOutDuration;
 - (d) colorTransitionInDuration;
 - (d) colorTransitionOutDuration;
 - (BOOL) useBlackWave;
 - (void) setUseBlackWave:(BOOL)a;
 - (void) setFadeInDuration:(d)a;
 - (void) setFadeOutDuration:(d)a;
 - (void) setShrinkDuration:(d)a;
 - (void) setColorTransitionInDuration:(d)a;
 - (void) setColorTransitionOutDuration:(d)a;
 - (void) setCircleRPM:(d)a;
 - (d) fadeInDuration;
 - (d) shrinkDuration;
 - (d) circleRPM;
 - (id) init;


@end
