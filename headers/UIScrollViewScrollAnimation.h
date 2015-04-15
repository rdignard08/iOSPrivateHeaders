
@interface UIScrollViewScrollAnimation : UIAnimation {

    {CGPoint="x"d"y"d} _originalOffset;
    {CGPoint="x"d"y"d} _targetOffset;
    double _accuracy;
    BOOL _adjustsForContentOffsetDelta;
}

 - (void) setProgress:(float)a;
 - (void) dealloc;
 - (void) adjustForContentOffsetDelta:({CGPoint=dd})a;


@end
