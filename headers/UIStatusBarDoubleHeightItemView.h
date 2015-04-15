
@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {

    NSString _contentsString;
    double _letterSpacing;
    BOOL _ellipsize;
}

 - (void) dealloc;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) extraRightPadding;


@end
