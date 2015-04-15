
@interface UISearchResultsTableView : UITableView {

    UISearchDisplayController* _controller;
    double _offsetForNoResultsMessage;
    UIView* _topShadowView;
}

 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) _numberOfRowsDidChange;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(long long)b;
 - (id) _topShadowView;
 - (id) controller;
 - (void) _setOffsetForNoResultsMessage:(double)a;
 - (double) _offsetForNoResultsMessage;
 - (void) _setTopShadowView:(id)a;
 - (void) setController:(id)a;


@end
