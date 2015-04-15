
@interface UIPrinterTableViewCell : UITableViewCell {

    int _printerState;
    UIActivityIndicatorView _activityIndicator;
}

 - (void) setPrinterState:(int)a;
 - (int) printerState;


@end
