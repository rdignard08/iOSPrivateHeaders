
@protocol UICollectionViewDelegate, UIGestureRecognizerDelegate;
@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {

    @"UIKeyboardCandidateGridHeader" _header;
}
 + (d) defaultExtendedControlHeight;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollViewWillBeginDragging:(id)a;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (void) handleTap;
 - (void) _handleKeyboardShowOrHide:(id)a;
 - (BOOL) _shouldShowHideKeyboard;
 - (BOOL) _shouldUseFullMetrics;
 - (void) _setupKeyboardInteraction;


@end
