
@interface UIStatusBarTetheringItemView : UIStatusBarItemView {

    int _tetheringConnectionCount;
}

 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;


@end
