
@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {

    i _thermalColor;
    BOOL _sunlightMode;
}

 - (BOOL) updateForNewData:(id)aactions:(i)b;
 - (id) contentsImage;
 - (id) _color;


@end
