
@interface _UIDocumentPickerUnavailableViewController : UIViewController {

    UIImageView _leadImageView;
    UILabel _titleLabel;
    UILabel _textLabel;
    UILabel _textLabel2;
    UIButton _button;
    NSURL _buttonURL;
    NSLayoutConstraint _topConstraint;
    NSLayoutConstraint _imageToTitleConstraint;
    NSLayoutConstraint _titleToTextConstraint;
    NSLayoutConstraint _textToTextConstraint;
    NSLayoutConstraint _textToButtonConstraint;
}

 - (void) dealloc;
 - (id) button;
 - (void) traitCollectionDidChange:(id)a;
 - (id) titleLabel;
 - (id) textLabel;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) setTitleLabel:(id)a;
 - (void) setTextLabel:(id)a;
 - (void) setLeadImageView:(id)a;
 - (id) leadImageView;
 - (void) setTopConstraint:(id)a;
 - (id) topConstraint;
 - (void) setImageToTitleConstraint:(id)a;
 - (id) imageToTitleConstraint;
 - (void) setTitleToTextConstraint:(id)a;
 - (id) titleToTextConstraint;
 - (void) setButtonURL:(id)a;
 - (void) setTextLabel2:(id)a;
 - (id) textLabel2;
 - (void) setTextToTextConstraint:(id)a;
 - (id) textToTextConstraint;
 - (void) setButton:(id)a;
 - (void) _buttonPressed:(id)a;
 - (void) setTextToButtonConstraint:(id)a;
 - (id) textToButtonConstraint;
 - (void) _fontSizeDidChange:(id)a;
 - (id) buttonURL;
 - (id) _buttonBackgroundImageForState:(unsigned long long)atraits:(id)b;


@end
