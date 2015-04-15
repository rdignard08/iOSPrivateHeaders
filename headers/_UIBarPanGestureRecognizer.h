
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

    q _barAction;
    d _bias;
}

 - (id) description;
 - (void) setDelegate:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (q) barAction;
 - (d) bias;
 - (void) _setDelegate:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
