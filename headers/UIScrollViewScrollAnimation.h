
@interface UIScrollViewScrollAnimation : UIAnimation {

    {CGPoint="x"d"y"d} _originalOffset;
    {CGPoint="x"d"y"d} _targetOffset;
    d _accuracy;
    BOOL _adjustsForContentOffsetDelta;
}

 - (void) setProgress:(f)a;
 - (void) dealloc;
 - (void) adjustForContentOffsetDelta:({CGPoint=dd})a;


@end
