
@interface UIBookViewController : UIViewController {

    @"<UIBookViewControllerDelegate>" _delegate;
    @"UIView" _contentView;
    @"UIViewController" _evenPage;
    @"UIViewController" _oddPage;
    @"UIViewController" _newEvenPage;
    @"UIViewController" _newOddPage;
    q _turnCount;
    q _animatedPageTurns;
    d _turnMargin;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _contentInset;
    d _turnDuration;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - ({UIEdgeInsets=dddd}) contentInset;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) _setupContentViewIfNecessary;
 - (void) _setNewPage:(id)aisLeft:(BOOL)b;
 - (void) _positionPage:(id)aisLeft:(BOOL)b;
 - (void) _turnSinglePageAnimated;
 - (void) _turnAllPagesNonAnimated;
 - (void) setEvenPage:(id)a;
 - (void) setOddPage:(id)a;
 - (void) turnPages:(q)aanimated:(BOOL)b;
 - (id) oddPage;
 - (id) evenPage;
 - (d) turnMargin;
 - (void) setTurnMargin:(d)a;
 - (d) turnDuration;
 - (void) setTurnDuration:(d)a;
 - (void) _setupCurlFilters;
 - (void) _startCurlAnimation;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (void) animationDidStop:(id)afinished:(BOOL)b;
 - (id) view;


@end
