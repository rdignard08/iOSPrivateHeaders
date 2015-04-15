
@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

    int _capacity;
}

 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (double) extraLeftPadding;


@end
