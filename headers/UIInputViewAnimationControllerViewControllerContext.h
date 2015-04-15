
@protocol UIViewControllerKeyboardContextTransitioning;
@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {

    _UIViewControllerTransitionContext* _context;
    <UIInputViewAnimationHost>* _host;
    UIView* _from;
    UIView* _to;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _fromRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _toRect;
}
@property (nonatomic, assign, readonly) NSNumber* mainContext;
@property (nonatomic, assign, readonly) UIView* fromKeyboard;
@property (nonatomic, assign, readonly) NSNumber* fromKeyboardFrame;
@property (nonatomic, assign, readonly) UIView* toKeyboard;
@property (nonatomic, assign, readonly) NSNumber* toKeyboardFrame;
 + (id) contextWithHost:(id)astartPlacement:(id)bendPlacement:(id)ctransitionContext:(id)d;

 - (void) dealloc;
 - (id) toKeyboard;
 - (id) fromKeyboard;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) fromKeyboardFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) toKeyboardFrame;
 - (id) initWithHost:(id)a startPlacement:(id)b endPlacement:(id)c transitionContext:(id)d ;
 - (id) mainContext;


@end
