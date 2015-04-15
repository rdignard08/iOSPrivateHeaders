
@interface UIKeyboardPredictionCell : UIView {

    @"UIMorphingLabel" m_label;
    @"UIView" m_maskView;
    @"UIKBKeyView" m_activeKeyView;
    @"UIKBKeyView" m_enabledKeyView;
    BOOL m_lightKeyboard;
    {CGSize="width"d"height"d} m_keyViewSize;
    BOOL _isAutocorrection;
    BOOL _isTypedString;
    BOOL _isCenter;
    BOOL _isLongCandidate;
    i _state;
    @"TIKeyboardCandidate" _prediction;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _collapsedFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _baseFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _activeFrame;
}
 + (id) initKeyViewWithSize:({CGSize=dd})astate:(i)bneedsBackground:(BOOL)c;

 - (void) dealloc;
 - (id) textColor;
 - (void) updateBackgroundWithRenderConfig:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) baseFrame;
 - (void) setVisibleRect;
 - (void) setIsLongCandidate:(BOOL)a;
 - (BOOL) isLongCandidate;
 - (BOOL) isAutocorrection;
 - (BOOL) isTypedString;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) activeFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) collapsedFrame;
 - (void) setCellAttributes;
 - (void) setState:(i)awithText:(id)b;
 - (void) scrollLabelWithText:(id)aforce:(BOOL)b;
 - (void) touchMoved:(d)a;
 - (void) setCollapsedFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBaseFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setText:(id)aprediction:(id)bactive:(BOOL)c;
 - (id) prediction;
 - (void) setActiveFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setIsAutocorrection:(BOOL)a;
 - (void) setIsTypedString:(BOOL)a;
 - (BOOL) isCenter;
 - (void) setIsCenter:(BOOL)a;
 - (i) state;
 - (void) setState:(i)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) visibleRect;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;


@end
