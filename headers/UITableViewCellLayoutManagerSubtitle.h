
@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager {

}

 - (void) layoutSubviewsOfCell:(id)a ;
 - (id) textLabelForCell:(id)a ;
 - (id) detailTextLabelForCell:(id)a ;
 - (id) imageViewForCell:(id)a ;
 - (double) defaultTextLabelFontSizeForCell:(id)a ;
 - (id) defaultTextLabelFontForCell:(id)a ;
 - (void) getTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})a detailTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})b forCell:(id)c rowWidth:(double)d ;
 - (double) defaultDetailTextLabelFontSizeForCell:(id)a ;
 - (id) defaultDetailTextLabelFontForCell:(id)a ;


@end
