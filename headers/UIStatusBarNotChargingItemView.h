
@interface UIStatusBarNotChargingItemView : UIStatusBarItemView {

    NSString _notChargingString;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;


@end
