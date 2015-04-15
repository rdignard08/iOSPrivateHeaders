
@interface UIViewKeyframeAnimationState : UIViewAnimationState {

    double _frameDuration;
    double _frameStartTime;
    long long _calculationMode;
    NSMutableSet* _keyframeLayers;
    NSMutableDictionary* _keyframeLayersForCurrentKeyFrameDict;
    BOOL _inFrame;
}

 - (void) dealloc;
 - (void) pop;
 - (id) animationForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupWithDuration:(double)adelay:(double)bview:(id)coptions:(unsigned long long)dfactory:(id)eparentState:(id)fstart:(@?)gcompletion:(@?)h;
 - (void) cleanupTrackedLayers;
 - (void) addKeyframeWithRelativeStartTime:(double)arelativeDuration:(double)banimations:(@?)c;
 - (id) init;


@end
