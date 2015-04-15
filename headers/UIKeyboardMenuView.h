
@protocol UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate;
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

    @"UIInputSwitcherTableView" m_table;
    @"UIInputSwitcherShadowView" m_shadowView;
    @"UIInputSwitcherSelectionExtraView" m_selExtraView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_referenceRect;
    d m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_startAutoscroll;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    {CGPoint="x"d"y"d} m_point;
    d m_scrollStartTime;
    i m_scrollDirection;
    @"NSTimer" m_scrollTimer;
    i m_visibleRows;
    i m_firstVisibleRow;
    i m_mode;
    @"UIDimmingView" m_dimmingView;
    BOOL _usesStraightLeftEdge;
    BOOL _usesDarkTheme;
    @"UIKBTree" _referenceKey;
    @"UIKeyboardLayoutStar" _layout;
}
 + (id) viewThatContainsBaseKey;

 - (void) dealloc;
 - (void) setMode:(i)a;
 - (void) hide;
 - (void) show;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (id) tableView:(id)awillSelectRowAtIndexPath:(id)b;
 - (id) tableView:(id)awillDeselectRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (void) scrollViewDidScroll:(id)a;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setRenderConfig:(id)a;
 - (void) applicationWillSuspend:(id)a;
 - (i) mode;
 - (id) dimmingView;
 - (void) dimmingViewWasTapped:(id)a;
 - (void) showAsPopupForKey:(id)ainLayout:(id)b;
 - (void) fadeWithDelay:(d)a;
 - (void) fade;
 - (void) updateSelectionWithPoint:({CGPoint=dd})a;
 - (void) selectItemAtPoint:({CGPoint=dd})a;
 - (void) fadeAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) stopAnyAutoscrolling;
 - (void) autoscrollTimerFired:(id)a;
 - (void) showAsHUD;
 - (BOOL) usesStraightLeftEdge;
 - (BOOL) usesDarkTheme;
 - (id) maskForShadowViewBlurredBackground;
 - (BOOL) usesTable;
 - (BOOL) usesShadowView;
 - ({CGSize=dd}) preferredSize;
 - (void) setUsesStraightLeftEdge:(BOOL)a;
 - (void) setupShadowViewWithSize:({CGSize=dd})a;
 - (BOOL) usesDimmingView;
 - (q) defaultSelectedIndex;
 - (void) highlightRow:(i)a;
 - (void) insertSelExtraView;
 - (void) performShowAnimation;
 - (i) _internationalKeyRoundedCornerInLayout:(id)a;
 - (void) setReferenceKey:(id)a;
 - (void) setKeyboardDimmed:(BOOL)a;
 - (id) referenceKey;
 - (id) predictiveSwitch;
 - (void) toggleKeyboardPredictionPreference;
 - (void) _delayedFade;
 - (void) setNeedsDisplayForCell:(id)a;
 - (void) setNeedsDisplayForTopBottomCells;
 - (void) endScrolling:(id)a;
 - (void) didSelectItemAtIndex:(i)a;
 - (i) indexForIndexPath:(id)a;
 - (id) localizedTitleForItemAtIndex:(i)a;
 - (id) fontForItemAtIndex:(i)a;
 - (id) subtitleForItemAtIndex:(i)a;
 - (id) subtitleFontForItemAtIndex:(i)a;
 - (void) setHighlightForRowAtIndexPath:(id)ahighlight:(BOOL)b;
 - (void) setUsesDarkTheme:(BOOL)a;
 - (id) titleForItemAtIndex:(i)a;
 - (id) subtitleFont;
 - (BOOL) centerPopUpOverKey;
 - (d) minYOfLastTableCellForSelectionExtraView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) popupRect;
 - (id) table;
 - (id) layout;
 - (void) setLayout:(id)a;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setNeedsDisplay;
 - (id) font;
 - (BOOL) isVisible;
 - (q) numberOfItems;


@end
