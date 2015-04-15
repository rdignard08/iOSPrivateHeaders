
@protocol _UIBasicAnimationFactory;
@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {

    @"UITextRange" _range;
    id _placeholder;
    BOOL _didHaveText;
    BOOL _willInsertResult;
    double _angle;
    double _diameter;
    @"CADisplayLink" _displayLink;
    double _startTime;
    double _shrinkStartTime;
    BOOL _shrinking;
    @"NSOperation" _afterShrinkCompletionInvocation;
}
 + (id) sharedInstance;
 + (id) activeInstance;
 + (double) widthForLineHeight:(double)a;
 + (long long) fallbackPlaceholderLength;
 + (double) diameterForLineHeight:(double)a;

 - (void) dealloc;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimation;
 - (BOOL) delegateWasEmpty;
 - (double) fadeOutDuration;
 - (void) updatePosition;
 - (void) startLandingIfNecessary;
 - (void) stopLandingForError;
 - (void) stopLanding;
 - (void) setWillInsertResult:(BOOL)a;
 - (void) clearRotation;
 - (void) rotateBy:(double)a;
 - (void) advanceLanding:(id)a;
 - (void) startDisplayLinkIfNecessary;
 - (void) hideCursor;
 - (void) showCursor;
 - (void) shrinkWithCompletion:(id)a;
 - (void) errorShakeDidFinish;
 - (BOOL) willInsertResult;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
