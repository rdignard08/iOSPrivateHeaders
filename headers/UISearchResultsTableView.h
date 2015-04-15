
@interface UISearchResultsTableView : UITableView {

    @"UISearchDisplayController" _controller;
    d _offsetForNoResultsMessage;
    @"UIView" _topShadowView;
}

 - (void) setContentOffset:({CGPoint=dd})a;
 - (void) _numberOfRowsDidChange;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(q)b;
 - (id) _topShadowView;
 - (id) controller;
 - (void) _setOffsetForNoResultsMessage:(d)a;
 - (d) _offsetForNoResultsMessage;
 - (void) _setTopShadowView:(id)a;
 - (void) setController:(id)a;


@end
