
@interface UIGestureAnimation : UIAnimation {

    SEL _progressSelector;
    int _gestureType;
}

 - (void) setProgress:(float)a ;
 - (int) gestureType;
 - (id) initWithTarget:(id)a progressSelector:(SEL)b gestureType:(int)c ;


@end
