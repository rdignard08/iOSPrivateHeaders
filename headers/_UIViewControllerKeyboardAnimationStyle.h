
@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {

    BOOL _disableAlongsideView;
    BOOL _allowCustomTransition;
    _UIViewControllerTransitionContext* _context;
    _UIViewControllerKeyboardAnimationStyleInfo* _info;
}
 + (id) animationStyleWithContext:(id)auseCustomTransition:(BOOL)b;
 + (id) animationStyleWithContext:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) setDisableAlongsideView:(BOOL)a ;
 - (void) setAllowCustomTransition:(BOOL)a ;
 - (BOOL) disableAlongsideView;
 - (void) launchAnimation:(@?)a afterStarted:(@?)b completion:(@?)c forHost:(id)d fromCurrentPosition:(BOOL)e ;
 - (BOOL) allowCustomTransition;
 - (id) controllerForStartPlacement:(id)a endPlacement:(id)b ;
 - (BOOL) isAnimationCompleted;
 - (BOOL) canDismissWithScrollView;
 - (id) info;
 - (id) initWithContext:(id)a ;
 - (id) context;


@end
