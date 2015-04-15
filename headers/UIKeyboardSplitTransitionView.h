
@interface UIKeyboardSplitTransitionView : UIView {

    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    @"CADisplayLink" _displayLink;
    @? _completionBlock;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _startFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _endFrame;
    @"<UIKeyboardKeyplaneTransitionDelegate>" _transitionDelegate;
    @"<UIKeyboardSplitTransitionDataSource>" _transitionDataSource;
    BOOL _centerFilled;
    BOOL _isRebuilding;
    BOOL _isSplitTranslation;
    @"UIKeyboardSliceSet" _sliceSet;
}

 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a;
 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) finalizeTransition;
 - (void) updateWithProgress:(double)a;
 - (void) transitionToFinalState:(id)a;
 - (void) finishWithProgress:(double)acompletionBlock:(@?)b;
 - (void) setSplitTransitionDelegate:(id)a;
 - (void) rebuildTransitionForSplitStyleChange:(id)a;
 - (id) backgroundLayers;
 - (id) shadowLayers;
 - (id) topDropShadow;
 - (id) centerDropShadow;
 - (id) bottomDropShadow;
 - (id) outerCenterDropShadow;
 - (id) colorsForBackgroundLayer:(int)a;
 - (BOOL) shouldAllowRubberiness;
 - (id) splitTransitionDelegate;
 - (BOOL) transitionIsVisible;
 - (void) transformForProgress:(double)a;
 - (^{CGImage=}) defaultKeyboardImage;
 - (^{CGImage=}) splitKeyboardImage;
 - (void) initializeLayers;
 - ({CGSize=dd}) sizeForShadowLayer:(int)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectEnclosingKeyplane:(id)a;
 - (void) rebuildFromKeyplane:(id)atoKeyplane:(id)bkeyboardType:(long long)corientation:(long long)d;
 - (void) rebuildControlKeys:(unsigned long long)a;
 - (BOOL) canDisplayTransition;
 - (^{CGImage=}) keyImageWithToken:(id)a;
 - (BOOL) showIntlKey;
 - (BOOL) showDictationKey;
 - (id) splitTransitionDataSource;
 - (void) setSplitTransitionDataSource:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
