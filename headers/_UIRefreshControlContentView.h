
@interface _UIRefreshControlContentView : UIView {

    @"UIRefreshControl" _refreshControl;
    @"UIColor" _tintColor;
}

 - (void) dealloc;
 - (void) setAttributedTitle:(id)a;
 - (id) tintColor;
 - (void) setTintColor:(id)a;
 - (id) attributedTitle;
 - (void) setRefreshControl:(id)a;
 - (id) refreshControl;
 - (void) refreshControlInvalidatedSnappingHeight;
 - (d) _heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
 - (d) maximumSnappingHeight;
 - (d) minimumSnappingHeight;
 - (void) willTransitionFromState:(i)atoState:(i)b;
 - (void) didTransitionFromState:(i)atoState:(i)b;
 - (q) style;


@end
