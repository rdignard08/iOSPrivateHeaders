
@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView {

    UILabel* _textLabel;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) _appBundleIdentifier;


@end
