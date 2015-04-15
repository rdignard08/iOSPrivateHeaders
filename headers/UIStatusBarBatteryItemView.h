
@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

    i _capacity;
    i _state;
    @"UIView" _accessoryView;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (d) legibilityStrength;
 - (d) extraRightPadding;
 - (void) _updateAccessoryImage;
 - (BOOL) _needsAccessoryImage;
 - (id) _accessoryImage;
 - ({CGSize=dd}) _batteryOffsetWithBackground:(id)a;


@end
