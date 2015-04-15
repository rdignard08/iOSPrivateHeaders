
@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

    long long _barAction;
    double _bias;
}

 - (id) description;
 - (void) setDelegate:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (BOOL) canPreventGestureRecognizer:(id)a ;
 - (long long) barAction;
 - (double) bias;
 - (void) _setDelegate:(id)a ;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
