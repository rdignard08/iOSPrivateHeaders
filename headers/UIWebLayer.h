
@interface UIWebLayer : CALayer {

    BOOL _layoutsSuspended;
}

 - (void) setLayoutsSuspended:(BOOL)a;
 - (void) setNeedsLayout;


@end
