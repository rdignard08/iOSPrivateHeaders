
@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {

    i _signalStrengthRaw;
    i _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (d) extraRightPadding;
 - (id) _stringForRSSI;


@end
