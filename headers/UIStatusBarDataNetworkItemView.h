
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (double) extraLeftPadding;
 - (double) maximumOverlap;
 - (id) _stringForRSSI;
 - (id) _dataNetworkImage;


@end
