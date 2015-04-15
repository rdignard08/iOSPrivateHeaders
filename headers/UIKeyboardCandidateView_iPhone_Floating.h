
@protocol UIKeyboardCandidateViewInline;
@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _collapsedRect;
    BOOL _withKeyboard;
}

 - (void) candidatesDidChange;
 - (void) setCandidateViewExtended:(BOOL)a;
 - (id) activeCandidateList;
 - (unsigned long long) _numberOfColumns:(BOOL)a;
 - (BOOL) _shouldShowHideKeyboard;
 - (BOOL) _shouldUseFullMetrics;
 - (void) _collapse:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
