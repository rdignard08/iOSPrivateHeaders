
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (void) performPendedActions;
 - (double) alphaForConnected:(BOOL)a ;
 - (void) _blinkAnimationDidStop:(id)a finished:(id)b context:(id)c ;
 - (void) setVisible:(BOOL)a ;


@end
