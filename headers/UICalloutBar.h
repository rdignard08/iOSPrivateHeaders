
@interface UICalloutBar : UIView {

    id m_delegate;
    {CGPoint="x"d"y"d} m_pointBelowControls;
    {CGPoint="x"d"y"d} m_pointAboveControls;
    {CGPoint="x"d"y"d} m_pointLeftOfControls;
    {CGPoint="x"d"y"d} m_pointRightOfControls;
    {CGPoint="x"d"y"d} m_targetPoint;
    int m_targetDirection;
    BOOL m_targetHorizontal;
    BOOL m_fadeAfterCommand;
    BOOL m_recalcVisibleItems;
    BOOL m_shouldAppear;
    int m_pageCount;
    int m_currentPage;
    BOOL m_supressesHorizontalMovement;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_controlFrame;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_targetRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_supressesHorizontalMovementFrame;
    double m_supressedHorizontalMovementX;
    int m_arrowDirection;
    NSArray* m_systemButtonDescriptions;
    NSMutableArray* m_currentSystemButtons;
    NSMutableArray* m_extraButtons;
    UICalloutBarButton* m_nextButton;
    UICalloutBarButton* m_previousButton;
    NSMutableArray* m_rectsToEvade;
    UICalloutBarBackground* m_overlay;
    double m_fadedTime;
    NSDictionary* m_currentAppearOrFadeContext;
    id m_responderTarget;
    NSArray* m_replacements;
    NSArray* m_extraItems;
    NSString* m_untruncatedString;
    BOOL m_didPromptForReplace;
    BOOL m_ignoringEvents;
    BOOL m_showAllReplacements;
    BOOL m_ignoreFade;
}
 + (void) fadeSharedCalloutBar;
 + (void) hideSharedCalloutBar;
 + (void) fadeSharedCalloutBarIfNeededForTouchInView:(id)awindow:(id)b;
 + (id) sharedCalloutBar;
 + (id) activeCalloutBar;
 + (void) _releaseSharedInstance;
 + (BOOL) sharedCalloutBarIsVisible;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) hide;
 - (void) show;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (void) setSupressesHorizontalMovement:(BOOL)a ;
 - (void) clearSupressesHorizontalMovementFrame;
 - (void) setUntruncatedString:(id)a ;
 - (int) textEffectsVisibilityLevel;
 - (BOOL) hasReplacements;
 - (id) replacements;
 - (id) extraItems;
 - (void) setExtraItems:(id)a ;
 - (void) setResponderTarget:(id)a ;
 - (void) fade;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) targetRect;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) recentlyFaded;
 - (void) clearEvadeRects;
 - (void) addRectToEvade:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a pointBelowControls:({CGPoint=dd})b pointAboveControls:({CGPoint=dd})c ;
 - (void) setReplacements:(id)a ;
 - (void) appear;
 - (void) clearReplacements;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) controlFrame;
 - (int) targetDirection;
 - ({CGPoint=dd}) targetPoint;
 - (void) buttonHighlighted:(id)a highlighted:(BOOL)b ;
 - (void) buttonPressed:(id)a ;
 - (void) _showPreviousItems:(id)a ;
 - (void) _showNextItems:(id)a ;
 - (void) flattenForAlertOrResignActive:(id)a ;
 - (void) expandAfterAlertOrBecomeActive:(id)a ;
 - (id) targetForAction:(SEL)a ;
 - (void) _fadeAfterCommand:(SEL)a ;
 - (BOOL) _updateVisibleItemsAnimated:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) textEffectsWindowBoundsWithoutStatusBar;
 - (id) rectsToEvade;
 - (BOOL) supressesHorizontalMovement;
 - (double) supressHorizontalXMovementIfNeededForPoint:({CGPoint=dd})a proposedX:(double)b ;
 - (BOOL) rectClear:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) arrowDirection;
 - (BOOL) calculateControlFrameForCalloutSize:({CGSize=dd})a below:(BOOL)b ;
 - (void) setTargetDirection:(int)a ;
 - (BOOL) calculateControlFrameForCalloutSize:({CGSize=dd})a right:(BOOL)b ;
 - (BOOL) calculateControlFrameInsideTargetRect:({CGSize=dd})a ;
 - ({CGPoint=dd}) pointBelowControls;
 - (void) setTargetPoint:({CGPoint=dd})a ;
 - ({CGPoint=dd}) pointAboveControls;
 - (void) setControlFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) updateAvailableButtons;
 - (BOOL) setFrameForSize:({CGSize=dd})a ;
 - (void) configureButtons:(double)a ;
 - (void) updateForCurrentPage;
 - (void) setArrowDirection:(int)a ;
 - (void) setTargetHorizontal:(BOOL)a ;
 - (void) setPointBelowControls:({CGPoint=dd})a ;
 - (void) setPointAboveControls:({CGPoint=dd})a ;
 - (void) setPointLeftOfControls:({CGPoint=dd})a ;
 - (void) setPointRightOfControls:({CGPoint=dd})a ;
 - (void) _endOngoingAppearOrFadeAnimations;
 - (void) appearAnimationDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) setCurrentAppearOrFadeContext:(id)a ;
 - (id) currentAppearOrFadeContext;
 - (void) fadeAnimationDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) resetPage;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a pointLeftOfControls:({CGPoint=dd})b pointRightOfControls:({CGPoint=dd})c ;
 - (void) setTargetRect:({CGRect={CGPoint=dd}{CGSize=dd}})a arrowDirection:(int)b ;
 - (void) updateAnimated:(BOOL)a ;
 - ({CGPoint=dd}) pointLeftOfControls;
 - ({CGPoint=dd}) pointRightOfControls;
 - (BOOL) targetHorizontal;
 - (id) responderTarget;
 - (BOOL) showAllReplacements;
 - (void) setShowAllReplacements:(BOOL)a ;
 - (id) untruncatedString;
 - (id) delegate;
 - (void) removeFromSuperview;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) visible;
 - (void) update;


@end
