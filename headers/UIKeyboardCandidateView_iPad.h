
@protocol UICollectionViewDelegate, UIKeyboardCandidateBarDelegate;
@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {

    @"UIKeyboardCandidatePageControl" _pageControl;
}
 + (d) defaultExtendedControlHeight;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollViewDidScroll:(id)a;
 - (i) _clipCornersOfView:(id)a;
 - (void) setCandidateViewExtended:(BOOL)a;
 - (void) didEndSplitTransition;
 - (void) candidateBarDidScroll:(id)a;
 - (void) updatePageControlStatus;
 - (Q) _numberOfColumns:(BOOL)a;
 - (d) _additionalClipHeight;
 - (d) rightButtonYOffset;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
