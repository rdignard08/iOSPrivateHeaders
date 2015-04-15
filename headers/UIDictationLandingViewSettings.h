
@interface UIDictationLandingViewSettings : NSObject {

    BOOL _useBlackWave;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _shrinkDuration;
    double _colorTransitionInDuration;
    double _colorTransitionOutDuration;
    double _circleRPM;
}
@property (nonatomic, assign, readwrite) NSNumber* fadeInDuration;
@property (nonatomic, assign, readwrite) NSNumber* fadeOutDuration;
@property (nonatomic, assign, readwrite) NSNumber* shrinkDuration;
@property (nonatomic, assign, readwrite) NSNumber* colorTransitionInDuration;
@property (nonatomic, assign, readwrite) NSNumber* colorTransitionOutDuration;
@property (nonatomic, assign, readwrite) NSNumber* circleRPM;
@property (nonatomic, assign, readwrite) NSNumber* useBlackWave;
 + (id) sharedInstance;

 - (double) fadeOutDuration;
 - (double) colorTransitionInDuration;
 - (double) colorTransitionOutDuration;
 - (BOOL) useBlackWave;
 - (void) setUseBlackWave:(BOOL)a ;
 - (void) setFadeInDuration:(double)a ;
 - (void) setFadeOutDuration:(double)a ;
 - (void) setShrinkDuration:(double)a ;
 - (void) setColorTransitionInDuration:(double)a ;
 - (void) setColorTransitionOutDuration:(double)a ;
 - (void) setCircleRPM:(double)a ;
 - (double) fadeInDuration;
 - (double) shrinkDuration;
 - (double) circleRPM;
 - (id) init;


@end
