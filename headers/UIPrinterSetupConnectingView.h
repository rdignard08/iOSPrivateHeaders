
@interface UIPrinterSetupConnectingView : UIView {

    UILabel _label;
    UIActivityIndicatorView _activityIndicator;
    double _presentationTime;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) willMoveToSuperview:(id)a;
 - (void) setLabel:(id)a;
 - (void) setMessage:(id)aactive:(BOOL)b;
 - (void) setActivityIndicator:(id)a;
 - (void) presentView;
 - (id) activityIndicator;
 - (double) presentationTime;
 - (void) setPresentationTime:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) label;


@end
