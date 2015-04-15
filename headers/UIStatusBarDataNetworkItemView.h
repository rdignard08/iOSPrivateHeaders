
@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

    i _dataNetworkType;
    i _wifiStrengthRaw;
    i _wifiStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}

 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (d) extraLeftPadding;
 - (d) maximumOverlap;
 - (id) _stringForRSSI;
 - (id) _dataNetworkImage;


@end
