
@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView {

    @"UILabel" _textLabel;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) _appBundleIdentifier;


@end
