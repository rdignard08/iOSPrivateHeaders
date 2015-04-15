
@interface UIAlphaAnimation : UIAnimation {

    d _startAlpha;
    d _endAlpha;
}

 - (void) setProgress:(f)a;
 - (d) _alphaForMultiplier:(f)a;
 - (void) setStartAlpha:(d)a;
 - (void) setEndAlpha:(d)a;
 - (d) alphaForFraction:(f)a;


@end
