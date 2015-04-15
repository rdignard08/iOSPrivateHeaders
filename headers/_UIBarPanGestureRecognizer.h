
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

    long long _barAction;
    double _bias;
}

 - (id) description;
 - (void) setDelegate:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (BOOL) canPreventGestureRecognizer:(id)a;
 - (long long) barAction;
 - (double) bias;
 - (void) _setDelegate:(id)a;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
