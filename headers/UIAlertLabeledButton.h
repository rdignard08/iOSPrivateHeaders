
@interface UIAlertLabeledButton : UIAlertButton {

    UILabel* _typeLabel;
    double _titleOffset;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (double) titleOffset;
 - (void) setTitleOffset:(double)a ;
 - (id) typeLabel;


@end
