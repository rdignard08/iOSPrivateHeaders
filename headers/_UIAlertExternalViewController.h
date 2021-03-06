
@interface _UIAlertExternalViewController : UIViewController {

    UILabel* _titleLabel;
    UILabel* _messageLabel;
    NSMutableArray* _buttons;
    UIAlertView* _representedAlert;
}

 - (void) dealloc;
 - (void) _physicalButtonsBegan:(id)a withEvent:(id)b ;
 - (void) _physicalButtonsEnded:(id)a withEvent:(id)b ;
 - (void) viewDidLayoutSubviews;
 - (void) viewDidLoad;
 - (id) _titleAttributedString;
 - (id) _messageAttributedString;
 - (id) _textAttributes;
 - (id) representedAlert;
 - (id) _titleAttributes;
 - (id) _messageAttributes;
 - (id) _messageAttributesSmallText;
 - (void) _buttonTapped:(id)a ;
 - (void) _dismissIfCapable;
 - (id) _buttonWithTitle:(id)a index:(long long)b ;
 - (id) _messageAttributedStringSmallText;
 - (void) setRepresentedAlert:(id)a ;
 - (id) init;


@end
