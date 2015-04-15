
@protocol UICollectionViewDelegate, UIKeyboardCandidateBarDelegate;
@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {

    UIKeyboardCandidatePageControl* _pageControl;
}
 + (double) defaultExtendedControlHeight;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) scrollViewDidScroll:(id)a ;
 - (int) _clipCornersOfView:(id)a ;
 - (void) setCandidateViewExtended:(BOOL)a ;
 - (void) didEndSplitTransition;
 - (void) candidateBarDidScroll:(id)a ;
 - (void) updatePageControlStatus;
 - (unsigned long long) _numberOfColumns:(BOOL)a ;
 - (double) _additionalClipHeight;
 - (double) rightButtonYOffset;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
