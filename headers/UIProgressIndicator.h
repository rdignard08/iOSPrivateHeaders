
@interface UIProgressIndicator : UIActivityIndicatorView {

}
 + ({CGSize=dd}) size;

 - (void) stopAnimation;
 - (void) setAnimating:(BOOL)a ;
 - (void) setProgressIndicatorStyle:(int)a ;
 - (int) progressIndicatorStyle;
 - (void) startAnimation;
 - (void) setStyle:(int)a ;


@end
