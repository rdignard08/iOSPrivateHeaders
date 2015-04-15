
@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

    int _capacity;
}

 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) extraLeftPadding;


@end
