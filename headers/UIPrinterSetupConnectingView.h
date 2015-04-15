
@interface UIPrinterSetupConnectingView : UIView {

    @"UILabel" _label;
    @"UIActivityIndicatorView" _activityIndicator;
    d _presentationTime;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) willMoveToSuperview:(id)a;
 - (void) setLabel:(id)a;
 - (void) setMessage:(id)aactive:(BOOL)b;
 - (void) setActivityIndicator:(id)a;
 - (void) presentView;
 - (id) activityIndicator;
 - (d) presentationTime;
 - (void) setPresentationTime:(d)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;


@end
