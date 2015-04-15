
@interface UIPrinterSetupDisplayPINView : UIView {

    UILabel* _titleLabel;
    UIButton* _nextButton;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) titleLabel;
 - (void) setTitleLabel:(id)a ;
 - (void) setNextButton:(id)a ;
 - (void) setMessage:(id)a showButton:(BOOL)b ;
 - (id) nextButton;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
