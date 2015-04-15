
@interface UITransformAnimation : UIAnimation {

    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _startTransform;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _endTransform;
}

 - (void) setProgress:(float)a ;
 - ({CGAffineTransform=dddddd}) _transformWithMultiplier:(float)a ;
 - (void) setStartTransform:({CGAffineTransform=dddddd})a ;
 - (void) setEndTransform:({CGAffineTransform=dddddd})a ;
 - ({CGAffineTransform=dddddd}) transformForFraction:(float)a ;


@end
