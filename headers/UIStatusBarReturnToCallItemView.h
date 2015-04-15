
@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView {

    UILabel _textLabel;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) _appBundleIdentifier;


@end
