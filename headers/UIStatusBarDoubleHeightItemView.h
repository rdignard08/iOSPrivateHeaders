
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {

    @"NSString" _contentsString;
    d _letterSpacing;
    BOOL _ellipsize;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (d) extraRightPadding;


@end
