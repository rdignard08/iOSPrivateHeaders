
@interface UIStatusBarActivityItemView : UIStatusBarItemView {

    @"UIActivityIndicatorView" _activityIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
    BOOL _newsstandActivity;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (double) updateContentsAndWidth;
 - (double) shadowPadding;
 - (void) _stopAnimating;
 - (void) _startAnimating;
 - (long long) _activityIndicatorStyle;
 - (void) setVisible:(BOOL)a;


@end
