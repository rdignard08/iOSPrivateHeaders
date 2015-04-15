
@interface UIStoryboardEmbedSegue : UIStoryboardSegue {

    UIView _containerView;
}

 - (void) dealloc;
 - (id) containerView;
 - (void) setContainerView:(id)a;
 - (void) perform;


@end
