
@interface _UIRefreshControlContentView : UIView {

    UIRefreshControl* _refreshControl;
    UIColor* _tintColor;
}

 - (void) dealloc;
 - (void) setAttributedTitle:(id)a ;
 - (id) tintColor;
 - (void) setTintColor:(id)a ;
 - (id) attributedTitle;
 - (void) setRefreshControl:(id)a ;
 - (id) refreshControl;
 - (void) refreshControlInvalidatedSnappingHeight;
 - (double) _heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
 - (double) maximumSnappingHeight;
 - (double) minimumSnappingHeight;
 - (void) willTransitionFromState:(int)a toState:(int)b ;
 - (void) didTransitionFromState:(int)a toState:(int)b ;
 - (long long) style;


@end
