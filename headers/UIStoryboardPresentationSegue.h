
@protocol UIAdaptivePresentationControllerDelegate;
@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate> {

    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
    BOOL _animates;
    q _modalPresentationStyle;
    q _modalTransitionStyle;
}

 - (q) modalPresentationStyle;
 - (void) setModalPresentationStyle:(q)a;
 - (q) modalTransitionStyle;
 - (void) setModalTransitionStyle:(q)a;
 - (void) _prepare;
 - (void) perform;
 - (void) setUseDefaultModalPresentationStyle:(BOOL)a;
 - (void) setUseDefaultModalTransitionStyle:(BOOL)a;
 - (void) setAnimates:(BOOL)a;
 - (BOOL) useDefaultModalPresentationStyle;
 - (BOOL) useDefaultModalTransitionStyle;
 - (BOOL) animates;


@end
