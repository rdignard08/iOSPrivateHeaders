
@interface UIInputViewRotateTransition : UIInputViewTransition {

}

 - (BOOL) shouldCompleteOnSuspend;
 - (BOOL) shouldRecomputeEndFrame;
 - (BOOL) fadeAccessoryView;
 - (BOOL) subsumesTransition:(id)a;
 - (void) postNotificationsForTransitionEnd;
 - (void) postNotificationsForTransitionStart;


@end
