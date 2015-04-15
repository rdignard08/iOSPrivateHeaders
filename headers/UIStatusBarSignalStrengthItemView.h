
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

    int _signalStrengthRaw;
    int _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (double) extraRightPadding;
 - (id) _stringForRSSI;


@end
