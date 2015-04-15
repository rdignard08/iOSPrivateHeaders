
@protocol UIAdaptivePresentationControllerDelegate;
@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate> {

    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
    BOOL _animates;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
}

 - (long long) modalPresentationStyle;
 - (void) setModalPresentationStyle:(long long)a;
 - (long long) modalTransitionStyle;
 - (void) setModalTransitionStyle:(long long)a;
 - (void) _prepare;
 - (void) perform;
 - (void) setUseDefaultModalPresentationStyle:(BOOL)a;
 - (void) setUseDefaultModalTransitionStyle:(BOOL)a;
 - (void) setAnimates:(BOOL)a;
 - (BOOL) useDefaultModalPresentationStyle;
 - (BOOL) useDefaultModalTransitionStyle;
 - (BOOL) animates;


@end
