
@interface UIAlertMediaButton : UIAlertButton {

    UIImageView* _checkmarkView;
    UIImage* _tableIcon;
    UIImage* _highlightedTableIcon;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) checkmarkView;
 - (id) tableIcon;
 - (void) setTableIcon:(id)a ;
 - (id) highlightedTableIcon;
 - (void) setHighlightedTableIcon:(id)a ;


@end
