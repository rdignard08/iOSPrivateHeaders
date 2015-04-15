
@interface _UICurrentContextPresentationController : UIPresentationController {

}

 - (long long) presentationStyle;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - ({?=qq}) __sizeClassPair;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) shouldPresentInFullscreen;
 - (BOOL) _shouldRespectDefinesPresentationContext;
 - (id) _firstCurrentContextChildInWindow;


@end
