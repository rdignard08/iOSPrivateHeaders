
@interface UIViewKeyframeAnimationState : UIViewAnimationState {

    d _frameDuration;
    d _frameStartTime;
    q _calculationMode;
    @"NSMutableSet" _keyframeLayers;
    @"NSMutableDictionary" _keyframeLayersForCurrentKeyFrameDict;
    BOOL _inFrame;
}

 - (void) dealloc;
 - (void) pop;
 - (id) animationForLayer:(id)aforKey:(id)bforView:(id)c;
 - (void) setupWithDuration:(d)adelay:(d)bview:(id)coptions:(Q)dfactory:(id)eparentState:(id)fstart:(@?)gcompletion:(@?)h;
 - (void) cleanupTrackedLayers;
 - (void) addKeyframeWithRelativeStartTime:(d)arelativeDuration:(d)banimations:(@?)c;
 - (id) init;


@end
