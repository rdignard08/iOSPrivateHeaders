
@protocol _UIBasicAnimationFactory;
@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {

    @"UITextRange" _range;
    id _placeholder;
    BOOL _didHaveText;
    BOOL _willInsertResult;
    d _angle;
    d _diameter;
    @"CADisplayLink" _displayLink;
    d _startTime;
    d _shrinkStartTime;
    BOOL _shrinking;
    @"NSOperation" _afterShrinkCompletionInvocation;
}
 + (id) sharedInstance;
 + (id) activeInstance;
 + (d) widthForLineHeight:(d)a;
 + (q) fallbackPlaceholderLength;
 + (d) diameterForLineHeight:(d)a;

 - (void) dealloc;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimation;
 - (BOOL) delegateWasEmpty;
 - (d) fadeOutDuration;
 - (void) updatePosition;
 - (void) startLandingIfNecessary;
 - (void) stopLandingForError;
 - (void) stopLanding;
 - (void) setWillInsertResult:(BOOL)a;
 - (void) clearRotation;
 - (void) rotateBy:(d)a;
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
