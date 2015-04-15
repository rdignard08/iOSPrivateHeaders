
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {

    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
    BOOL _animates;
}

 - (long long) modalPresentationStyle;
 - (void) setModalPresentationStyle:(long long)a;
 - (long long) modalTransitionStyle;
 - (void) setModalTransitionStyle:(long long)a;
 - (id) segueWithDestinationViewController:(id)a;
 - (id) defaultSegueClassName;
 - (void) setUseDefaultModalPresentationStyle:(BOOL)a;
 - (void) setUseDefaultModalTransitionStyle:(BOOL)a;
 - (void) setAnimates:(BOOL)a;
 - (BOOL) useDefaultModalPresentationStyle;
 - (BOOL) useDefaultModalTransitionStyle;
 - (BOOL) animates;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
