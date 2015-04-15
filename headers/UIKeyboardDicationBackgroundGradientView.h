
@protocol _UIBasicAnimationFactory;
@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {

    UIKBRenderConfig* _renderConfig;
    UIDictationView* _dictationView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) _basicAnimationForView:(id)awithKeyPath:(id)b;
 - (id) _timingFunctionForAnimation;
 - (id) renderConfig;
 - (void) setRenderConfig:(id)a;
 - (id) dictationView;
 - (id) backgroundColorForCurrentRenderConfig;
 - (void) startColorTransitionIn;
 - (void) startColorTransitionOut;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _backgroundFillFrame;
 - (void) setDictationView:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
