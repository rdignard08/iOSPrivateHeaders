
@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

    int _capacity;
    int _state;
    UIView* _accessoryView;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) legibilityStrength;
 - (double) extraRightPadding;
 - (void) _updateAccessoryImage;
 - (BOOL) _needsAccessoryImage;
 - (id) _accessoryImage;
 - ({CGSize=dd}) _batteryOffsetWithBackground:(id)a;


@end
