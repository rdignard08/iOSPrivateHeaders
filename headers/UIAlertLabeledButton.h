
@interface UIAlertLabeledButton : UIAlertButton {

    @"UILabel" _typeLabel;
    d _titleOffset;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (d) titleOffset;
 - (void) setTitleOffset:(d)a;
 - (id) typeLabel;


@end
