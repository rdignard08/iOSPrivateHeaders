
@interface UIPrintRangePickerView : UIPickerView {

    double _shift;
}

 - (void) layoutSubviews;
 - (double) _wheelShift;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;


@end
