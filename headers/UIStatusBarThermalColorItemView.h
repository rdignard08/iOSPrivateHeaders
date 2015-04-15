
@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {

    int _thermalColor;
    BOOL _sunlightMode;
}

 - (BOOL) updateForNewData:(id)aactions:(int)b;
 - (id) contentsImage;
 - (id) _color;


@end
