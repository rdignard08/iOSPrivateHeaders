
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

    int _signalStrengthRaw;
    int _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (double) extraRightPadding;
 - (id) _stringForRSSI;


@end
