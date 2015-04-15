
@interface UIKeyboardCandidateSortControl : UIView {

    UIKeyboardCandidateBarSegmentControl _segmentedControl;
    int _candidatesVisualStyle;
    BOOL _legacyAlertAppearance;
    UIKBThemedView _themedView;
}
 + (BOOL) _preventsAppearanceProxyCustomization;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) _setRenderConfig:(id)a;
 - (void) setThemedView:(id)a;
 - (id) themedView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acandidatesVisualStyle:(int)blegacyAlertAppearance:(BOOL)c;
 - (id) segmentedControl;
 - (void) setSortControlTitles:(id)a;
 - (void) selectPreviousSegment;
 - (void) selectNextSegment;
 - (void) updateTitleTextAttributes;
 - (void) addSegmentedControlWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) needsToUpdateSortControlForTitles:(id)a;


@end
