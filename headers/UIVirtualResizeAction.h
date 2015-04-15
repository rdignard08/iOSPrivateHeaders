
@interface UIVirtualResizeAction : BSAction {

}

 - (long long) UIActionType;
 - ({CGSize=dd}) virtualSize;
 - (long long) virtualHorizontalSizeClass;
 - (long long) virtualVerticalSizeClass;
 - (id) initWithVirtualSize:({CGSize=dd})avirtualHorizontalSizeClass:(long long)bvirtualVerticalSizeClass:(long long)c;
 - (id) initWithInfo:(id)atimeout:(double)bforResponseOnQueue:(id)cwithHandler:(@?)d;
 - (id) keyDescriptionForSetting:(unsigned long long)a;


@end
