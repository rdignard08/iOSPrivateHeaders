
@interface UIPrintRangePickerView : UIPickerView {

    double _shift;
}

 - (void) layoutSubviews;
 - (double) _wheelShift;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;


@end
