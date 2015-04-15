
@interface UITransformAnimation : UIAnimation {

    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _startTransform;
    {CGAffineTransform="a"d"b"d"c"d"d"d"tx"d"ty"d} _endTransform;
}

 - (void) setProgress:(f)a;
 - ({CGAffineTransform=dddddd}) _transformWithMultiplier:(f)a;
 - (void) setStartTransform:({CGAffineTransform=dddddd})a;
 - (void) setEndTransform:({CGAffineTransform=dddddd})a;
 - ({CGAffineTransform=dddddd}) transformForFraction:(f)a;


@end
