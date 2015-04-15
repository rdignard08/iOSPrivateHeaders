
@interface UIAlphaAnimation : UIAnimation {

    double _startAlpha;
    double _endAlpha;
}

 - (void) setProgress:(float)a;
 - (double) _alphaForMultiplier:(float)a;
 - (void) setStartAlpha:(double)a;
 - (void) setEndAlpha:(double)a;
 - (double) alphaForFraction:(float)a;


@end
