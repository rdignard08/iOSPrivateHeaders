
@interface UIKeyboardCandidateView : UIInputView {

    UIKeyboardCandidateBar* _bar;
    UIKeyboardCandidateSortControl* _sortControl;
    UIKeyboardCandidateGrid* _extendedView;
    UIView<UIKeyboardCandidateList>* _inlineView;
    UIImageView* _leftBackground;
    UIImageView* _rightBackground;
    UIKeyboardCandidateUnsplitKeyboardToggleButton* _leftButton;
    UIKeyboardCandidateSplitKeyboardToggleButton* _rightButton;
    {?="isExtended"I"didMinimizeKeyboard"I"isSplit"I} _candidateBarFlags;
}
 + (id) sharedInstance;
 + (id) activeCandidateView;
 + (id) sharedInstanceForInlineView:(BOOL)a;
 + (id) activeCandidateList;
 + (void) setActiveCandidateView:(id)a;
 + (double) defaultExtendedControlHeight;
 + (id) sharedInstanceForInlineView;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (void) willMoveToSuperview:(id)a;
 - (void) candidatesDidChange;
 - (id) inlineView;
 - (BOOL) isExtended;
 - (void) setCandidateViewExtended:(BOOL)a;
 - (id) activeCandidateList;
 - (void) _toggleExtendedCandidateView:(id)a;
 - (void) updatePageControlStatus;
 - (void) setCandidateBarCanExtend:(BOOL)a;
 - (unsigned long long) _numberOfColumns:(BOOL)a;
 - (double) barHeight;
 - (void) setCandidatesToExtendedViewFromCollapsedView:(id)a;
 - (double) extendedViewAnimationDuration;
 - (void) setInlineView:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
