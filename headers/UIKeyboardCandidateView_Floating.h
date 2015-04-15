
@protocol UIKeyboardCandidateViewInline;
@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _collapsedRect;
    {CGSize="width"d"height"d} presentationSize;
}
 + (double) defaultExtendedControlHeight;

 - (void) layoutSubviews;
 - (void) candidatesDidChange;
 - (id) _inheritedRenderConfig;
 - (void) setCandidateViewExtended:(BOOL)a ;
 - (id) activeCandidateList;
 - (unsigned long long) _numberOfColumns:(BOOL)a ;
 - (void) setPresentationSize:({CGSize=dd})a ;
 - ({CGSize=dd}) presentationSize;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
