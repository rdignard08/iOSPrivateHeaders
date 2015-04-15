
@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {

    NSString* _percentString;
}

 - (void) dealloc;
 - (long long) textAlignment;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) extraRightPadding;
 - (BOOL) animatesDataChange;
 - (long long) textStyle;


@end
