
@interface UITableViewCellLayoutManagerValue2 : UITableViewCellLayoutManager {

}

 - (void) layoutSubviewsOfCell:(id)a;
 - (id) textLabelForCell:(id)a;
 - (id) detailTextLabelForCell:(id)a;
 - (id) imageViewForCell:(id)a;
 - (double) defaultTextLabelFontSizeForCell:(id)a;
 - (id) defaultTextLabelFontForCell:(id)a;
 - (void) getTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})adetailTextLabelRect:(^{CGRect={CGPoint=dd}{CGSize=dd}})bforCell:(id)crowWidth:(double)d;
 - (double) defaultDetailTextLabelFontSizeForCell:(id)a;
 - (id) defaultDetailTextLabelFontForCell:(id)a;
 - ({CGSize=dd}) intrinsicContentSizeForCell:(id)a;


@end
