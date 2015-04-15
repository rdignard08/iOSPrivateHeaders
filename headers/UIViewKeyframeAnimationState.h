
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
 - (id) animationForLayer:(id)a forKey:(id)b forView:(id)c ;
 - (void) setupWithDuration:(double)a delay:(double)b view:(id)c options:(unsigned long long)d factory:(id)e parentState:(id)f start:(@?)g completion:(@?)h ;
 - (void) cleanupTrackedLayers;
 - (void) addKeyframeWithRelativeStartTime:(double)a relativeDuration:(double)b animations:(@?)c ;
 - (id) init;


@end
