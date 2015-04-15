
@interface UIStatusBarTimeItemView : UIStatusBarItemView {

    NSString* _timeString;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (double) extraRightPadding;
 - (long long) textStyle;


@end
