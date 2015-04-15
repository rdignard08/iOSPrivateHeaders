
@interface UIStatusBarActivityItemView : UIStatusBarItemView {

    @"UIActivityIndicatorView" _activityIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
    BOOL _newsstandActivity;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (d) updateContentsAndWidth;
 - (d) shadowPadding;
 - (void) _stopAnimating;
 - (void) _startAnimating;
 - (q) _activityIndicatorStyle;
 - (void) setVisible:(BOOL)a;


@end
