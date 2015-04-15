
@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate {

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
