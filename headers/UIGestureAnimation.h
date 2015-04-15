
@interface UIGestureAnimation : UIAnimation {

    SEL _progressSelector;
    i _gestureType;
}

 - (void) setProgress:(f)a;
 - (i) gestureType;
 - (id) initWithTarget:(id)aprogressSelector:(SEL)bgestureType:(i)c;


@end
