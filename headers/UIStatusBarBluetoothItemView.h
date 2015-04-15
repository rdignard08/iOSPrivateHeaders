
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (void) performPendedActions;
 - (d) alphaForConnected:(BOOL)a;
 - (void) _blinkAnimationDidStop:(id)afinished:(id)bcontext:(id)c;
 - (void) setVisible:(BOOL)a;


@end
