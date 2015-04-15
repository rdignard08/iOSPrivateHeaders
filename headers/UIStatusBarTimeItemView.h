
@interface UIStatusBarTimeItemView : UIStatusBarItemView {

    NSString _timeString;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) extraRightPadding;
 - (long long) textStyle;


@end
