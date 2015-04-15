
@protocol UITextFieldDelegate;
@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {

    UILabel _titleLabel;
    UILabel _enterLabel;
    UIPasscodeField _passcodeField;
    UITextField _textEntryField;
    UILabel _failedLabel;
    UIImageView _failedBackground;
    long long _failedAttemptCount;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (id) titleLabel;
 - (void) textDidChange:(id)a;
 - (void) setTitleLabel:(id)a;
 - (void) setEnterLabel:(id)a;
 - (void) setPasscodeField:(id)a;
 - (void) setTextEntryField:(id)a;
 - (void) setFailedLabel:(id)a;
 - (void) setFailedBackground:(id)a;
 - (id) initWithPrinterName:(id)a;
 - (void) startPINInput;
 - (void) stopPINInput;
 - (id) PIN;
 - (void) showSuccess:(BOOL)a;
 - (id) enterLabel;
 - (id) passcodeField;
 - (id) textEntryField;
 - (id) failedLabel;
 - (id) failedBackground;
 - (long long) failedAttemptCount;
 - (void) setFailedAttemptCount:(long long)a;


@end
