
@protocol UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate;
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

    UIInputSwitcherTableView* m_table;
    UIInputSwitcherShadowView* m_shadowView;
    UIInputSwitcherSelectionExtraView* m_selExtraView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_referenceRect;
    double m_pointerOffset;
    BOOL m_scrollable;
    BOOL m_startAutoscroll;
    BOOL m_scrolling;
    BOOL m_shouldFade;
    {CGPoint="x"d"y"d} m_point;
    double m_scrollStartTime;
    int m_scrollDirection;
    NSTimer* m_scrollTimer;
    int m_visibleRows;
    int m_firstVisibleRow;
    int m_mode;
    UIDimmingView* m_dimmingView;
    BOOL _usesStraightLeftEdge;
    BOOL _usesDarkTheme;
    UIKBTree* _referenceKey;
    UIKeyboardLayoutStar* _layout;
}
 + (id) viewThatContainsBaseKey;

 - (void) dealloc;
 - (void) setMode:(int)a;
 - (void) hide;
 - (void) show;
 - (void) tableView:(id)awillDisplayCell:(id)bforRowAtIndexPath:(id)c;
 - (double) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (id) tableView:(id)awillSelectRowAtIndexPath:(id)b;
 - (id) tableView:(id)awillDeselectRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (void) scrollViewDidScroll:(id)a;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) setRenderConfig:(id)a;
 - (void) applicationWillSuspend:(id)a;
 - (int) mode;
 - (id) dimmingView;
 - (void) dimmingViewWasTapped:(id)a;
 - (void) showAsPopupForKey:(id)ainLayout:(id)b;
 - (void) fadeWithDelay:(double)a;
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
 - (long long) defaultSelectedIndex;
 - (void) highlightRow:(int)a;
 - (void) insertSelExtraView;
 - (void) performShowAnimation;
 - (int) _internationalKeyRoundedCornerInLayout:(id)a;
 - (void) setReferenceKey:(id)a;
 - (void) setKeyboardDimmed:(BOOL)a;
 - (id) referenceKey;
 - (id) predictiveSwitch;
 - (void) toggleKeyboardPredictionPreference;
 - (void) _delayedFade;
 - (void) setNeedsDisplayForCell:(id)a;
 - (void) setNeedsDisplayForTopBottomCells;
 - (void) endScrolling:(id)a;
 - (void) didSelectItemAtIndex:(int)a;
 - (int) indexForIndexPath:(id)a;
 - (id) localizedTitleForItemAtIndex:(int)a;
 - (id) fontForItemAtIndex:(int)a;
 - (id) subtitleForItemAtIndex:(int)a;
 - (id) subtitleFontForItemAtIndex:(int)a;
 - (void) setHighlightForRowAtIndexPath:(id)ahighlight:(BOOL)b;
 - (void) setUsesDarkTheme:(BOOL)a;
 - (id) titleForItemAtIndex:(int)a;
 - (id) subtitleFont;
 - (BOOL) centerPopUpOverKey;
 - (double) minYOfLastTableCellForSelectionExtraView;
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
 - (long long) numberOfItems;


@end
