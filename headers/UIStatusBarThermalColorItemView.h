
@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {

    int _thermalColor;
    BOOL _sunlightMode;
}

 - (BOOL) updateForNewData:(id)a actions:(int)b ;
 - (id) contentsImage;
 - (id) _color;


@end
