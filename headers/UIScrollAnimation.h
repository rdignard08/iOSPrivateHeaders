
@interface UIScrollAnimation : UIAnimation {

    {CGPoint="x"d"y"d} _startPoint;
    {CGPoint="x"d"y"d} _endPoint;
}

 - (void) setProgress:(float)a ;
 - (void) setStartPoint:({CGPoint=dd})a ;
 - (void) setEndPoint:({CGPoint=dd})a ;


@end
