
@interface UIGestureAnimation : UIAnimation {

    SEL _progressSelector;
    int _gestureType;
}

 - (void) setProgress:(float)a;
 - (int) gestureType;
 - (id) initWithTarget:(id)aprogressSelector:(SEL)bgestureType:(int)c;


@end
